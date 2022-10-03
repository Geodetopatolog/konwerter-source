#include "tabele.h"

//(*InternalHeaders(tabele)
#include <wx/bitmap.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//(*IdInit(tabele)
const long tabele::ID_GRID1 = wxNewId();
const long tabele::ID_TOOLBARITEM1 = wxNewId();
const long tabele::ID_TOOLBARITEM2 = wxNewId();
const long tabele::ID_TOOLBARITEM3 = wxNewId();
const long tabele::ID_TOOLBARITEM4 = wxNewId();
const long tabele::ID_TOOLBARITEM5 = wxNewId();
const long tabele::ID_TOOLBARITEM6 = wxNewId();
const long tabele::ID_TOOLBARITEM7 = wxNewId();
const long tabele::ID_TOOLBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(tabele,wxFrame)
	//(*EventTable(tabele)
	//*)
END_EVENT_TABLE()

tabele::tabele(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(tabele)
	Create(parent, id, _("Podgl¹d danych w formie tabelarycznej"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE|wxFRAME_NO_TASKBAR|wxFRAME_FLOAT_ON_PARENT, _T("id"));
	SetClientSize(wxSize(681,700));
	Move(wxPoint(22,63));
	Grid1 = new wxGrid(this, ID_GRID1, wxPoint(168,272), wxSize(680,700), 0, _T("ID_GRID1"));
	Grid1->CreateGrid(0,4);
	Grid1->EnableEditing(true);
	Grid1->EnableGridLines(true);
	Grid1->SetDefaultColSize(150, true);
	Grid1->SetColLabelValue(0, wxEmptyString);
	Grid1->SetColLabelValue(1, wxEmptyString);
	Grid1->SetColLabelValue(2, wxEmptyString);
	Grid1->SetColLabelValue(3, wxEmptyString);
	Grid1->SetDefaultCellFont( Grid1->GetFont() );
	Grid1->SetDefaultCellTextColour( Grid1->GetForegroundColour() );
	ToolBar1 = new wxToolBar(this, ID_TOOLBAR1, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL|wxNO_BORDER, _T("ID_TOOLBAR1"));
	ToolBarItem1 = ToolBar1->AddTool(ID_TOOLBARITEM1, _("Granice"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\granice.ico"))), wxNullBitmap, wxITEM_NORMAL, _("Granice"), wxEmptyString);
	ToolBarItem2 = ToolBar1->AddTool(ID_TOOLBARITEM2, _("Rzedne"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\rzedne.ico"))), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\rzedne.ico"))), wxITEM_NORMAL, _("Rzedne"), wxEmptyString);
	ToolBarItem3 = ToolBar1->AddTool(ID_TOOLBARITEM3, _("Nazwy"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\nazwy.ico"))), wxNullBitmap, wxITEM_NORMAL, _("Nazwy"), wxEmptyString);
	ToolBarItem4 = ToolBar1->AddTool(ID_TOOLBARITEM4, _("Okresy linie"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\okresy linie.ico"))), wxNullBitmap, wxITEM_NORMAL, _("Okresy linie"), wxEmptyString);
	ToolBarItem5 = ToolBar1->AddTool(ID_TOOLBARITEM5, _("Okresy daty"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\okresy daty.ico"))), wxNullBitmap, wxITEM_NORMAL, _("Okresy daty"), wxEmptyString);
	ToolBarItem6 = ToolBar1->AddTool(ID_TOOLBARITEM6, _("Furty"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\furty.ico"))), wxNullBitmap, wxITEM_NORMAL, _("Furty"), wxEmptyString);
	ToolBarItem7 = ToolBar1->AddTool(ID_TOOLBARITEM7, _("Parcele"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\parcele.ico"))), wxNullBitmap, wxITEM_NORMAL, _("Parcele"), wxEmptyString);
	ToolBar1->Realize();
	SetToolBar(ToolBar1);

	Connect(ID_TOOLBARITEM1,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&tabele::OnToolBarItem1Clicked);
	Connect(ID_TOOLBARITEM2,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&tabele::OnToolBarItem2Clicked);
	Connect(ID_TOOLBARITEM3,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&tabele::OnToolBarItem3Clicked);
	Connect(ID_TOOLBARITEM4,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&tabele::OnToolBarItem4Clicked);
	Connect(ID_TOOLBARITEM5,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&tabele::OnToolBarItem5Clicked);
	Connect(ID_TOOLBARITEM6,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&tabele::OnToolBarItem6Clicked);
	Connect(ID_TOOLBARITEM7,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&tabele::OnToolBarItem7Clicked);
	//*)

	proj.open("konfig/k.konf", ios::in); //pozyskanie œcie¿ki do projektu
        getline(proj, projekt);
proj.close();


}

tabele::~tabele()
{
	//(*Destroy(tabele)
	//*)
}


void tabele::OnToolBarItem1Clicked(wxCommandEvent& event)
{


    wxString napis;
    wxDouble zmienna;
    int wiersze=0;

    Grid1->ClearGrid();
    if (Grid1->GetNumberRows()!=0)
    Grid1->DeleteRows(0, Grid1->GetNumberRows(),true);




plik.open(""+projekt+"/g.gpr", ios::in);  //otwarcie pliku i wczytanie danych

    while (!plik.eof())
    {
    plik>>zmienna;
    if (!plik.fail())
        {
    Grid1->InsertRows(wiersze,1,true);

                zmienna=zmienna/1000;
                napis.Printf(wxT("%.3f"),zmienna);
                Grid1->SetCellValue(wiersze,0,napis);

                plik>>zmienna;
                zmienna=zmienna/1000;
                napis.Printf(wxT("%.3f"),zmienna);
                Grid1->SetCellValue(wiersze,1,napis);

                plik>>zmienna;
                zmienna=zmienna/1000;
                napis.Printf(wxT("%.3f"),zmienna);
                Grid1->SetCellValue(wiersze,2,napis);

                plik>>zmienna;
                zmienna=zmienna/1000;
                napis.Printf(wxT("%.3f"),zmienna);
                Grid1->SetCellValue(wiersze,3,napis);

                wiersze++;
        }
    }

plik.close();

Grid1->SetColLabelValue(0,"Xp [m]");
Grid1->SetColLabelValue(1,"Yp [m]");
Grid1->SetColLabelValue(2,"Xk [m]");
Grid1->SetColLabelValue(3,"Yk [m]");


}

void tabele::OnToolBarItem2Clicked(wxCommandEvent& event)
{
    wxString napis;
    wxDouble zmienna;
    int wiersze=0;


    Grid1->ClearGrid();
    if (Grid1->GetNumberRows()!=0)
    Grid1->DeleteRows(0, Grid1->GetNumberRows(),true);


plik.open(""+projekt+"/k.kot", ios::in);  //otwarcie pliku i wczytanie danych

    while (!plik.eof())
    {
    plik>>zmienna;
    if (!plik.fail())
        {
    Grid1->InsertRows(wiersze,1,true);

                zmienna=zmienna/1000;
                napis.Printf(wxT("%.3f"),zmienna);
                Grid1->SetCellValue(wiersze,0,napis);

                plik>>zmienna;
                zmienna=zmienna/1000;
                napis.Printf(wxT("%.3f"),zmienna);
                Grid1->SetCellValue(wiersze,1,napis);

                plik>>zmienna;
                zmienna=zmienna/100;
                napis.Printf(wxT("%.3f"),zmienna);
                Grid1->SetCellValue(wiersze,2,napis);

                wiersze++;
        }
    }

plik.close();


 Grid1->SetColLabelValue(0,"X [m]");
Grid1->SetColLabelValue(1,"Y [m]");
Grid1->SetColLabelValue(2,"Rzêdna [m]");
Grid1->SetColLabelValue(3," ");

}



void tabele::OnToolBarItem3Clicked(wxCommandEvent& event)
{
    wxString napis;
    string napis2;
    wxDouble zmienna;
    int wiersze=0;


    Grid1->ClearGrid();
    if (Grid1->GetNumberRows()!=0)
    Grid1->DeleteRows(0, Grid1->GetNumberRows(),true);


plik.open(""+projekt+"/n.naz", ios::in);  //otwarcie pliku i wczytanie danych

    while (!plik.eof())
    {
    plik>>zmienna;
    if (!plik.fail())
        {
    Grid1->InsertRows(wiersze,1,true);

                zmienna=zmienna/1000;
                napis.Printf(wxT("%.3f"),zmienna);
                Grid1->SetCellValue(wiersze,0,napis);

                plik>>zmienna;
                zmienna=zmienna/1000;
                napis.Printf(wxT("%.3f"),zmienna);
                Grid1->SetCellValue(wiersze,1,napis);

                getline( plik, napis2 );
                napis=napis2;
                Grid1->SetCellValue(wiersze,2,napis);

                wiersze++;
        }
    }

plik.close();

Grid1->SetColLabelValue(0,"X [m]");
Grid1->SetColLabelValue(1,"Y [m]");
Grid1->SetColLabelValue(2,"Nazwa [m]");
Grid1->SetColLabelValue(3," ");

}



void tabele::OnToolBarItem4Clicked(wxCommandEvent& event)
{

wxString napis;
    wxDouble zmienna;
    int wiersze=0;

    Grid1->ClearGrid();
    if (Grid1->GetNumberRows()!=0)
    Grid1->DeleteRows(0, Grid1->GetNumberRows(),true);




plik.open(""+projekt+"/l.okr", ios::in);  //otwarcie pliku i wczytanie danych

    while (!plik.eof())
    {
    plik>>zmienna;
    if (!plik.fail())
        {
    Grid1->InsertRows(wiersze,1,true);

                zmienna=zmienna/1000;
                napis.Printf(wxT("%.3f"),zmienna);
                Grid1->SetCellValue(wiersze,0,napis);

                plik>>zmienna;
                zmienna=zmienna/1000;
                napis.Printf(wxT("%.3f"),zmienna);
                Grid1->SetCellValue(wiersze,1,napis);

                plik>>zmienna;
                zmienna=zmienna/1000;
                napis.Printf(wxT("%.3f"),zmienna);
                Grid1->SetCellValue(wiersze,2,napis);

                plik>>zmienna;
                zmienna=zmienna/1000;
                napis.Printf(wxT("%.3f"),zmienna);
                Grid1->SetCellValue(wiersze,3,napis);

                wiersze++;
        }
    }

plik.close();







Grid1->SetColLabelValue(0,"Xp [m]");
Grid1->SetColLabelValue(1,"Yp [m]");
Grid1->SetColLabelValue(2,"Xk [m]");
Grid1->SetColLabelValue(3,"Yk [m]");
}



void tabele::OnToolBarItem5Clicked(wxCommandEvent& event)
{
    wxString napis;
    string napis2;
    wxDouble zmienna;
    int wiersze=0;


    Grid1->ClearGrid();
    if (Grid1->GetNumberRows()!=0)
    Grid1->DeleteRows(0, Grid1->GetNumberRows(),true);


plik.open(""+projekt+"/o.okr", ios::in);  //otwarcie pliku i wczytanie danych

    while (!plik.eof())
    {
    plik>>zmienna;
    if (!plik.fail())
        {
    Grid1->InsertRows(wiersze,1,true);

                zmienna=zmienna/1000;
                napis.Printf(wxT("%.3f"),zmienna);
                Grid1->SetCellValue(wiersze,0,napis);

                plik>>zmienna;
                zmienna=zmienna/1000;
                napis.Printf(wxT("%.3f"),zmienna);
                Grid1->SetCellValue(wiersze,1,napis);

                getline( plik, napis2 );
                napis=napis2;
                Grid1->SetCellValue(wiersze,2,napis);

                wiersze++;
        }
    }

plik.close();

Grid1->SetColLabelValue(0,"X [m]");
Grid1->SetColLabelValue(1,"Y [m]");
Grid1->SetColLabelValue(2,"Data [m]");
Grid1->SetColLabelValue(3," ");
}

void tabele::OnToolBarItem6Clicked(wxCommandEvent& event)
{

    wxString napis;
    wxDouble zmienna;
    int wiersze=0;


    Grid1->ClearGrid();
    if (Grid1->GetNumberRows()!=0)
    Grid1->DeleteRows(0, Grid1->GetNumberRows(),true);


plik.open(""+projekt+"/w.wfr", ios::in);  //otwarcie pliku i wczytanie danych

    while (!plik.eof())
    {
    plik>>zmienna;
    if (!plik.fail())
        {
    Grid1->InsertRows(wiersze,1,true);

                zmienna=zmienna/1000;
                napis.Printf(wxT("%.3f"),zmienna);
                Grid1->SetCellValue(wiersze,0,napis);

                plik>>zmienna;
                zmienna=zmienna/1000;
                napis.Printf(wxT("%.3f"),zmienna);
                Grid1->SetCellValue(wiersze,1,napis);

                plik>>zmienna;
                zmienna=zmienna/100;
                napis.Printf(wxT("%.2f"),zmienna);
                Grid1->SetCellValue(wiersze,2,napis);

                wiersze++;
        }
    }

plik.close();

Grid1->SetColLabelValue(0,"X [m]");
Grid1->SetColLabelValue(1,"Y [m]");
Grid1->SetColLabelValue(2,"Wysokoœæ furty [m]");
Grid1->SetColLabelValue(3," ");
}



void tabele::OnToolBarItem7Clicked(wxCommandEvent& event)
{


}
