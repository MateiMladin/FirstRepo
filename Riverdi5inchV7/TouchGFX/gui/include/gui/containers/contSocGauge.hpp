#ifndef CONTSOCGAUGE_HPP
#define CONTSOCGAUGE_HPP

#include <gui_generated/containers/contSocGaugeBase.hpp>

class contSocGauge : public contSocGaugeBase
{
public:
    contSocGauge();
    virtual ~contSocGauge() {}

    virtual void initialize();
    virtual void updateCanValue(uint8_t val);
protected:
};

#endif // CONTSOCGAUGE_HPP
