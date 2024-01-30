#ifndef CONTBATTERYTEMP_HPP
#define CONTBATTERYTEMP_HPP

#include <gui_generated/containers/contBatteryTempBase.hpp>

class contBatteryTemp : public contBatteryTempBase
{
public:
    contBatteryTemp();
    virtual ~contBatteryTemp() {}

    virtual void initialize();
protected:
};

#endif // CONTBATTERYTEMP_HPP
