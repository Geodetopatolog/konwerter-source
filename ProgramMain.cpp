/***************************************************************
 * Name:      ProgramMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Rafa≈Ç Szatkowski (rafalszatkowski1992@gmail.com)
 * Created:   2016-04-07
 * Copyright: Rafa≈Ç Szatkowski ()
 * License:
 **************************************************************/

#include "ProgramMain.h"
#include <wx/msgdlg.h>
#include "Projekty.h"

using namespace std;

//(*InternalHeaders(ProgramFrame)
#include <wx/bitmap.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(ProgramFrame)
const long ProgramFrame::ID_MENUITEM1 = wxNewId();
const long ProgramFrame::ID_MENUITEM2 = wxNewId();
const long ProgramFrame::ID_MENUITEM3 = wxNewId();
const long ProgramFrame::ID_MENUITEM4 = wxNewId();
const long ProgramFrame::ID_MENUITEM6 = wxNewId();
const long ProgramFrame::ID_MENUITEM5 = wxNewId();
const long ProgramFrame::ID_MENUITEM7 = wxNewId();
const long ProgramFrame::ID_TOOLBARITEM1 = wxNewId();
const long ProgramFrame::ID_TOOLBARITEM2 = wxNewId();
const long ProgramFrame::ID_TOOLBARITEM3 = wxNewId();
const long ProgramFrame::ID_TOOLBARITEM4 = wxNewId();
const long ProgramFrame::ID_TOOLBARITEM5 = wxNewId();
const long ProgramFrame::ID_TOOLBARITEM6 = wxNewId();
const long ProgramFrame::ID_TOOLBARITEM7 = wxNewId();
const long ProgramFrame::ID_TOOLBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ProgramFrame,wxFrame)
    //(*EventTable(ProgramFrame)
    //*)
END_EVENT_TABLE()

