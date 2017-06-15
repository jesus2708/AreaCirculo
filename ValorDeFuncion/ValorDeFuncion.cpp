#include "stdafx.h"  //________________________________________ ValorDeFuncion.cpp
#include "ValorDeFuncion.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	ValorDeFuncion app;
	return app.BeginDialog(IDI_ValorDeFuncion, hInstance);
}

void ValorDeFuncion::Window_Open(Win::Event& e)
{
	
}

void ValorDeFuncion::btClick_Click(Win::Event& e)
{
	const double radio = tbxRadio.DoubleValue;
	tbxArea.DoubleValue = CalculateArea(radio);
}
double ValorDeFuncion::CalculateArea(double radio)
{
	return M_PI*radio*radio;
}

