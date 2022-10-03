#include "glowneokno.h"
#include <wx/msgdlg.h>
#include <wx/grid.h>
#include <wx/dcclient.h>

using namespace std;
//(*InternalHeaders(glowneokno)
#include <wx/artprov.h>
#include <wx/bitmap.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//(*IdInit(glowneokno)
const long glowneokno::ID_PANEL1 = wxNewId();
const long glowneokno::ID_TOOLBARITEM1 = wxNewId();
const long glowneokno::ID_TOOLBARITEM2 = wxNewId();
const long glowneokno::ID_TOOLBARITEM3 = wxNewId();
const long glowneokno::ID_TOOLBARITEM7 = wxNewId();
const long glowneokno::ID_TOOLBARITEM4 = wxNewId();
const long glowneokno::ID_TOOLBARITEM5 = wxNewId();
const long glowneokno::ID_TOOLBARITEM6 = wxNewId();
const long glowneokno::ID_TOOLBARITEM8 = wxNewId();
const long glowneokno::ID_TOOLBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(glowneokno,wxFrame)
	//(*EventTable(glowneokno)
	//*)
END_EVENT_TABLE()

glowneokno::glowneokno(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(glowneokno)
	Create(parent, wxID_ANY, _("Graficzny podgl¹d danych"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE|wxFRAME_NO_TASKBAR|wxFRAME_FLOAT_ON_PARENT, _T("wxID_ANY"));
	SetClientSize(wxSize(839,412));
	Move(wxPoint(22,63));
	Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(344,232), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetBackgroundColour(wxColour(255,255,255));
	ToolBar1 = new wxToolBar(this, ID_TOOLBAR1, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL|wxNO_BORDER, _T("ID_TOOLBAR1"));
	ToolBarItem1 = ToolBar1->AddTool(ID_TOOLBARITEM1, _("Granice"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\granice.ico"))), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\granice.ico"))), wxITEM_CHECK, _("Granice"), wxEmptyString);
	ToolBarItem2 = ToolBar1->AddTool(ID_TOOLBARITEM2, _("Rzêdne"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\rzedne.ico"))), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\rzedne.ico"))), wxITEM_CHECK, _("Rzêdne"), wxEmptyString);
	ToolBarItem3 = ToolBar1->AddTool(ID_TOOLBARITEM3, _("Nazwy"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\nazwy.ico"))), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\nazwy.ico"))), wxITEM_CHECK, wxEmptyString, wxEmptyString);
	ToolBarItem7 = ToolBar1->AddTool(ID_TOOLBARITEM7, _("Okresy linie"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\okresy linie.ico"))), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\okresy linie.ico"))), wxITEM_CHECK, _("Okresy linie"), wxEmptyString);
	ToolBarItem4 = ToolBar1->AddTool(ID_TOOLBARITEM4, _("Okresy daty"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\okresy daty.ico"))), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\okresy daty.ico"))), wxITEM_CHECK, _("Okresy daty"), wxEmptyString);
	ToolBarItem5 = ToolBar1->AddTool(ID_TOOLBARITEM5, _("Furty"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\furty.ico"))), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\furty.ico"))), wxITEM_CHECK, _("Furty"), wxEmptyString);
	ToolBarItem6 = ToolBar1->AddTool(ID_TOOLBARITEM6, _("Parcele"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\parcele.ico"))), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\parcele.ico"))), wxITEM_CHECK, _("Parcele"), wxEmptyString);
	ToolBar1->AddSeparator();
	ToolBar1->AddSeparator();
	ToolBarItem8 = ToolBar1->AddTool(ID_TOOLBARITEM8, _("Zoom ca³oœæ"), wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_FIND")),wxART_TOOLBAR), wxNullBitmap, wxITEM_NORMAL, _("Zoom ca³oœæ"), wxEmptyString);
	ToolBar1->Realize();
	SetToolBar(ToolBar1);

	Panel1->Connect(wxEVT_RIGHT_DOWN,(wxObjectEventFunction)&glowneokno::OnPanel1RightDown,0,this);
	Panel1->Connect(wxEVT_RIGHT_UP,(wxObjectEventFunction)&glowneokno::OnPanel1RightUp,0,this);
	Panel1->Connect(wxEVT_MOTION,(wxObjectEventFunction)&glowneokno::OnPanel1MouseMove,0,this);
	Panel1->Connect(wxEVT_MOUSEWHEEL,(wxObjectEventFunction)&glowneokno::OnPanel1MouseWheel,0,this);
	Connect(ID_TOOLBARITEM1,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&glowneokno::OnToolBarItem1Clicked);
	Connect(ID_TOOLBARITEM2,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&glowneokno::OnToolBarItem2Clicked);
	Connect(ID_TOOLBARITEM3,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&glowneokno::OnToolBarItem3Clicked);
	Connect(ID_TOOLBARITEM7,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&glowneokno::OnToolBarItem7Clicked);
	Connect(ID_TOOLBARITEM4,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&glowneokno::OnToolBarItem4Clicked);
	Connect(ID_TOOLBARITEM5,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&glowneokno::OnToolBarItem5Clicked);
	Connect(ID_TOOLBARITEM8,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&glowneokno::OnToolBarItem8Clicked);
	//*)

    prd=false; //prawy nie wciœniêty ani razu
	ppx=ppy=0; //obraz nie przesuwany
	skalaglob=1000000; //skala bez zmian

	int liczba; //deklaracje zmiennych do wczytania danych
	double liczba2;
	wxString napis;
	string napis2;
//------POZYSKANIE ŒCIE¯KI PROJEKTU--------------------------
proj.open("konfig/k.konf", ios::in);
        getline(proj, projekt);
proj.close();

//-----WCZYTANIE LINII----------------------------------------
    linietopo.resize(1); //okreslenie wymiarów tabeli ze wspó³rzêdnymi linii
    for(unsigned int i=0; i<linietopo.size(); i++)
    linietopo[i].resize(7);
    linietopo.pop_back();

    linia.resize (7);


plik.open(""+projekt+"/g.gpr", ios::in);  //otwarcie pliku i wczytanie danych

    while (!plik.eof())
    {
    plik>>linia[0];
    if (!plik.fail())
        {
    plik>>linia[1];
    plik>>linia[2];
    plik>>linia[3];

    linietopo.push_back(linia);
        }
    }
plik.close();

//--------------WCZYTANIE RZÊDNYCH WYSOKOŒCIOWYCH-------------------
    rzednewsp.resize(1); //okreslenie wymiarów tabeli ze wspó³rzêdnymi linii
    for(unsigned int i=0; i<rzednewsp.size(); i++)
    rzednewsp[i].resize(7);
    rzednewsp.pop_back();
    rzedne.clear();

plik.open(""+projekt+"/k.kot", ios::in);  //otwarcie pliku i wczytanie danych

    while (!plik.eof())
    {
    plik>>linia[0];
    if (!plik.fail())
        {
    plik>>linia[1];
    plik>>liczba2;

    liczba2=liczba2/100;
    napis.Printf(wxT("%.2f"),liczba2);
    napis2=napis;

    rzednewsp.push_back(linia);
    rzedne.push_back(napis2);
        }
    }
plik.close();

//------WCZYTANIE NAZW PARCEL--------------------------------------
nazwywsp.resize(1); //okreslenie wymiarów tabeli ze wspó³rzêdnymi linii
    for(unsigned int i=0; i<nazwywsp.size(); i++)
    nazwywsp[i].resize(7);
    nazwywsp.pop_back();
    nazwy.clear();

plik.open(""+projekt+"/n.naz", ios::in);  //otwarcie pliku i wczytanie danych

    while (!plik.eof())
    {
    plik>>linia[0];
    if (!plik.fail())
        {
    plik>>linia[1];
    plik>>napis2;

    nazwywsp.push_back(linia);
    nazwy.push_back(napis2);
        }
    }
plik.close();

//-----WCZYTANIE LINII POSTÊPU ŒCIANOWEGO----------------------------------------
    liniepost.resize(1); //okreslenie wymiarów tabeli ze wspó³rzêdnymi linii
    for(unsigned int i=0; i<liniepost.size(); i++)
    liniepost[i].resize(7);
    liniepost.pop_back();

    linia.resize (7);


plik.open(""+projekt+"/l.okr", ios::in);  //otwarcie pliku i wczytanie danych

    while (!plik.eof())
    {
    plik>>linia[0];
    if (!plik.fail())
        {
    plik>>linia[1];
    plik>>linia[2];
    plik>>linia[3];

    liniepost.push_back(linia);
        }
    }
plik.close();

//--------POSTÊP ŒCIANOWY DATY------------
    postwsp.resize(1); //okreslenie wymiarów tabeli ze wspó³rzêdnymi linii
    for(unsigned int i=0; i<postwsp.size(); i++)
    postwsp[i].resize(7);
    postwsp.pop_back();
    post.clear();

plik.open(""+projekt+"/o.okr", ios::in);  //otwarcie pliku i wczytanie danych

    while (!plik.eof())
    {
    plik>>linia[0];
    if (!plik.fail())
        {
    plik>>linia[1];
    plik>>napis2;

    postwsp.push_back(linia);
    post.push_back(napis2);
        }
    }
plik.close();

//---------FURTY--------------------------------------------------
    furtywsp.resize(1); //okreslenie wymiarów tabeli ze wspó³rzêdnymi linii
    for(unsigned int i=0; i<furtywsp.size(); i++)
    furtywsp[i].resize(7);
    furtywsp.pop_back();
    furty.clear();

plik.open(""+projekt+"/w.wfr", ios::in);  //otwarcie pliku i wczytanie danych

    while (!plik.eof())
    {
    plik>>linia[0];
    if (!plik.fail())
        {
    plik>>linia[1];
    plik>>liczba2;

    liczba2=liczba2/100;
    napis.Printf(wxT("%.2f"),liczba2);
    napis2=napis;

    furtywsp.push_back(linia);
    furty.push_back(napis2);
        }
    }
plik.close();

}