ProgramFrame::ProgramFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(ProgramFrame)
    Create(parent, id, _("Konwerter"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(1300,900));
    Move(wxPoint(-10,0));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuBar1->Append(Menu1, _("Plik"));
    Menu2 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu2, ID_MENUITEM1, _("WSAD (Nak≥adka)"), wxEmptyString, wxITEM_NORMAL);
    Menu2->Append(MenuItem1);
    MenuBar1->Append(Menu2, _("Wczytaj"));
    Menu3 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu3, ID_MENUITEM2, _("Podglπd danych"), wxEmptyString, wxITEM_NORMAL);
    Menu3->Append(MenuItem2);
    MenuItem3 = new wxMenuItem(Menu3, ID_MENUITEM3, _("Podglπd mapy"), wxEmptyString, wxITEM_NORMAL);
    Menu3->Append(MenuItem3);
    MenuBar1->Append(Menu3, _("Podglπd"));
    Menu4 = new wxMenu();
    MenuItem4 = new wxMenuItem(Menu4, ID_MENUITEM4, _("Sprawdzenie"), wxEmptyString, wxITEM_NORMAL);
    Menu4->Append(MenuItem4);
    MenuItem6 = new wxMenuItem(Menu4, ID_MENUITEM6, _("Raport"), wxEmptyString, wxITEM_NORMAL);
    Menu4->Append(MenuItem6);
    MenuBar1->Append(Menu4, _("Topologia"));
    Menu5 = new wxMenu();
    MenuItem5 = new wxMenuItem(Menu5, ID_MENUITEM5, _("Selekcja"), wxEmptyString, wxITEM_NORMAL);
    Menu5->Append(MenuItem5);
    MenuItem7 = new wxMenuItem(Menu5, ID_MENUITEM7, _("Eksport"), wxEmptyString, wxITEM_NORMAL);
    Menu5->Append(MenuItem7);
    MenuBar1->Append(Menu5, _("Parcele"));
    SetMenuBar(MenuBar1);
    ToolBar1 = new wxToolBar(this, ID_TOOLBAR1, wxDefaultPosition, wxDefaultSize, wxTB_VERTICAL|wxTB_3DBUTTONS|wxNO_BORDER, _T("ID_TOOLBAR1"));
    ToolBarItem1 = ToolBar1->AddTool(ID_TOOLBARITEM1, _("Wczytaj WSAD"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\wsad.ico"))), wxNullBitmap, wxITEM_NORMAL, _("Wczytanie danych \"WSAD\""), wxEmptyString);
    ToolBar1->AddSeparator();
    ToolBarItem2 = ToolBar1->AddTool(ID_TOOLBARITEM2, _("Podglπd mapy"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\oknoglowne.ico"))), wxNullBitmap, wxITEM_NORMAL, _("Podglπd mapy"), wxEmptyString);
    ToolBarItem3 = ToolBar1->AddTool(ID_TOOLBARITEM3, _("Tabela z danymi"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\tabele.ico"))), wxNullBitmap, wxITEM_NORMAL, _("Tabela z danymi"), wxEmptyString);
    ToolBar1->AddSeparator();
    ToolBarItem4 = ToolBar1->AddTool(ID_TOOLBARITEM4, _("Sprawdzenie i naprawa topologii"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\sprawdzenie topologii.ico"))), wxNullBitmap, wxITEM_NORMAL, _("Sprawdzenie i naprawa topologii"), wxEmptyString);
    ToolBar1->AddSeparator();
    ToolBarItem5 = ToolBar1->AddTool(ID_TOOLBARITEM5, _("Parcele"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\parcele.ico"))), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\parcele.ico"))), wxITEM_NORMAL, _("Selekcja parcel"), wxEmptyString);
    ToolBar1->AddSeparator();
    ToolBarItem6 = ToolBar1->AddTool(ID_TOOLBARITEM6, _("Uzupenienie"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\uzupelnienie.ico"))), wxNullBitmap, wxITEM_NORMAL, _("Uzupe≥nienie danych"), wxEmptyString);
    ToolBar1->AddSeparator();
    ToolBarItem7 = ToolBar1->AddTool(ID_TOOLBARITEM7, _("Eksport"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\eksport.ico"))), wxNullBitmap, wxITEM_NORMAL, _("Eksport"), wxEmptyString);
    ToolBar1->Realize();
    SetToolBar(ToolBar1);

    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&ProgramFrame::OnMenuItem1Selected);
    Connect(ID_MENUITEM2,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&ProgramFrame::OnMenuItem2Selected);
    Connect(ID_MENUITEM3,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&ProgramFrame::OnMenuItem3Selected);
    Connect(ID_MENUITEM4,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&ProgramFrame::OnMenuItem4Selected);
    Connect(ID_TOOLBARITEM1,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&ProgramFrame::OnToolBarItem1Clicked);
    Connect(ID_TOOLBARITEM2,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&ProgramFrame::OnToolBarItem2Clicked);
    Connect(ID_TOOLBARITEM3,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&ProgramFrame::OnToolBarItem3Clicked);
    Connect(ID_TOOLBARITEM4,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&ProgramFrame::OnToolBarItem4Clicked);
    Connect(ID_TOOLBARITEM5,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&ProgramFrame::OnToolBarItem5Clicked);
    Connect(ID_TOOLBARITEM6,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&ProgramFrame::OnToolBarItem6Clicked);
    Connect(ID_TOOLBARITEM7,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&ProgramFrame::OnToolBarItem7Clicked);
    //*)


    Projekty* okno1 = new Projekty(this);
    okno1->Show(true);

}

ProgramFrame::~ProgramFrame()
{
    //(*Destroy(ProgramFrame)
    //*)
}

void ProgramFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}
/*
void ProgramFrame::otwoknaglownego()
{
    glowneokno* oknogl = new glowneokno(this);
    oknogl->Show(true);

}
*/



void ProgramFrame::OnMenuItem1Selected(wxCommandEvent& event)
{
    WSAD* okno1 = new WSAD(this);
    okno1->Show(true);


}

void ProgramFrame::OnToolBarItem1Clicked(wxCommandEvent& event)
{
    OnMenuItem1Selected(event);

}

void ProgramFrame::OnToolBarItem2Clicked(wxCommandEvent& event)
{
  OnMenuItem3Selected(event);

}

void ProgramFrame::OnToolBarItem3Clicked(wxCommandEvent& event)
{
    OnMenuItem2Selected(event);


}



void ProgramFrame::OnMenuItem2Selected(wxCommandEvent& event)
{

    tabele* oknogl = new tabele(this);
    oknogl->Show(true);

}

void ProgramFrame::OnMenuItem3Selected(wxCommandEvent& event)
{
    glowneokno* oknogl = new glowneokno(this);
    oknogl->Show(true);

}
//sprawdzanie topologii menu
void ProgramFrame::OnMenuItem4Selected(wxCommandEvent& event)
{

    SprawdzenieTopo* oknogl = new SprawdzenieTopo(this);
    oknogl->Show(true);

}

void ProgramFrame::OnToolBarItem4Clicked(wxCommandEvent& event)
{
    OnMenuItem4Selected(event);
}

void ProgramFrame::OnToolBarItem5Clicked(wxCommandEvent& event)
{
    parcele* oknogl = new parcele(this);
    oknogl->Show(true);
}

void ProgramFrame::OnToolBarItem6Clicked(wxCommandEvent& event)
{
    dane* oknogl = new dane(this);
    oknogl->Show(true);
}

void ProgramFrame::OnToolBarItem7Clicked(wxCommandEvent& event)
{
    modez* oknogl = new modez(this);
    oknogl->Show(true);
}
