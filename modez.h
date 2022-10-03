#ifndef MODEZ_H
#define MODEZ_H

#include <vector>
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

//(*Headers(modez)
#include <wx/notebook.h>
#include <wx/stattext.h>
#include <wx/radiobut.h>
#include <wx/panel.h>
#include <wx/grid.h>
#include <wx/button.h>
#include <wx/dirdlg.h>
#include <wx/frame.h>
//*)

class modez: public wxFrame
{
	public:

		modez(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~modez();

		//(*Declarations(modez)
		wxRadioButton* RadioButton1;
		wxPanel* Panel5;
		wxNotebook* Notebook1;
		wxStaticText* StaticText2;
		wxPanel* Panel4;
		wxRadioButton* RadioButton2;
		wxRadioButton* RadioButton5;
		wxButton* Button1;
		wxRadioButton* RadioButton4;
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		wxGrid* Grid1;
		wxRadioButton* RadioButton3;
		wxPanel* Panel6;
		wxPanel* Panel3;
		wxGrid* Grid2;
		wxDirDialog* DirDialog1;
		wxPanel* Panel2;
		wxGrid* Grid3;
		wxNotebook* Notebook2;
		//*)

		//(*Identifiers(modez)
		static const long ID_BUTTON1;
		static const long ID_GRID3;
		static const long ID_PANEL2;
		static const long ID_GRID2;
		static const long ID_PANEL3;
		static const long ID_GRID1;
		static const long ID_PANEL4;
		static const long ID_NOTEBOOK1;
		static const long ID_PANEL5;
		static const long ID_PANEL6;
		static const long ID_NOTEBOOK2;
		static const long ID_RADIOBUTTON1;
		static const long ID_RADIOBUTTON2;
		static const long ID_RADIOBUTTON3;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_RADIOBUTTON4;
		static const long ID_RADIOBUTTON5;
		static const long ID_PANEL1;
		//*)

		//(*Handlers(modez)
		void OnButton1Click(wxCommandEvent& event);
		void OnClose(wxCloseEvent& event);
		void OnRadioButton2Select(wxCommandEvent& event);
		void OnRadioButton1Select(wxCommandEvent& event);
		//*)

        void wstep();
        void wpisaniepar();
        void wpisaniewierzch();
        void wpisanielist();

		vector<vector<vector<int> > > parceletab;
		vector<vector<string> > opisstr, stery;
		vector<string> ster;

        fstream plik, proj; //deklaracje zmiennych
        int ktorapar;
        string projekt;


		DECLARE_EVENT_TABLE()
};

#endif
