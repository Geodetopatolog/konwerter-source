#ifndef DANE_H
#define DANE_H

#include <vector>
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <string>
#include "funkcje.h"
using namespace std;

//(*Headers(dane)
#include <wx/notebook.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/listbox.h>
#include <wx/statline.h>
#include <wx/textdlg.h>
#include <wx/radiobut.h>
#include <wx/statbox.h>
#include <wx/toolbar.h>
#include <wx/panel.h>
#include <wx/grid.h>
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/frame.h>
//*)

class dane: public wxFrame
{
	public:

		dane(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~dane();

		//(*Declarations(dane)
		wxStaticText* StaticText10;
		wxStaticText* StaticText9;
		wxToolBarToolBase* ToolBarItem4;
		wxStaticText* StaticText20;
		wxRadioButton* RadioButton9;
		wxTextCtrl* TextCtrl4;
		wxRadioButton* RadioButton1;
		wxPanel* Panel5;
		wxToolBar* ToolBar1;
		wxCheckBox* CheckBox9;
		wxStaticBox* StaticBox5;
		wxButton* Button4;
		wxBitmapButton* BitmapButton5;
		wxRadioButton* RadioButton12;
		wxNotebook* Notebook1;
		wxToolBarToolBase* ToolBarItem3;
		wxStaticText* StaticText13;
		wxStaticText* StaticText2;
		wxPanel* Panel4;
		wxStaticText* StaticText14;
		wxRadioButton* RadioButton2;
		wxRadioButton* RadioButton6;
		wxRadioButton* RadioButton5;
		wxButton* Button1;
		wxTextCtrl* TextCtrl16;
		wxStaticText* StaticText6;
		wxTextCtrl* TextCtrl6;
		wxRadioButton* RadioButton4;
		wxStaticText* StaticText19;
		wxStaticText* StaticText8;
		wxStaticText* StaticText11;
		wxCheckBox* CheckBox3;
		wxStaticText* StaticText18;
		wxRadioButton* RadioButton7;
		wxTextCtrl* TextCtrl19;
		wxCheckBox* CheckBox2;
		wxCheckBox* CheckBox6;
		wxBitmapButton* BitmapButton2;
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText3;
		wxGrid* Grid1;
		wxStaticBox* StaticBox1;
		wxBitmapButton* BitmapButton1;
		wxButton* Button2;
		wxRadioButton* RadioButton3;
		wxPanel* Panel6;
		wxCheckBox* CheckBox1;
		wxTextCtrl* TextCtrl18;
		wxPanel* Panel3;
		wxStaticText* StaticText21;
		wxToolBarToolBase* ToolBarItem6;
		wxButton* Button6;
		wxStaticBox* StaticBox2;
		wxButton* Button10;
		wxToolBarToolBase* ToolBarItem1;
		wxButton* Button11;
		wxButton* Button5;
		wxTextCtrl* TextCtrl17;
		wxTextCtrl* TextCtrl24;
		wxListBox* ListBox3;
		wxButton* Button3;
		wxTextCtrl* TextCtrl14;
		wxTextCtrl* TextCtrl15;
		wxRadioButton* RadioButton8;
		wxStaticText* StaticText5;
		wxStaticText* StaticText7;
		wxCheckBox* CheckBox10;
		wxButton* Button7;
		wxTextCtrl* TextCtrl13;
		wxTextCtrl* TextCtrl21;
		wxRadioButton* RadioButton10;
		wxButton* Button9;
		wxTextCtrl* TextCtrl20;
		wxTextCtrl* TextCtrl22;
		wxBitmapButton* BitmapButton6;
		wxTextCtrl* TextCtrl8;
		wxStaticLine* StaticLine1;
		wxCheckBox* CheckBox4;
		wxTextCtrl* TextCtrl2;
		wxBitmapButton* BitmapButton4;
		wxStaticBox* StaticBox3;
		wxToolBarToolBase* ToolBarItem5;
		wxCheckBox* CheckBox8;
		wxTextCtrl* TextCtrl7;
		wxTextEntryDialog* TextEntryDialog1;
		wxListBox* ListBox2;
		wxTextCtrl* TextCtrl1;
		wxCheckBox* CheckBox7;
		wxStaticText* StaticText15;
		wxStaticText* StaticText12;
		wxTextCtrl* TextCtrl9;
		wxBitmapButton* BitmapButton3;
		wxPanel* Panel2;
		wxTextCtrl* TextCtrl5;
		wxCheckBox* CheckBox5;
		wxTextCtrl* TextCtrl23;
		wxNotebook* Notebook2;
		wxStaticText* StaticText17;
		wxStaticText* StaticText4;
		wxTextCtrl* TextCtrl3;
		wxTextCtrl* TextCtrl10;
		wxTextCtrl* TextCtrl12;
		wxToolBarToolBase* ToolBarItem2;
		wxTextCtrl* TextCtrl11;
		wxStaticText* StaticText16;
		wxButton* Button8;
		wxRadioButton* RadioButton11;
		wxStaticBox* StaticBox4;
		wxListBox* ListBox1;
		//*)

		//(*Identifiers(dane)
		static const long ID_STATICBOX1;
		static const long ID_TEXTCTRL1;
		static const long ID_PANEL2;
		static const long ID_GRID1;
		static const long ID_BUTTON4;
		static const long ID_BUTTON5;
		static const long ID_BUTTON6;
		static const long ID_PANEL1;
		static const long ID_STATICBOX5;
		static const long ID_STATICBOX4;
		static const long ID_STATICBOX3;
		static const long ID_STATICBOX2;
		static const long ID_LISTBOX1;
		static const long ID_BITMAPBUTTON1;
		static const long ID_BITMAPBUTTON2;
		static const long ID_LISTBOX2;
		static const long ID_BITMAPBUTTON3;
		static const long ID_BITMAPBUTTON4;
		static const long ID_BITMAPBUTTON5;
		static const long ID_BITMAPBUTTON6;
		static const long ID_LISTBOX3;
		static const long ID_STATICTEXT19;
		static const long ID_TEXTCTRL22;
		static const long ID_STATICTEXT20;
		static const long ID_TEXTCTRL23;
		static const long ID_STATICTEXT21;
		static const long ID_TEXTCTRL24;
		static const long ID_BUTTON11;
		static const long ID_PANEL6;
		static const long ID_NOTEBOOK1;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_TEXTCTRL4;
		static const long ID_STATICTEXT5;
		static const long ID_TEXTCTRL5;
		static const long ID_TEXTCTRL6;
		static const long ID_STATICTEXT6;
		static const long ID_RADIOBUTTON1;
		static const long ID_RADIOBUTTON2;
		static const long ID_RADIOBUTTON3;
		static const long ID_RADIOBUTTON4;
		static const long ID_RADIOBUTTON5;
		static const long ID_TEXTCTRL7;
		static const long ID_BUTTON1;
		static const long ID_CHECKBOX9;
		static const long ID_PANEL3;
		static const long ID_RADIOBUTTON6;
		static const long ID_RADIOBUTTON7;
		static const long ID_RADIOBUTTON8;
		static const long ID_RADIOBUTTON9;
		static const long ID_RADIOBUTTON10;
		static const long ID_STATICTEXT16;
		static const long ID_TEXTCTRL18;
		static const long ID_BUTTON7;
		static const long ID_TEXTCTRL19;
		static const long ID_TEXTCTRL9;
		static const long ID_STATICTEXT9;
		static const long ID_CHECKBOX10;
		static const long ID_PANEL4;
		static const long ID_TEXTCTRL10;
		static const long ID_TEXTCTRL11;
		static const long ID_STATICTEXT10;
		static const long ID_STATICTEXT11;
		static const long ID_STATICTEXT12;
		static const long ID_TEXTCTRL12;
		static const long ID_TEXTCTRL13;
		static const long ID_STATICTEXT13;
		static const long ID_TEXTCTRL14;
		static const long ID_TEXTCTRL15;
		static const long ID_CHECKBOX1;
		static const long ID_STATICTEXT14;
		static const long ID_STATICTEXT15;
		static const long ID_TEXTCTRL16;
		static const long ID_TEXTCTRL17;
		static const long ID_CHECKBOX2;
		static const long ID_CHECKBOX3;
		static const long ID_STATICTEXT17;
		static const long ID_STATICTEXT18;
		static const long ID_TEXTCTRL20;
		static const long ID_TEXTCTRL21;
		static const long ID_BUTTON8;
		static const long ID_STATICLINE1;
		static const long ID_CHECKBOX4;
		static const long ID_CHECKBOX5;
		static const long ID_BUTTON9;
		static const long ID_BUTTON10;
		static const long ID_RADIOBUTTON11;
		static const long ID_RADIOBUTTON12;
		static const long ID_CHECKBOX6;
		static const long ID_CHECKBOX7;
		static const long ID_CHECKBOX8;
		static const long ID_PANEL5;
		static const long ID_NOTEBOOK2;
		static const long ID_STATICTEXT7;
		static const long ID_TEXTCTRL8;
		static const long ID_STATICTEXT8;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_TOOLBARITEM5;
		static const long ID_TOOLBARITEM6;
		static const long ID_TOOLBARITEM4;
		static const long ID_TOOLBARITEM1;
		static const long ID_TOOLBARITEM2;
		static const long ID_TOOLBARITEM3;
		static const long ID_TOOLBAR1;
		static const long ID_TEXTENTRYDIALOG1;
		//*)

		//(*Handlers(dane)
		void OnPanel1RightDown(wxMouseEvent& event);
		void OnPanel1RightUp(wxMouseEvent& event);
		void OnPanel1MouseMove(wxMouseEvent& event);
		void OnPanel1MouseWheel(wxMouseEvent& event);
		void OnToolBarItem5Clicked(wxCommandEvent& event);
		void OnToolBarItem6Clicked(wxCommandEvent& event);
		void OnToolBarItem1Clicked(wxCommandEvent& event);
		void OnToolBarItem2Clicked(wxCommandEvent& event);
		void OnToolBarItem3Clicked(wxCommandEvent& event);
		void OnNotebook1PageChanged(wxNotebookEvent& event);
		void OnNotebook1PageChanging(wxNotebookEvent& event);
		void OnButton3Click(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnButton4Click(wxCommandEvent& event);
		void OnButton5Click(wxCommandEvent& event);
		void OnButton6Click(wxCommandEvent& event);
		void OnButton7Click(wxCommandEvent& event);
		void OnToolBarItem4Clicked(wxCommandEvent& event);
		void OnButton8Click(wxCommandEvent& event);
		void OnCheckBox1Click(wxCommandEvent& event);
		void OnRadioButton12Select(wxCommandEvent& event);
		void OnRadioButton11Select(wxCommandEvent& event);
		void OnButton10Click(wxCommandEvent& event);
		void OnButton9Click(wxCommandEvent& event);
		void OnCheckBox8Click(wxCommandEvent& event);
		void OnBitmapButton1Click(wxCommandEvent& event);
		void OnListBox1Select(wxCommandEvent& event);
		void OnBitmapButton3Click(wxCommandEvent& event);
		void OnButton11Click(wxCommandEvent& event);
		void OnBitmapButton6Click(wxCommandEvent& event);
		void OnBitmapButton2Click(wxCommandEvent& event);
		//*)
        void rysowanie(vector<vector<int> >& linie);
        void funkcja();
        void wpisanie(vector<vector<int> >& parcela);
        void wybranie();
        void wszyst();
        void wstep();
        void wybbezster(int ktster);


		vector<vector<vector<int> > > parceletab;
		vector<vector<string> > opisstr, stery;
		vector<vector<int> > linie, rzednewsp, furtywsp, rzednewyb, furtywyb, wszystkie, liniepost, postwsp, liniepostwyb, postwspwyb;
		vector<string> nazwy, nazwyn, nazwyp, rzedne, furty, post, postwyb, ster;
		vector<int> wybrane, niewybrane;
        fstream plik, proj; //deklaracje zmiennych
		string projekt;
		int ktorapar;
		bool rd, prd, war;
        int ppx, ppy, pxp, pxk, pyp, pyk, skalaglob;




		DECLARE_EVENT_TABLE()
};

#endif
