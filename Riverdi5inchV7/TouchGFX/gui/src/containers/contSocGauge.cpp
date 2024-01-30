#include <gui/containers/contSocGauge.hpp>

contSocGauge::contSocGauge()
{

}

void contSocGauge::initialize()
{
    contSocGaugeBase::initialize();
}


void contSocGauge::updateCanValue(uint8_t val)
{


	SoC_Gauge.setValue(val);
	SoC_Gauge.invalidate();


}
