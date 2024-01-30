#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>


#ifndef SIMULATOR
#include "fdcan.h"



  extern DataBase_t dataBase;




#endif

#ifdef SIMULATOR

 DataBase_t dataBase;

#endif

Model::Model() : modelListener(0)
{

}

void Model::tick()
{


 modelListener->updateCanValue(&dataBase);

}
