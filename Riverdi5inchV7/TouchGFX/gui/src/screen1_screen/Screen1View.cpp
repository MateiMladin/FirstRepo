#include <gui/screen1_screen/Screen1View.hpp>


#include <string.h>




Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::updateCanValue(DataBase_t **dataBase)
{

	contSocGauge1.updateCanValue((*dataBase)->soc);
	contSpiritLevel1.updateCanValue((*dataBase)->chassisX, (*dataBase)->chassisY);


	Unicode::snprintf(textAreaSoCBuffer, TEXTAREASOC_SIZE, "%d", (*dataBase)->soc);

	Unicode::snprintf(chassisXtextAreaBuffer1, CHASSISXTEXTAREABUFFER1_SIZE, "%d", int((*dataBase)->chassisX*100));
	Unicode::snprintf(chassisXtextAreaBuffer2, CHASSISXTEXTAREABUFFER2_SIZE, "%d", (*dataBase)->chassisX);
	//chassisXtextAreaBuffer1[0]='-';

	Unicode::snprintf(chassisYtextAreaBuffer1, CHASSISYTEXTAREABUFFER1_SIZE, "%d", ((*dataBase)->chassisY > -1 and (*dataBase)->chassisY < 0) ? int((*dataBase)->chassisY)* -1 : int((*dataBase)->chassisY));
	Unicode::snprintf(chassisYtextAreaBuffer2, CHASSISYTEXTAREABUFFER2_SIZE, "%d", int(((*dataBase)->chassisY-int((*dataBase)->chassisY))*100+0.5));

	//textArea1Buffer2[0]=textArea1Buffer1[0];
	//textArea1Buffer2[1]=textArea1Buffer1[1];
	//textArea1Buffer2[2]=textArea1Buffer1[2];

//	textArea1Buffer1[0]='5';
//    textArea1Buffer1[1]='6';
//	textArea1Buffer1[2]='7';
//	textArea1Buffer1[3]='8';
	//SoC_Gauge.setValue(60);


	//SoC_Gauge.invalidate();
	textAreaSoC.invalidate();
	chassisXtextArea.invalidate();
	chassisYtextArea.invalidate();

	distress.setVisible((*dataBase)->onOff);
	distress.invalidate();
	contSpiritLevel1.invalidate();
	//application().gotoScreen1ScreenSlideTransitionEast();

}
