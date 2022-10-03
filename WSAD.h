#ifndef WSAD_H
#define WSAD_H

//(*Headers(WSAD)
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/statbox.h>
#include <wx/filedlg.h>
#include <wx/button.h>
#include <wx/frame.h>
//*)
#include <vector>
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <cctype>
#include "ProgramMain.h"
#include "glowneokno.h"
#include "tabele.h"

using namespace std;

class WSAD: public wxFrame
{
	public:

		WSAD(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~WSAD();

		//(*Declarations(WSAD)
		wxStaticText* StaticText10;
		wxStaticText* StaticText9;
		wxTextCtrl* TextCtrl4;
		wxButton* Button4;
		wxStaticText* StaticText2;
		wxButton* Button1;
		wxStaticText* StaticText6;
		wxTextCtrl* TextCtrl6;
		wxStaticText* StaticText8;
		wxStaticText* StaticText1;
		wxFileDialog* FileDialog1;
		wxStaticText* StaticText3;
		wxStaticBox* StaticBox1;
		wxButton* Button2;
		wxStaticBox* StaticBox2;
		wxButton* Button5;
		wxButton* Button3;
		wxStaticText* StaticText5;
		wxStaticText* StaticText7;
		wxTextCtrl* TextCtrl8;
		wxTextCtrl* TextCtrl2;
		wxStaticBox* StaticBox3;
		wxTextCtrl* TextCtrl7;
		wxTextCtrl* TextCtrl1;
		wxTextCtrl* TextCtrl9;
		wxTextCtrl* TextCtrl5;
		wxStaticText* StaticText4;
		wxTextCtrl* TextCtrl3;
		//*)

		//(*Identifiers(WSAD)
		static const long ID_STATICBOX1;
		static const long ID_STATICBOX2;
		static const long ID_BUTTON1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL2;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICBOX3;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_TEXTCTRL4;
		static const long ID_TEXTCTRL5;
		static const long ID_STATICTEXT6;
		static const long ID_TEXTCTRL6;
		static const long ID_TEXTCTRL7;
		static const long ID_STATICTEXT7;
		static const long ID_STATICTEXT8;
		static const long ID_TEXTCTRL8;
		static const long ID_STATICTEXT9;
		static const long ID_TEXTCTRL9;
		static const long ID_STATICTEXT10;
		static const long ID_BUTTON4;
		static const long ID_BUTTON5;
		//*)

		//(*Handlers(WSAD)
		void OnButton1Click(wxCommandEvent& event);
		void OnButton1Click1(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnButton3Click(wxCommandEvent& event);
		void OnButton4Click(wxCommandEvent& event);
		void OnButton5Click(wxCommandEvent& event);
		//*)

        string sciezka, projekt;

		DECLARE_EVENT_TABLE()
};

#endif
