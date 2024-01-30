#ifndef CONTSPIRITLEVEL_HPP
#define CONTSPIRITLEVEL_HPP

#include <gui_generated/containers/contSpiritLevelBase.hpp>

class contSpiritLevel : public contSpiritLevelBase
{
public:
    contSpiritLevel();
    virtual ~contSpiritLevel() {}

    virtual void initialize();

    virtual void updateCanValue(float valX, float valY);

    int map(float x, float in_min, float in_max, float out_min, float out_max) {
      return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
    }

protected:
};

#endif // CONTSPIRITLEVEL_HPP