glowneokno::~glowneokno()
{
	//(*Destroy(glowneokno)
	//*)
}



void glowneokno::rysowanie(vector<vector<int> >& linie)
{
    int najmx, najmy, najwx, najwy, sredx, sredy;
    double skalax,skalay,skala;

    wxPen pen1(wxColor(0,0,0),1);
    wxPen pen2(wxColor(255,0,0),2);
    wxPen pen3(wxColor(0,0,255),2);

    wxBrush pedzel(wxColor(0,0,0),wxBRUSHSTYLE_TRANSPARENT);

    wxCoord maxx, maxy;

    wxClientDC ClientDC(Panel1); //ustawiamy panel jako narzêdzie do rysowania

    ClientDC.Clear();

    ClientDC.SetBrush(pedzel);

    ClientDC.GetSize(&maxx,&maxy);

    vector<vector<int> > nowelinie, nowerzednewsp, nowenazwywsp, noweliniepost, nowepostwsp, nowefurtywsp;
    nowelinie.resize(linie.size()); //okreslenie wymiarow tabeli linii
    for(unsigned int i=0; i<nowelinie.size(); i++)
        nowelinie[i].resize(7);

        nowerzednewsp.resize(rzednewsp.size()); //okreslenie wymiarow tabeli linii
    for(unsigned int i=0; i<nowerzednewsp.size(); i++)
        nowerzednewsp[i].resize(7);

        nowenazwywsp.resize(nazwywsp.size()); //okreslenie wymiarow tabeli linii
    for(unsigned int i=0; i<nowenazwywsp.size(); i++)
        nowenazwywsp[i].resize(7);

        noweliniepost.resize(liniepost.size()); //okreslenie wymiarow tabeli linii
    for(unsigned int i=0; i<noweliniepost.size(); i++)
        noweliniepost[i].resize(7);

        nowepostwsp.resize(postwsp.size()); //okreslenie wymiarow tabeli linii
    for(unsigned int i=0; i<nowepostwsp.size(); i++)
        nowepostwsp[i].resize(7);

        nowefurtywsp.resize(furtywsp.size()); //okreslenie wymiarow tabeli linii
    for(unsigned int i=0; i<nowefurtywsp.size(); i++)
        nowefurtywsp[i].resize(7);


//-------------OBLICZENIE PARAMETRÓW PRZESKALOWANIA--------------------------------------------------------
    if (ToolBarItem1->IsToggled() && linie.size()>0) //podstawienie wartoœci pocz¹tkowych do wyboru wartoœci skrajnych
    {
    najmx=najwx=linie[0][0];
    najmy=najwy=linie[0][1];
    }
    else
       if (ToolBarItem2->IsToggled() && rzednewsp.size()>0)
        {
        najmx=najwx=rzednewsp[0][0];
        najmy=najwy=rzednewsp[0][1];
        }
        else
            if (ToolBarItem3->IsToggled() && nazwywsp.size()>0)
            {
            najmx=najwx=nazwywsp[0][0];
            najmy=najwy=nazwywsp[0][1];
            }
            else
                if (ToolBarItem7->IsToggled() && liniepost.size()>0)
                {
                najmx=najwx=liniepost[0][0];
                najmy=najwy=liniepost[0][1];
                }
                else
                    if (ToolBarItem4->IsToggled() && postwsp.size()>0)
                    {
                    najmx=najwx=postwsp[0][0];
                    najmy=najwy=postwsp[0][1];
                    }
                else
                        if (ToolBarItem5->IsToggled() && furtywsp.size()>0)
                        {
                        najmx=najwx=furtywsp[0][0];
                        najmy=najwy=furtywsp[0][1];
                        }

   if (ToolBarItem1->IsToggled() && linie.size()>0)
    for (unsigned int i=0; i<linie.size(); i++) //znalezienie zakresu danych
    {
        if (linie[i][0]<najmx)
            najmx=linie[i][0];
        if (linie[i][2]<najmx)
            najmx=linie[i][2];

        if (linie[i][0]>najwx)
            najwx=linie[i][0];
        if (linie[i][2]>najwx)
            najwx=linie[i][2];

        if (linie[i][1]<najmy)
            najmy=linie[i][1];
        if (linie[i][3]<najmy)
            najmy=linie[i][3];

        if (linie[i][1]>najwy)
            najwy=linie[i][1];
        if (linie[i][3]>najwy)
            najwy=linie[i][3];
    }

       if (ToolBarItem2->IsToggled() && rzednewsp.size()>0)
           for (unsigned int i=0; i<rzednewsp.size(); i++) //znalezienie zakresu danych
        {
            if (rzednewsp[i][0]<najmx)
                najmx=rzednewsp[i][0];

            if (rzednewsp[i][0]>najwx)
                najwx=rzednewsp[i][0];

            if (rzednewsp[i][1]<najmy)
                najmy=rzednewsp[i][1];

            if (rzednewsp[i][1]>najwy)
                najwy=rzednewsp[i][1];
        }

            if (ToolBarItem3->IsToggled() && nazwywsp.size()>0)
               for (unsigned int i=0; i<nazwywsp.size(); i++) //znalezienie zakresu danych
            {
                if (nazwywsp[i][0]<najmx)
                    najmx=nazwywsp[i][0];

                if (nazwywsp[i][0]>najwx)
                    najwx=nazwywsp[i][0];

                if (nazwywsp[i][1]<najmy)
                    najmy=nazwywsp[i][1];

                if (nazwywsp[i][1]>najwy)
                    najwy=nazwywsp[i][1];
            }

                if (ToolBarItem7->IsToggled() && liniepost.size()>0)
                    for (unsigned int i=0; i<liniepost.size(); i++) //znalezienie zakresu danych
                {
                    if (liniepost[i][0]<najmx)
                        najmx=liniepost[i][0];
                    if (liniepost[i][2]<najmx)
                        najmx=liniepost[i][2];

                    if (liniepost[i][0]>najwx)
                        najwx=liniepost[i][0];
                    if (liniepost[i][2]>najwx)
                        najwx=liniepost[i][2];

                    if (liniepost[i][1]<najmy)
                        najmy=liniepost[i][1];
                    if (liniepost[i][3]<najmy)
                        najmy=liniepost[i][3];

                    if (liniepost[i][1]>najwy)
                        najwy=liniepost[i][1];
                    if (liniepost[i][3]>najwy)
                        najwy=liniepost[i][3];
                }

                    if (ToolBarItem4->IsToggled() && postwsp.size()>0)
                       for (unsigned int i=0; i<postwsp.size(); i++) //znalezienie zakresu danych
                    {
                        if (postwsp[i][0]<najmx)
                            najmx=postwsp[i][0];

                        if (postwsp[i][0]>najwx)
                            najwx=postwsp[i][0];

                        if (postwsp[i][1]<najmy)
                            najmy=postwsp[i][1];

                        if (postwsp[i][1]>najwy)
                            najwy=postwsp[i][1];
                    }

                         if (ToolBarItem5->IsToggled() && furtywsp.size()>0)
                           for (unsigned int i=0; i<furtywsp.size(); i++) //znalezienie zakresu danych
                        {
                            if (furtywsp[i][0]<najmx)
                                najmx=furtywsp[i][0];

                            if (furtywsp[i][0]>najwx)
                                najwx=furtywsp[i][0];

                            if (furtywsp[i][1]<najmy)
                                najmy=furtywsp[i][1];

                            if (furtywsp[i][1]>najwy)
                                najwy=furtywsp[i][1];
                        }


    skalax=(najwx-najmx)/(maxy); //wyznaczenie skali lokalnej
    skalay=(najwy-najmy)/(maxx);

    if (skalax<skalay)
    {
        skala=skalay*skalaglob/1000000;
    }
    else
    {
        skala=skalax*skalaglob/1000000;
    }

//-------------OBLICZENIE WSPÓ£RZÊDNYCH PO PRZESKALOWANIU------------------------------------------------------------------
    if (ToolBarItem1->IsToggled() && nowelinie.size()>0)
    for (unsigned int i=0; i<nowelinie.size(); i++) //przeskalowane wspó³rzêdne
    {
        nowelinie[i][0]=linie[i][0]/skala;
        nowelinie[i][2]=linie[i][2]/skala;
        nowelinie[i][1]=linie[i][1]/skala;
        nowelinie[i][3]=linie[i][3]/skala;
    }

    if (ToolBarItem2->IsToggled() && nowerzednewsp.size()>0)
        for (unsigned int i=0; i<nowerzednewsp.size(); i++) //przeskalowane wspó³rzêdne
        {
            nowerzednewsp[i][0]=rzednewsp[i][0]/skala;
            nowerzednewsp[i][1]=rzednewsp[i][1]/skala;
        }

        if (ToolBarItem3->IsToggled() && nowenazwywsp.size()>0)
            for (unsigned int i=0; i<nowenazwywsp.size(); i++) //przeskalowane wspó³rzêdne
            {
                nowenazwywsp[i][0]=nazwywsp[i][0]/skala;
                nowenazwywsp[i][1]=nazwywsp[i][1]/skala;
            }

            if (ToolBarItem7->IsToggled() && noweliniepost.size()>0)
                for (unsigned int i=0; i<noweliniepost.size(); i++) //przeskalowane wspó³rzêdne
                {
                    noweliniepost[i][0]=liniepost[i][0]/skala;
                    noweliniepost[i][2]=liniepost[i][2]/skala;
                    noweliniepost[i][1]=liniepost[i][1]/skala;
                    noweliniepost[i][3]=liniepost[i][3]/skala;
                }

                if (ToolBarItem4->IsToggled() && nowepostwsp.size()>0)
                    for (unsigned int i=0; i<nowepostwsp.size(); i++) //przeskalowane wspó³rzêdne
                    {
                        nowepostwsp[i][0]=postwsp[i][0]/skala;
                        nowepostwsp[i][1]=postwsp[i][1]/skala;
                    }

                    if (ToolBarItem5->IsToggled() && nowefurtywsp.size()>0)
                        for (unsigned int i=0; i<nowefurtywsp.size(); i++) //przeskalowane wspó³rzêdne
                        {
                            nowefurtywsp[i][0]=furtywsp[i][0]/skala;
                            nowefurtywsp[i][1]=furtywsp[i][1]/skala;

                        }
//-------------OBLICZENIE PARAMETRÓW TRANSLACJI------------------------------------------------------------------

    if (ToolBarItem1->IsToggled() && nowelinie.size()>0) //podstawienie wartoœci pocz¹tkowych do wyboru wartoœci skrajnych
    {
    najmx=najwx=nowelinie[0][0];
    najmy=najwy=nowelinie[0][1];
    }
    else
       if (ToolBarItem2->IsToggled() && nowerzednewsp.size()>0)
        {
        najmx=najwx=nowerzednewsp[0][0];
        najmy=najwy=nowerzednewsp[0][1];
        }
            if (ToolBarItem3->IsToggled() && nowenazwywsp.size()>0)
            {
            najmx=najwx=nowenazwywsp[0][0];
            najmy=najwy=nowenazwywsp[0][1];
            }
            else
                if (ToolBarItem7->IsToggled() && noweliniepost.size()>0)
                {
                najmx=najwx=noweliniepost[0][0];
                najmy=najwy=noweliniepost[0][1];
                }
                else
                    if (ToolBarItem4->IsToggled() && nowepostwsp.size()>0)
                    {
                    najmx=najwx=nowepostwsp[0][0];
                    najmy=najwy=nowepostwsp[0][1];
                    }
                    else
                        if (ToolBarItem5->IsToggled() && nowefurtywsp.size()>0)
                        {
                        najmx=najwx=nowefurtywsp[0][0];
                        najmy=najwy=nowefurtywsp[0][1];
                        }

    if (ToolBarItem1->IsToggled() && nowelinie.size()>0)
    for (unsigned int i=0; i<nowelinie.size(); i++)
    {
        if (nowelinie[i][0]<najmx)
            najmx=nowelinie[i][0];
        if (nowelinie[i][2]<najmx)
            najmx=nowelinie[i][2];

        if (nowelinie[i][0]>najwx)
            najwx=nowelinie[i][0];
        if (nowelinie[i][2]>najwx)
            najwx=nowelinie[i][2];

        if (nowelinie[i][1]<najmy)
            najmy=nowelinie[i][1];
        if (nowelinie[i][3]<najmy)
            najmy=nowelinie[i][3];

        if (nowelinie[i][1]>najwy)
            najwy=nowelinie[i][1];
        if (nowelinie[i][3]>najwy)
            najwy=nowelinie[i][3];
    }

        if (ToolBarItem2->IsToggled() && nowerzednewsp.size()>0)
           for (unsigned int i=0; i<nowerzednewsp.size(); i++) //znalezienie zakresu danych
        {
            if (nowerzednewsp[i][0]<najmx)
                najmx=nowerzednewsp[i][0];

            if (nowerzednewsp[i][0]>najwx)
                najwx=nowerzednewsp[i][0];

            if (nowerzednewsp[i][1]<najmy)
                najmy=nowerzednewsp[i][1];

            if (nowerzednewsp[i][1]>najwy)
                najwy=nowerzednewsp[i][1];
        }

                if (ToolBarItem3->IsToggled() && nowenazwywsp.size()>0)
               for (unsigned int i=0; i<nowenazwywsp.size(); i++) //znalezienie zakresu danych
            {
                if (nowenazwywsp[i][0]<najmx)
                    najmx=nowenazwywsp[i][0];

                if (nowenazwywsp[i][0]>najwx)
                    najwx=nowenazwywsp[i][0];

                if (nowenazwywsp[i][1]<najmy)
                    najmy=nowenazwywsp[i][1];

                if (nowenazwywsp[i][1]>najwy)
                    najwy=nowenazwywsp[i][1];
            }

                    if (ToolBarItem7->IsToggled() && noweliniepost.size()>0)
                for (unsigned int i=0; i<noweliniepost.size(); i++)
                {
                    if (noweliniepost[i][0]<najmx)
                        najmx=noweliniepost[i][0];
                    if (noweliniepost[i][2]<najmx)
                        najmx=noweliniepost[i][2];

                    if (noweliniepost[i][0]>najwx)
                        najwx=noweliniepost[i][0];
                    if (noweliniepost[i][2]>najwx)
                        najwx=noweliniepost[i][2];

                    if (noweliniepost[i][1]<najmy)
                        najmy=noweliniepost[i][1];
                    if (noweliniepost[i][3]<najmy)
                        najmy=noweliniepost[i][3];

                    if (noweliniepost[i][1]>najwy)
                        najwy=noweliniepost[i][1];
                    if (noweliniepost[i][3]>najwy)
                        najwy=noweliniepost[i][3];
                }

                        if (ToolBarItem4->IsToggled() && nowepostwsp.size()>0)
                       for (unsigned int i=0; i<nowepostwsp.size(); i++) //znalezienie zakresu danych
                    {
                        if (nowepostwsp[i][0]<najmx)
                            najmx=nowepostwsp[i][0];

                        if (nowepostwsp[i][0]>najwx)
                            najwx=nowepostwsp[i][0];

                        if (nowepostwsp[i][1]<najmy)
                            najmy=nowepostwsp[i][1];

                        if (nowepostwsp[i][1]>najwy)
                            najwy=nowepostwsp[i][1];
                    }

                            if (ToolBarItem5->IsToggled() && nowefurtywsp.size()>0)
                           for (unsigned int i=0; i<nowefurtywsp.size(); i++) //znalezienie zakresu danych
                        {
                            if (nowefurtywsp[i][0]<najmx)
                                najmx=nowefurtywsp[i][0];

                            if (nowefurtywsp[i][0]>najwx)
                                najwx=nowefurtywsp[i][0];

                            if (nowefurtywsp[i][1]<najmy)
                                najmy=nowefurtywsp[i][1];

                            if (nowefurtywsp[i][1]>najwy)
                                najwy=nowefurtywsp[i][1];
                        }

    sredx=(maxx-(najwy-najmy))/2;
    sredy=(maxy-(najwx-najmx))/2;

//-------------OBLICZENIE OSTATECZNYCH WSPÓ£RZÊDNYCH------------------------------------------------------------------
    if (ToolBarItem1->IsToggled() && nowelinie.size()>0)
    for (unsigned int i=0; i<nowelinie.size(); i++)
    {
        nowelinie[i][0]=nowelinie[i][0]-najmx+sredy-ppy;
        nowelinie[i][2]=nowelinie[i][2]-najmx+sredy-ppy;
        nowelinie[i][1]=nowelinie[i][1]-najmy+sredx+ppx;
        nowelinie[i][3]=nowelinie[i][3]-najmy+sredx+ppx;
    }

        if (ToolBarItem2->IsToggled() && nowerzednewsp.size()>0)
        for (unsigned int i=0; i<nowerzednewsp.size(); i++)
        {
            nowerzednewsp[i][0]=nowerzednewsp[i][0]-najmx+sredy-ppy;
            nowerzednewsp[i][1]=nowerzednewsp[i][1]-najmy+sredx+ppx;
        }

            if (ToolBarItem3->IsToggled() && nowenazwywsp.size()>0)
            for (unsigned int i=0; i<nowenazwywsp.size(); i++)
            {
                nowenazwywsp[i][0]=nowenazwywsp[i][0]-najmx+sredy-ppy;
                nowenazwywsp[i][1]=nowenazwywsp[i][1]-najmy+sredx+ppx;
            }

                if (ToolBarItem7->IsToggled() && noweliniepost.size()>0)
                for (unsigned int i=0; i<noweliniepost.size(); i++)
                {
                    noweliniepost[i][0]=noweliniepost[i][0]-najmx+sredy-ppy;
                    noweliniepost[i][2]=noweliniepost[i][2]-najmx+sredy-ppy;
                    noweliniepost[i][1]=noweliniepost[i][1]-najmy+sredx+ppx;
                    noweliniepost[i][3]=noweliniepost[i][3]-najmy+sredx+ppx;
                }

                    if (ToolBarItem4->IsToggled() && nowepostwsp.size()>0)
                    for (unsigned int i=0; i<nowepostwsp.size(); i++)
                    {
                        nowepostwsp[i][0]=nowepostwsp[i][0]-najmx+sredy-ppy;
                        nowepostwsp[i][1]=nowepostwsp[i][1]-najmy+sredx+ppx;
                    }

                        if (ToolBarItem5->IsToggled() && nowefurtywsp.size()>0)
                        for (unsigned int i=0; i<nowefurtywsp.size(); i++)
                        {
                            nowefurtywsp[i][0]=nowefurtywsp[i][0]-najmx+sredy-ppy;
                            nowefurtywsp[i][1]=nowefurtywsp[i][1]-najmy+sredx+ppx;
                        }


//-------------RYSOWANIE------------------------------------------------------------------
    if (ToolBarItem1->IsToggled() && nowelinie.size()>0)
    for (unsigned int i=0; i<nowelinie.size(); i++)
    {
            ClientDC.DrawLine(nowelinie[i][1],maxy-nowelinie[i][0],nowelinie[i][3],maxy-nowelinie[i][2]);
    }

        if (ToolBarItem2->IsToggled() && nowerzednewsp.size()>0)
        for (unsigned int i=0; i<rzedne.size(); i++)
        {
                ClientDC.DrawCircle(nowerzednewsp[i][1],maxy-nowerzednewsp[i][0],3);
                ClientDC.DrawText(rzedne[i],nowerzednewsp[i][1]+4, maxy-nowerzednewsp[i][0]-4);
        }

            if (ToolBarItem3->IsToggled() && nowenazwywsp.size()>0)
            for (unsigned int i=0; i<nowenazwywsp.size(); i++)
            {
                    ClientDC.DrawPoint(nowenazwywsp[i][1],maxy-nowenazwywsp[i][0]);
                    ClientDC.DrawText(nazwy[i],nowenazwywsp[i][1]+2, maxy-nowenazwywsp[i][0]-2);
            }

                if (ToolBarItem7->IsToggled() && noweliniepost.size()>0)
                for (unsigned int i=0; i<noweliniepost.size(); i++)
                {
                        ClientDC.SetPen(pen2);
                        ClientDC.DrawLine(noweliniepost[i][1],maxy-noweliniepost[i][0],noweliniepost[i][3],maxy-noweliniepost[i][2]);
                        ClientDC.SetPen(pen1);
                }

                    if (ToolBarItem4->IsToggled() && nowepostwsp.size()>0)
                    for (unsigned int i=0; i<nowepostwsp.size(); i++)
                    {
                            ClientDC.SetTextForeground(wxColor(255,0,0));
                            ClientDC.DrawPoint(nowepostwsp[i][1],maxy-nowepostwsp[i][0]);
                            ClientDC.DrawText(post[i],nowepostwsp[i][1]+2, maxy-nowepostwsp[i][0]-2);
                            ClientDC.SetTextForeground(wxColor(0,0,0));
                    }

                        if (ToolBarItem5->IsToggled() && nowefurtywsp.size()>0)
                        for (unsigned int i=0; i<nowefurtywsp.size(); i++)
                        {
                                ClientDC.SetTextForeground(wxColor(255,0,0));
                                ClientDC.SetPen(pen2);

                                ClientDC.DrawCircle(nowefurtywsp[i][1]+14,maxy-nowefurtywsp[i][0]+8, 16);
                                ClientDC.DrawText(furty[i],nowefurtywsp[i][1]+2, maxy-nowefurtywsp[i][0]-2);

                                ClientDC.SetTextForeground(wxColor(0,0,0));
                                ClientDC.SetPen(pen1);
                        }

}

