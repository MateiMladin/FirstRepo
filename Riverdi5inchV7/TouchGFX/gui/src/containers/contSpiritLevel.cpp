#include <gui/containers/contSpiritLevel.hpp>

//#ifndef SIMULATOR
//#include "stm32u5xx_hal.h"
//#include "rng.h"
//
//extern RNG_HandleTypeDef hrng;
//   uint32_t RandomNumber;
//   float RandomNumberMod;
//
//
//#endif

contSpiritLevel::contSpiritLevel()
{

}

void contSpiritLevel::initialize()
{
    contSpiritLevelBase::initialize();

//#ifndef SIMULATOR
//
//	HAL_RNG_GenerateRandomNumber(&hrng, &RandomNumber);
//
//
//	RandomNumberMod = RandomNumber % 60;
//	RandomNumberMod = RandomNumberMod/10;
//
//	topGlassSL_tMapper.setAngles(0.0f, 0.0f, RandomNumberMod);
//#endif

}



void contSpiritLevel::updateCanValue(float valX, float valY)
{



	int16_t x;
	int16_t y;

	valX >= 0 ?  x= map(valX, 0, 5, 75, 59) : x= map(valX, 0, -5, 75, 91);
	valY >= 0 ?  y= map(valY, 0, 5, 95, 111) : y= map(valY, 0, -5, 95, 78);

	if (valX>5 or valY>5 or valX<-5 or valY<-5) amberBackSL.setVisible(true);
	else if(amberBackSL.isVisible()==true) amberBackSL.setVisible(false);

	redDotSL.setXY(x, y);


	//redDotSL.invalidate();


}
