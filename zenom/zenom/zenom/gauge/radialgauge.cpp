#include "radialgauge.h"

RadialGauge::RadialGauge(QWidget *pParent)
    : QwtDial(pParent)
{
    setReadOnly( true );
    setOrigin( 135.0 );
    setScaleArc( 0.0, 270.0 );
    setLowerBound(0.0);
    setUpperBound(100.0);
    setScaleStepSize(10);

    setNeedle( SIMPLE_NEEDLE, NEEDLE_STYLE_1, Qt::red, QColor( Qt::gray ).light( 130 ) );
    setTextColor( Qt::white );
    setBackgroundColor( QColor( Qt::darkGray ).dark( 150 ) );
    setLineWidth( 4 );
    setFrameShadow( QwtDial::Sunken );
    setScaleMaxMajor(12);
}

RadialGauge::~RadialGauge()
{

}

GaugeType RadialGauge::type()
{
	return RADIAL_GAUGE;
}

void RadialGauge::setValue( double pValue )
{
	QwtDial::setValue( pValue );
}

void RadialGauge::saveSettings(QSettings& pSettings)
{
    pSettings.setValue("scaleMaxMajor", mScaleMaxMajor);
    pSettings.setValue("scaleMaxMinor", mScaleMaxMinor);
    pSettings.setValue("needleType", static_cast<int>(mNeedleType));
    pSettings.setValue("needleStyle", static_cast<int>(mNeedleStyle));
    pSettings.setValue("needleColor1", mNeedleColor1);
    pSettings.setValue("needleColor2", mNeedleColor2);
    pSettings.setValue("textColor", textColor());
    pSettings.setValue("backgroundColor", backgroundColor());
}

void RadialGauge::loadSettings( QSettings& pSettings )
{
    // Scale
    setLowerBound( -20.0 );
    setUpperBound( 20.0 );
    setOrigin( 135);
    setScaleArc( 0, 270 );

     // Ticks
    setScaleStepSize( 5 );

    // Needle
    setValue( 0 );

    AbstractGauge::loadSettings( pSettings );
}


QWidget* RadialGauge::asWidget()
{
	return this;
}

void RadialGauge::setNeedle( NeedleType pNeedleType, NeedleStyle pNeedleStyle, QColor c1, QColor c2 )
{
	mNeedleType = pNeedleType;
	mNeedleStyle = pNeedleStyle;
	mNeedleColor1 = c1;
	mNeedleColor2 = c2;

	switch ( pNeedleType )
	{
	case MAGNET_NEEDLE:
		{
			QwtCompassMagnetNeedle::Style style = pNeedleStyle == NEEDLE_STYLE_1 ? 
				QwtCompassMagnetNeedle::ThinStyle : QwtCompassMagnetNeedle::TriangleStyle;
			QwtDial::setNeedle(	new QwtCompassMagnetNeedle( style, c1, c2 ) );
		}
		break;

	case WIND_ARROW_NEEDLE:
        {
            QwtCompassWindArrow::Style style = pNeedleStyle == NEEDLE_STYLE_1 ?
                QwtCompassWindArrow::Style1 : QwtCompassWindArrow::Style2;
            QwtDial::setNeedle(	new QwtCompassWindArrow( style, c1, c2 ) );
		}
        break;

	default:	// Simple Needle
		{
			QwtDialSimpleNeedle::Style style = pNeedleStyle == NEEDLE_STYLE_1 ? 
                QwtDialSimpleNeedle::Arrow : QwtDialSimpleNeedle::Ray;
            QwtDial::setNeedle( new QwtDialSimpleNeedle( style, true, c1, c2 ) );
		}
		break;
	}
}

RadialGauge::NeedleType RadialGauge::needleType()
{
	return mNeedleType;
}

RadialGauge::NeedleStyle RadialGauge::needleStyle()
{
	return mNeedleStyle;
}

QColor RadialGauge::needleColor1()
{
	return mNeedleColor1;
}

QColor RadialGauge::needleColor2()
{
	return mNeedleColor2;
}

void RadialGauge::setTextColor( const QColor& pColor )
{	
	QPalette& p = (QPalette&)palette();
	p.setColor(QPalette::All, QPalette::Text, pColor);
}

QColor RadialGauge::textColor()
{
	return palette().color( QPalette::Text );
}

void RadialGauge::setBackgroundColor( const QColor& pColor )
{
	QPalette& p = (QPalette&)palette();
	p.setColor( QPalette::Base, pColor );
	p.setColor( QPalette::Window, pColor.dark( 150 ) );
	p.setColor( QPalette::Mid, pColor.dark( 110 ) );
	p.setColor( QPalette::Light, pColor.light( 170 ) );
	p.setColor( QPalette::Dark, pColor.dark( 170 ) );
	p.setColor( QPalette::WindowText, pColor );
}

QColor RadialGauge::backgroundColor()
{
	return palette().color( QPalette::Base );
}

void RadialGauge::setScale( int maxMajIntv, int maxMinIntv, double step /* = 10.0 */)
{
    mScaleMaxMajor = maxMajIntv;
    mScaleMaxMinor = maxMinIntv;

    setScaleArc( maxMajIntv, maxMinIntv );
    setScaleStepSize(step);

}

int RadialGauge::scaleMaxMajor()
{
	return mScaleMaxMajor;
}

int RadialGauge::scaleMaxMinor()
{
	return mScaleMaxMinor;
}