void glowneokno::OnPanel1RightDown(wxMouseEvent& event)
{
    if (event.GetX()>10 && event.GetY()>10)
    {
               rd=true;
    if (!prd )
    {
    prd=true;
    ppx=ppy=0;
    }


        pxk=event.GetX();
        pyk=event.GetY();
    }

}

void glowneokno::OnPanel1RightUp(wxMouseEvent& event)
{
    rd=false;
}

void glowneokno::OnPanel1MouseMove(wxMouseEvent& event)
{
 int w, h;
    GetClientSize(&w, &h);

    if (rd && event.GetX()>10 && event.GetX()<w-10 && event.GetY()>10 && event.GetY()<h-10)
    {
pxp=pxk;
pyp=pyk;

pxk=event.GetX();
pyk=event.GetY();

ppx=ppx+pxk-pxp;
ppy=ppy+pyk-pyp;

    rysowanie(linietopo);
    }
    else
    {
        rd=false;
    }


}

void glowneokno::OnPanel1MouseWheel(wxMouseEvent& event)
{
    if (event.GetWheelRotation()>0)
    {
        skalaglob=skalaglob*1.3;
    }
    else
    {
      skalaglob=skalaglob*0.7;
    }
    rysowanie(linietopo);

}

//Granice
void glowneokno::OnToolBarItem1Clicked(wxCommandEvent& event)
{
     rd=false;
    rysowanie(linietopo);
}

//Rzedne
void glowneokno::OnToolBarItem2Clicked(wxCommandEvent& event)
{
    rd=false;
    rysowanie(linietopo);
}

//Nazwy
void glowneokno::OnToolBarItem3Clicked(wxCommandEvent& event)
{
    rd=false;
    rysowanie(linietopo);
}

//Okresy linie
void glowneokno::OnToolBarItem7Clicked(wxCommandEvent& event)
{
    rd=false;
    rysowanie(linietopo);
}

//Okresy daty
void glowneokno::OnToolBarItem4Clicked(wxCommandEvent& event)
{
    rd=false;
    rysowanie(linietopo);
}

//Furty
void glowneokno::OnToolBarItem5Clicked(wxCommandEvent& event)
{
    rd=false;
    rysowanie(linietopo);
}

//zoom ca³oœæ
void glowneokno::OnToolBarItem8Clicked(wxCommandEvent& event)
{
    rd=false;
    skalaglob=1000000;
    prd=false;
	ppx=ppy=0;

    rysowanie(linietopo);
}
