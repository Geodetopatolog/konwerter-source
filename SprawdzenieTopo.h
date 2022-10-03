#ifndef SPRAWDZENIETOPO_H
#define SPRAWDZENIETOPO_H

//(*Headers(SprawdzenieTopo)
#include <wx/msgdlg.h>
#include <wx/toolbar.h>
#include <wx/panel.h>
#include <wx/frame.h>
//*)

#include <vector>
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <string>
#include "funkcje.h"
using namespace std;

class SprawdzenieTopo: public wxFrame
{
	public:

		SprawdzenieTopo(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~SprawdzenieTopo();

		//(*Declarations(SprawdzenieTopo)
		wxToolBarToolBase* ToolBarItem4;
		wxToolBar* ToolBar1;
		wxToolBarToolBase* ToolBarItem9;
		wxToolBarToolBase* ToolBarItem3;
		wxToolBarToolBase* ToolBarItem12;
		wxToolBarToolBase* ToolBarItem11;
		wxToolBarToolBase* ToolBarItem10;
		wxPanel* Panel1;
		wxToolBarToolBase* ToolBarItem6;
		wxToolBarToolBase* ToolBarItem1;
		wxMessageDialog* MessageDialog3;
		wxMessageDialog* MessageDialog4;
		wxToolBarToolBase* ToolBarItem5;
		wxMessageDialog* MessageDialog2;
		wxToolBarToolBase* ToolBarItem8;
		wxMessageDialog* MessageDialog1;
		wxToolBarToolBase* ToolBarItem2;
		wxToolBarToolBase* ToolBarItem7;
		//*)

		//(*Identifiers(SprawdzenieTopo)
		static const long ID_PANEL1;
		static const long ID_TOOLBARITEM1;
		static const long ID_TOOLBARITEM2;
		static const long ID_TOOLBARITEM3;
		static const long ID_TOOLBARITEM4;
		static const long ID_TOOLBARITEM10;
		static const long ID_TOOLBARITEM11;
		static const long ID_TOOLBARITEM5;
		static const long ID_TOOLBARITEM6;
		static const long ID_TOOLBARITEM7;
		static const long ID_TOOLBARITEM8;
		static const long ID_TOOLBARITEM9;
		static const long ID_TOOLBARITEM12;
		static const long ID_TOOLBAR1;
		static const long ID_MESSAGEDIALOG1;
		static const long ID_MESSAGEDIALOG2;
		static const long ID_MESSAGEDIALOG3;
		static const long ID_MESSAGEDIALOG4;
		//*)

		//(*Handlers(SprawdzenieTopo)
		void OnButton1Click(wxCommandEvent& event);
		void OnToolBarItem1Clicked(wxCommandEvent& event);
		void OnToolBarItem2Clicked(wxCommandEvent& event);
		void OnToolBarItem3Clicked(wxCommandEvent& event);
		void OnClose(wxCloseEvent& event);
		void OnPanel1RightDown(wxMouseEvent& event);
		void OnPanel1RightUp(wxMouseEvent& event);
		void OnPanel1MouseMove(wxMouseEvent& event);
		void OnPanel1MouseWheel(wxMouseEvent& event);
		void OnToolBarItem4Clicked(wxCommandEvent& event);
		void OnToolBarItem10Clicked(wxCommandEvent& event);
		void OnToolBarItem11Clicked(wxCommandEvent& event);
		void OnToolBarItem5Clicked(wxCommandEvent& event);
		void OnToolBarItem6Clicked(wxCommandEvent& event);
		void OnToolBarItem8Clicked(wxCommandEvent& event);
		void OnToolBarItem7Clicked(wxCommandEvent& event);
		void OnToolBarItem9Clicked(wxCommandEvent& event);
		void OnToolBarItem12Clicked(wxCommandEvent& event);
		void OnClose1(wxCloseEvent& event);
		void OnResize(wxSizeEvent& event);
		//*)

		void rysowanie(vector<vector<int> >& linie);
		void rysowanietopo(vector<vector<int> >& linie, int ktora);

		vector<vector<int> > linietopo,wektor, punkty;
		vector<int> linia, ktora;
		fstream plik, proj; //deklaracje zmiennych
        string projekt;
        bool rd, prd, war;
        int ppx, ppy, pxp, pxk, pyp, pyk, skalaglob, ktorai;
		DECLARE_EVENT_TABLE()
};

#endif
