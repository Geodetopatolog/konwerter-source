#ifndef PARCELE_H
#define PARCELE_H

#include <vector>
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <string>
#include "funkcje.h"

using namespace std;

//(*Headers(parcele)
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/radiobut.h>
#include <wx/statbox.h>
#include <wx/button.h>
#include <wx/frame.h>
//*)

class parcele: public wxFrame
{
	public:

		parcele(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~parcele();

		//(*Declarations(parcele)
		wxRadioButton* RadioButton1;
		wxStaticText* StaticText2;
		wxRadioButton* RadioButton2;
		wxRadioButton* RadioButton6;
		wxRadioButton* RadioButton5;
		wxButton* Button1;
		wxRadioButton* RadioButton4;
		wxStaticText* StaticText1;
		wxStaticBox* StaticBox1;
		wxButton* Button2;
		wxRadioButton* RadioButton3;
		wxStaticBox* StaticBox2;
		wxTextCtrl* TextCtrl2;
		wxTextCtrl* TextCtrl1;
		wxStaticBox* StaticBox4;
		//*)

		//(*Identifiers(parcele)
		static const long ID_STATICBOX1;
		static const long ID_STATICBOX2;
		static const long ID_RADIOBUTTON1;
		static const long ID_RADIOBUTTON2;
		static const long ID_RADIOBUTTON3;
		static const long ID_RADIOBUTTON4;
		static const long ID_RADIOBUTTON5;
		static const long ID_RADIOBUTTON6;
		static const long ID_BUTTON1;
		static const long ID_STATICBOX4;
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_BUTTON2;
		//*)

		//(*Handlers(parcele)
		void OnButton1Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		//*)
		vector<vector<vector<int> > > parceletab;
        vector<vector<int> > linietopo;
        vector<string> elemwybnazw;
		fstream plik, proj; //deklaracje zmiennych
		string projekt;

		DECLARE_EVENT_TABLE()
};

#endif
