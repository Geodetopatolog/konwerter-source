#ifndef GLOWNEOKNO_H
#define GLOWNEOKNO_H

//(*Headers(glowneokno)
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

class glowneokno: public wxFrame
{
	public:

		glowneokno(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~glowneokno();

		//(*Declarations(glowneokno)
		wxToolBarToolBase* ToolBarItem4;
		wxToolBar* ToolBar1;
		wxToolBarToolBase* ToolBarItem3;
		wxPanel* Panel1;
		wxToolBarToolBase* ToolBarItem6;
		wxToolBarToolBase* ToolBarItem1;
		wxToolBarToolBase* ToolBarItem5;
		wxToolBarToolBase* ToolBarItem8;
		wxToolBarToolBase* ToolBarItem2;
		wxToolBarToolBase* ToolBarItem7;
		//*)

		//(*Identifiers(glowneokno)
		static const long ID_PANEL1;
		static const long ID_TOOLBARITEM1;
		static const long ID_TOOLBARITEM2;
		static const long ID_TOOLBARITEM3;
		static const long ID_TOOLBARITEM7;
		static const long ID_TOOLBARITEM4;
		static const long ID_TOOLBARITEM5;
		static const long ID_TOOLBARITEM6;
		static const long ID_TOOLBARITEM8;
		static const long ID_TOOLBAR1;
		//*)

		//(*Handlers(glowneokno)
		void OnBitmapButton1Click(wxCommandEvent& event);
		void OnToolBarItem1Clicked(wxCommandEvent& event);
		void OnPanel1RightDown(wxMouseEvent& event);
		void OnPanel1RightUp(wxMouseEvent& event);
		void OnPanel1MouseMove(wxMouseEvent& event);
		void OnPanel1MouseWheel(wxMouseEvent& event);
		void OnToolBarItem2Clicked(wxCommandEvent& event);
		void OnToolBarItem3Clicked(wxCommandEvent& event);
		void OnToolBarItem7Clicked(wxCommandEvent& event);
		void OnToolBarItem4Clicked(wxCommandEvent& event);
		void OnToolBarItem5Clicked(wxCommandEvent& event);
		void OnToolBarItem8Clicked(wxCommandEvent& event);
		//*)
		void rysowanie(vector<vector<int> >& linie);



		vector<vector<int> > linietopo, wektor, rzednewsp, nazwywsp, liniepost, postwsp, furtywsp;
		vector<string> nazwy, okresy, rzedne, post, furty;
		vector<int> linia;
		fstream plik, proj; //deklaracje zmiennych
        string projekt;
        bool rd, prd;
        int ppx, ppy, pxp, pxk, pyp, pyk, skalaglob;

		DECLARE_EVENT_TABLE()
};

#endif
