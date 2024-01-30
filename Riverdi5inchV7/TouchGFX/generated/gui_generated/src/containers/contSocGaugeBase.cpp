/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/contSocGaugeBase.hpp>
#include <images/BitmapDatabase.hpp>

contSocGaugeBase::contSocGaugeBase()
{
    setWidth(232);
    setHeight(292);
    HorLinePage1.setXY(0, 287);
    HorLinePage1.setBitmap(touchgfx::Bitmap(BITMAP_SMALLLINE_ID));
    add(HorLinePage1);

    SoC_Gauge.setXY(96, 28);
    SoC_Gauge.setProgressIndicatorPosition(0, 0, 300, 296);
    SoC_Gauge.setRange(0, 100);
    SoC_Gauge.setDirection(touchgfx::AbstractDirectionProgress::UP);
    SoC_Gauge.setBackground(touchgfx::Bitmap(BITMAP_BATTERYFILLFRAMEOPAC_ID));
    SoC_Gauge.setBitmap(BITMAP_BATTERYFILL_ID);
    SoC_Gauge.setValue(50);
    SoC_Gauge.setAnchorAtZero(true);
    add(SoC_Gauge);

    SoCGaugeBackground.setXY(96, 0);
    SoCGaugeBackground.setBitmap(touchgfx::Bitmap(BITMAP_BATTERYFILLFRAME_ID));
    add(SoCGaugeBackground);
}

contSocGaugeBase::~contSocGaugeBase()
{

}

void contSocGaugeBase::initialize()
{

}
