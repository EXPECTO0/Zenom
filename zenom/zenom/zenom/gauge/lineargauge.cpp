#include "lineargauge.h"

LinearGauge::LinearGauge(QWidget *pParent)
    : QwtThermo(pParent)
{
    setOrientation( Qt::Vertical, QwtThermo::TrailingScale );
    setScale( 0, 10 );
    setScaleStepSize( 2 );
    setFillBrush( Qt::green );
    setAlarmBrush( Qt::red );
    setAlarmLevel( 7.0 );
    setAlarmEnabled( true );
    setValue( 8.0 );
}


LinearGauge::~LinearGauge()
{
	
}

GaugeType LinearGauge::type()
{
	return LINEAR_GAUGE;
}

void LinearGauge::setValue( double pValue )
{
	QwtThermo::setValue( pValue );
}

void LinearGauge::saveSettings(QSettings& pSettings)
{
    // Range
    pSettings.setValue("orientation", orientation());
    pSettings.setValue("scalePosition", scalePosition());
    pSettings.setValue("minValue", minimum());
    pSettings.setValue("maxValue", maximum());

    // Ticks
    pSettings.setValue("scaleStepSize", scaleStepSize());
    pSettings.setValue("labels", scaleDraw()->hasComponent( QwtAbstractScaleDraw::Labels ));
    pSettings.setValue("font", font().family());
    pSettings.setValue("fontSize", font().pointSize());

    // Pipe
    pSettings.setValue("value", value());
    pSettings.setValue("pipeWidth", pipeWidth());
    pSettings.setValue("pipeColor", fillBrush().color().rgb());

    // Alarm
    pSettings.setValue("alarmEnabled", alarmEnabled());
    pSettings.setValue("alarmLevel", alarmLevel());
    pSettings.setValue("alarmBrush", alarmBrush().color().rgb());

    // Color
    pSettings.setValue("textColor", textColor().rgb());
    pSettings.setValue("backgroundColor", backgroundColor().rgb());

    AbstractGauge::saveSettings( pSettings );
}

void LinearGauge::loadSettings(QSettings& pSettings)
{
    // Scale
    Qt::Orientation orientation = (Qt::Orientation) pSettings.value("orientation", Qt::Vertical).toInt();
    QwtThermo::ScalePosition scalePosition = (QwtThermo::ScalePosition) pSettings.value("scalePosition", QwtThermo::TrailingScale).toInt();
    setOrientation( orientation, scalePosition );
    setLowerBound( pSettings.value("minValue", 0).toDouble() );
    setUpperBound( pSettings.value("maxValue", 10).toDouble() );

    // Ticks
    setScaleStepSize( pSettings.value("scaleStepSize", 2).toInt() );
    scaleDraw()->enableComponent( QwtAbstractScaleDraw::Labels, pSettings.value("labels", true).toBool() );
    setFont( QFont(	pSettings.value("font").toString(), pSettings.value("fontSize", 8).toDouble()) );

    // Pipe
    setValue( pSettings.value("value", 8).toDouble() );
    setPipeWidth( pSettings.value("pipeWidth", 10).toInt() );
    setFillBrush( QBrush( pSettings.value("pipeColor").toUInt() ) );

    // Alarm
    setAlarmLevel( pSettings.value("alarmLevel", 7).toDouble() );
    setAlarmBrush( QBrush( pSettings.value("alarmBrush").toUInt() ) );
    setAlarmEnabled( pSettings.value("alarmEnabled").toBool() );

    // Color
    setTextColor( pSettings.value("textColor").toUInt() );
    setBackgroundColor( pSettings.value("backgroundColor").toUInt() );

    AbstractGauge::loadSettings( pSettings );
}



QWidget* LinearGauge::asWidget()
{
	return this;
}


void LinearGauge::setOrientation( Qt::Orientation pOrientation, QwtThermo::ScalePosition pPosition  )
{
    mOrientation = pOrientation;
    QwtThermo::setOrientation(pOrientation);
    QwtThermo::setScalePosition(pPosition);
}

Qt::Orientation LinearGauge::orientation()
{
	return mOrientation;
}

void LinearGauge::setTextColor( const QColor& pColor )
{	
	QPalette& p = (QPalette&)palette();
	p.setColor(QPalette::All, QPalette::Text, pColor);
	p.setColor(QPalette::All, QPalette::WindowText, pColor);
}

QColor LinearGauge::textColor()
{
	return palette().color( QPalette::Text );
}

void LinearGauge::setBackgroundColor( const QColor& pColor )
{
	QPalette& p = (QPalette&)palette();
	p.setColor( QPalette::Base, pColor );
}

QColor LinearGauge::backgroundColor()
{
	return palette().color( QPalette::Base );
}

QwtScaleDraw * LinearGauge::scaleDraw()
{
	return QwtThermo::scaleDraw();
}
