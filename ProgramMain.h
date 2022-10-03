/***************************************************************
 * Name:      ProgramMain.h
 * Purpose:   Defines Application Frame
 * Author:    Rafał Szatkowski (rafalszatkowski1992@gmail.com)
 * Created:   2016-04-07
 * Copyright: Rafał Szatkowski ()
 * License:
 **************************************************************/

#ifndef PROGRAMMAIN_H
#define PROGRAMMAIN_H

//(*Headers(ProgramFrame)
#include <wx/menu.h>
#include <wx/toolbar.h>
#include <wx/frame.h>
//*)
#include <vector>
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <string>
#include "Projekty.h"
#include "WSAD.h"
#include "glowneokno.h"
#include "tabele.h"
#include "SprawdzenieTopo.h"
#include "parcele.h"
#include "dane.h"
#include "modez.h"

using namespace std;

class ProgramFrame: public wxFrame
{
    public:

        ProgramFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~ProgramFrame();

    string wybranyprojekt;

    void otwoknaglownego();

    private:

        //(*Handlers(ProgramFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        void OnClose1(wxCloseEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnMenuItem1Selected(wxCommandEvent& event);
        void OnToolBarItem1Clicked(wxCommandEvent& event);
        void OnToolBarItem2Clicked(wxCommandEvent& event);
        void OnToolBarItem3Clicked(wxCommandEvent& event);
        void OnMenuItem4Selected(wxCommandEvent& event);
        void OnMenuItem2Selected(wxCommandEvent& event);
        void OnMenuItem3Selected(wxCommandEvent& event);
        void OnToolBarItem4Clicked(wxCommandEvent& event);
        void OnToolBarItem5Clicked(wxCommandEvent& event);
        void OnToolBarItem6Clicked(wxCommandEvent& event);
        void OnToolBarItem7Clicked(wxCommandEvent& event);
        //*)

        //(*Identifiers(ProgramFrame)
        static const long ID_MENUITEM1;
        static const long ID_MENUITEM2;
        static const long ID_MENUITEM3;
        static const long ID_MENUITEM4;
        static const long ID_MENUITEM6;
        static const long ID_MENUITEM5;
        static const long ID_MENUITEM7;
        static const long ID_TOOLBARITEM1;
        static const long ID_TOOLBARITEM2;
        static const long ID_TOOLBARITEM3;
        static const long ID_TOOLBARITEM4;
        static const long ID_TOOLBARITEM5;
        static const long ID_TOOLBARITEM6;
        static const long ID_TOOLBARITEM7;
        static const long ID_TOOLBAR1;
        //*)

        //(*Declarations(ProgramFrame)
        wxToolBarToolBase* ToolBarItem4;
        wxToolBar* ToolBar1;
        wxMenuItem* MenuItem7;
        wxToolBarToolBase* ToolBarItem3;
        wxMenuItem* MenuItem5;
        wxMenuItem* MenuItem2;
        wxMenu* Menu3;
        wxMenuItem* MenuItem1;
        wxMenuItem* MenuItem4;
        wxMenu* Menu1;
        wxToolBarToolBase* ToolBarItem6;
        wxToolBarToolBase* ToolBarItem1;
        wxMenuItem* MenuItem3;
        wxMenuItem* MenuItem6;
        wxToolBarToolBase* ToolBarItem5;
        wxMenuBar* MenuBar1;
        wxMenu* Menu2;
        wxToolBarToolBase* ToolBarItem2;
        wxMenu* Menu5;
        wxMenu* Menu4;
        wxToolBarToolBase* ToolBarItem7;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // PROGRAMMAIN_H
