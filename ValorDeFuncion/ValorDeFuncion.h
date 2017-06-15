#pragma once  //______________________________________ ValorDeFuncion.h  
#include "Resource.h"
class ValorDeFuncion: public Win::Dialog
{
public:
	ValorDeFuncion()
	{
	}
	~ValorDeFuncion()
	{
	}
	double CalculateArea(double radio);
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxRadio;
	Win::Textbox tbxArea;
	Win::Label lb1;
	Win::Label lb2;
	Win::Button btClick;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(8.96938);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(2.09021);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"ValorDeFuncion";
		tbxRadio.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.61938, 0.26458, 3.06917, 0.60854, hWnd, 1000);
		tbxArea.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.59292, 1.27000, 3.09563, 0.60854, hWnd, 1001);
		lb1.CreateX(NULL, L"Radio", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.37042, 0.26458, 1.87854, 0.60854, hWnd, 1002);
		lb2.CreateX(NULL, L"Area", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.34396, 1.29646, 1.79917, 0.60854, hWnd, 1003);
		btClick.CreateX(NULL, L"Click", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 6.35000, 0.66146, 2.43417, 0.68792, hWnd, 1004);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		tbxRadio.Font = fontArial009A;
		tbxArea.Font = fontArial009A;
		lb1.Font = fontArial009A;
		lb2.Font = fontArial009A;
		btClick.Font = fontArial009A;
	}
	//_________________________________________________
	void btClick_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btClick.IsEvent(e, BN_CLICKED)) {btClick_Click(e); return true;}
		return false;
	}
};
