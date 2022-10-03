#ifndef TABELE_H
#define TABELE_H

//(*Headers(tabele)
#include <wx/toolbar.h>
#include <wx/grid.h>
#include <wx/frame.h>
//*)
#include <vector>
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <string>
using namespace std;

class tabele: public wxFrame
{
	public:

		tabele(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~tabele();

		//(*Declarations(tabele)
		wxToolBarToolBase* ToolBarItem4;
		wxToolBar* ToolBar1;
		wxToolBarToolBase* ToolBarItem3;
		wxGrid* Grid1;
		wxToolBarToolBase* ToolBarItem6;
		wxToolBarToolBase* ToolBarItem1;
		wxToolBarToolBase* ToolBarItem5;
		wxToolBarToolBase* ToolBarItem2;
		wxToolBarToolBase* ToolBarItem7;
		//*)

		//(*Identifiers(tabele)
		static const long ID_GRID1;
		static const long ID_TOOLBARITEM1;
		static const long ID_TOOLBARITEM2;
		static const long ID_TOOLBARITEM3;
		static const long ID_TOOLBARITEM4;
		static const long ID_TOOLBARITEM5;
		static const long ID_TOOLBARITEM6;
		static const long ID_TOOLBARITEM7;
		static const long ID_TOOLBAR1;
		//*)

		//(*Handlers(tabele)
		void OnToolBarItem1Clicked(wxCommandEvent& event);
		void OnGrid1CellLeftClick(wxGridEvent& event);
		void OnClose(wxCloseEvent& event);
		void OnToolBarItem2Clicked(wxCommandEvent& event);
		void OnToolBarItem3Clicked(wxCommandEvent& event);
		void OnToolBarItem4Clicked(wxCommandEvent& event);
		void OnToolBarItem5Clicked(wxCommandEvent& event);
		void OnToolBarItem6Clicked(wxCommandEvent& event);
		void OnToolBarItem7Clicked(wxCommandEvent& event);
		//*)

		fstream plik, proj; //deklaracje zmiennych
        string projekt;


		DECLARE_EVENT_TABLE()
};

#endif
