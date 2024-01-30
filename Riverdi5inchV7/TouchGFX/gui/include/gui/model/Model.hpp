#ifndef MODEL_HPP
#define MODEL_HPP



#ifdef SIMULATOR
#include <touchgfx/hal/Types.hpp>

typedef struct {
uint8_t soc;
 bool onOff;
 float chassisX=-0.4;
 float chassisY=-6.2;


 }DataBase_t;

#endif


class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();
protected:
    ModelListener* modelListener;
};

#endif // MODEL_HPP
