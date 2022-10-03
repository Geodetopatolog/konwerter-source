#include "SprawdzenieTopo.h"
#include <wx/msgdlg.h>
#include <wx/grid.h>
#include <wx/dcclient.h>

//(*InternalHeaders(SprawdzenieTopo)
#include <wx/artprov.h>
#include <wx/bitmap.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//(*IdInit(SprawdzenieTopo)
const long SprawdzenieTopo::ID_PANEL1 = wxNewId();
const long SprawdzenieTopo::ID_TOOLBARITEM1 = wxNewId();
const long SprawdzenieTopo::ID_TOOLBARITEM2 = wxNewId();
const long SprawdzenieTopo::ID_TOOLBARITEM3 = wxNewId();
const long SprawdzenieTopo::ID_TOOLBARITEM4 = wxNewId();
const long SprawdzenieTopo::ID_TOOLBARITEM10 = wxNewId();
const long SprawdzenieTopo::ID_TOOLBARITEM11 = wxNewId();
const long SprawdzenieTopo::ID_TOOLBARITEM5 = wxNewId();
const long SprawdzenieTopo::ID_TOOLBARITEM6 = wxNewId();
const long SprawdzenieTopo::ID_TOOLBARITEM7 = wxNewId();
const long SprawdzenieTopo::ID_TOOLBARITEM8 = wxNewId();
const long SprawdzenieTopo::ID_TOOLBARITEM9 = wxNewId();
const long SprawdzenieTopo::ID_TOOLBARITEM12 = wxNewId();
const long SprawdzenieTopo::ID_TOOLBAR1 = wxNewId();
const long SprawdzenieTopo::ID_MESSAGEDIALOG1 = wxNewId();
const long SprawdzenieTopo::ID_MESSAGEDIALOG2 = wxNewId();
const long SprawdzenieTopo::ID_MESSAGEDIALOG3 = wxNewId();
const long SprawdzenieTopo::ID_MESSAGEDIALOG4 = wxNewId();
//*)

BEGIN_EVENT_TABLE(SprawdzenieTopo,wxFrame)
	//(*EventTable(SprawdzenieTopo)
	//*)
END_EVENT_TABLE()
//konstruktor
SprawdzenieTopo::SprawdzenieTopo(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(SprawdzenieTopo)
	Create(parent, id, _("Sprawdzenie i naprawa topolgii"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE|wxFRAME_NO_TASKBAR|wxFRAME_FLOAT_ON_PARENT, _T("id"));
	SetClientSize(wxSize(814,486));
	Move(wxPoint(22,63));
	Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(376,272), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetForegroundColour(wxColour(255,255,255));
	Panel1->SetBackgroundColour(wxColour(255,255,255));
	ToolBar1 = new wxToolBar(this, ID_TOOLBAR1, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL|wxNO_BORDER, _T("ID_TOOLBAR1"));
	ToolBarItem1 = ToolBar1->AddTool(ID_TOOLBARITEM1, _("podwojne"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\dlugosc 0.ico"))), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\dlugosc 0.ico"))), wxITEM_NORMAL, _("Linie podwójne oraz o d³ugoœci 0"), wxEmptyString);
	ToolBarItem2 = ToolBar1->AddTool(ID_TOOLBARITEM2, _("wiszace"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\wiszace.ico"))), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\wiszace.ico"))), wxITEM_NORMAL, _("Linie wisz¹ce"), wxEmptyString);
	ToolBarItem3 = ToolBar1->AddTool(ID_TOOLBARITEM3, _("przeciecia"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\przeciecie.ico"))), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\przeciecie.ico"))), wxITEM_NORMAL, _("Linie przecinaj¹ce siê"), wxEmptyString);
	ToolBar1->AddSeparator();
	ToolBarItem4 = ToolBar1->AddTool(ID_TOOLBARITEM4, _("Naprawa"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\naprawa topologii.ico"))), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\naprawa topologii.ico"))), wxITEM_CHECK, _("Naprawa b³êdów topologii"), wxEmptyString);
	ToolBar1->AddSeparator();
	ToolBarItem10 = ToolBar1->AddTool(ID_TOOLBARITEM10, _("Poprzednie"), wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_GO_BACK")),wxART_TOOLBAR), wxNullBitmap, wxITEM_NORMAL, _("Poprzedni b³¹d"), wxEmptyString);
	ToolBarItem11 = ToolBar1->AddTool(ID_TOOLBARITEM11, _("Nastêpne"), wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_GO_FORWARD")),wxART_TOOLBAR), wxNullBitmap, wxITEM_NORMAL, _("Nastêpny b³¹d"), wxEmptyString);
	ToolBar1->AddSeparator();
	ToolBarItem5 = ToolBar1->AddTool(ID_TOOLBARITEM5, _("Usuñ"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\usun linie.ico"))), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\usun linie.ico"))), wxITEM_NORMAL, _("Usuñ ca³¹ liniê"), wxEmptyString);
	ToolBarItem6 = ToolBar1->AddTool(ID_TOOLBARITEM6, _("Doci¹gnij 1 do wêz³a"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\1 do wezla.ico"))), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\1 do wezla.ico"))), wxITEM_NORMAL, _("Doci¹gnij 1 do wêz³a"), wxEmptyString);
	ToolBarItem7 = ToolBar1->AddTool(ID_TOOLBARITEM7, _("Doci¹gnij 1 do linii"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\1 do linii.ico"))), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\1 do linii.ico"))), wxITEM_NORMAL, _("Doci¹gnij 1 do linii"), wxEmptyString);
	ToolBarItem8 = ToolBar1->AddTool(ID_TOOLBARITEM8, _("Doci¹gnij 2 do wêz³a"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\2 do wezla.ico"))), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\2 do wezla.ico"))), wxITEM_NORMAL, _("Doci¹gnij 2 do wêz³a"), wxEmptyString);
	ToolBarItem9 = ToolBar1->AddTool(ID_TOOLBARITEM9, _("Doci¹gnij 2 do linii"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\2 do linii.ico"))), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\2 do linii.ico"))), wxITEM_NORMAL, _("Doci¹gnij 2 do linii"), wxEmptyString);
	ToolBar1->AddSeparator();
	ToolBarItem12 = ToolBar1->AddTool(ID_TOOLBARITEM12, _("Zapisz"), wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_FILE_SAVE")),wxART_TOOLBAR), wxNullBitmap, wxITEM_NORMAL, _("Zapisz poprawione granice"), wxEmptyString);
	ToolBar1->Realize();
	SetToolBar(ToolBar1);
	MessageDialog1 = new wxMessageDialog(this, _("Wszystkie linie o d³ugoœci 0 oraz podwójne, zosta³y usuniête"), _("Linie o d³ugoœci 0 oraz podwójne"), wxOK|wxCANCEL, wxDefaultPosition);
	MessageDialog2 = new wxMessageDialog(this, _("Nie wykryto ¿adnych wêz³ów wisz¹cych"), _("Wêz³y wisz¹ce"), wxOK|wxCANCEL, wxDefaultPosition);
	MessageDialog3 = new wxMessageDialog(this, _("Wykryto wêz³y wisz¹ce, konieczna jest ich naprawa"), _("Wêz³y wisz¹ce"), wxOK|wxCANCEL, wxDefaultPosition);
	MessageDialog4 = new wxMessageDialog(this, _("Dokonano przeciêcia linii tworz¹c nowe wêz³y"), _("Linie przecinaj¹ce siê"), wxOK|wxCANCEL, wxDefaultPosition);

	Panel1->Connect(wxEVT_RIGHT_DOWN,(wxObjectEventFunction)&SprawdzenieTopo::OnPanel1RightDown,0,this);
	Panel1->Connect(wxEVT_RIGHT_UP,(wxObjectEventFunction)&SprawdzenieTopo::OnPanel1RightUp,0,this);
	Panel1->Connect(wxEVT_MOTION,(wxObjectEventFunction)&SprawdzenieTopo::OnPanel1MouseMove,0,this);
	Panel1->Connect(wxEVT_MOUSEWHEEL,(wxObjectEventFunction)&SprawdzenieTopo::OnPanel1MouseWheel,0,this);
	Connect(ID_TOOLBARITEM1,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&SprawdzenieTopo::OnToolBarItem1Clicked);
	Connect(ID_TOOLBARITEM2,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&SprawdzenieTopo::OnToolBarItem2Clicked);
	Connect(ID_TOOLBARITEM3,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&SprawdzenieTopo::OnToolBarItem3Clicked);
	Connect(ID_TOOLBARITEM4,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&SprawdzenieTopo::OnToolBarItem4Clicked);
	Connect(ID_TOOLBARITEM10,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&SprawdzenieTopo::OnToolBarItem10Clicked);
	Connect(ID_TOOLBARITEM11,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&SprawdzenieTopo::OnToolBarItem11Clicked);
	Connect(ID_TOOLBARITEM5,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&SprawdzenieTopo::OnToolBarItem5Clicked);
	Connect(ID_TOOLBARITEM6,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&SprawdzenieTopo::OnToolBarItem6Clicked);
	Connect(ID_TOOLBARITEM7,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&SprawdzenieTopo::OnToolBarItem7Clicked);
	Connect(ID_TOOLBARITEM8,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&SprawdzenieTopo::OnToolBarItem8Clicked);
	Connect(ID_TOOLBARITEM9,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&SprawdzenieTopo::OnToolBarItem9Clicked);
	Connect(ID_TOOLBARITEM12,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&SprawdzenieTopo::OnToolBarItem12Clicked);
	//*)

    war=false;
	prd=false;
	ppx=ppy=0;
	skalaglob=1000000;
//wczytanie linii
    linietopo.resize(1); //okreslenie wymiarów tabeli ze wspó³rzêdnymi linii
    for(unsigned int i=0; i<linietopo.size(); i++)
    linietopo[i].resize(7);
    linietopo.pop_back();

    linia.resize (7);

//fstream plik, proj; //deklaracje zmiennych
//string projekt;

proj.open("konfig/k.konf", ios::in); //pozyskanie œcie¿ki do projektu
        getline(proj, projekt);
proj.close();

plik.open(""+projekt+"/g.gpr", ios::in);  //otwarcie pliku i wczytanie danych

    while (!plik.eof())
    {
    plik>>linia[0];
    if (!plik.fail())
        {
    plik>>linia[1];
    plik>>linia[2];
    plik>>linia[3];
    linia[4]=odleglosc(linia[0],linia[1],linia[2],linia[3]);

    linietopo.push_back(linia);
        }
    }
plik.close();

rysowanie(linietopo);
}
//destruktor
SprawdzenieTopo::~SprawdzenieTopo()
{
	//(*Destroy(SprawdzenieTopo)
	//*)
}

void SprawdzenieTopo::rysowanie(vector<vector<int> >& linie)
{
    wxPen pen1(wxColor(0,0,0),1);
    wxPen pen2(wxColor(255,0,0),2);
    wxPen pen3(wxColor(0,0,255),2);

    wxCoord maxx, maxy;

    wxClientDC ClientDC(Panel1); //ustawiamy panel jako narzêdzie do rysowania

    ClientDC.Clear();


    ClientDC.GetSize(&maxx,&maxy);

    vector<vector<int> > nowelinie;
    nowelinie.resize(linie.size()); //okreslenie wymiarow tabeli linii
    for(unsigned int i=0; i<nowelinie.size(); i++)
        nowelinie[i].resize(7);

    int najmx,najmy, najwx, najwy, sredx, sredy;
    double skalax,skalay,skala;
    najmx=najwx=linie[0][0];
    najmy=najwy=linie[0][1];

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


    skalax=(najwx-najmx)/(maxy); //wyznaczenie skali globalnej
    skalay=(najwy-najmy)/(maxx);

    if (skalax<skalay)
    {
        skala=skalay*skalaglob/1000000;//*(skalag/100);
    }
    else
    {
        skala=skalax*skalaglob/1000000;//*(skalag/100);
    }

    for (unsigned int i=0; i<nowelinie.size(); i++) //przeskalowane wspó³rzêdne
    {
        nowelinie[i][0]=linie[i][0]/skala;
        nowelinie[i][2]=linie[i][2]/skala;
        nowelinie[i][1]=linie[i][1]/skala;
        nowelinie[i][3]=linie[i][3]/skala;
    }

    najmx=najwx=nowelinie[0][0];
    najmy=najwy=nowelinie[0][1];

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

    sredx=(maxx-(najwy-najmy))/2;
    sredy=(maxy-(najwx-najmx))/2;

    for (unsigned int i=0; i<nowelinie.size(); i++)
    {
        nowelinie[i][0]=nowelinie[i][0]-najmx+sredy-ppy;
        nowelinie[i][2]=nowelinie[i][2]-najmx+sredy-ppy;
        nowelinie[i][1]=nowelinie[i][1]-najmy+sredx+ppx;
        nowelinie[i][3]=nowelinie[i][3]-najmy+sredx+ppx;

    }

    for (unsigned int i=0; i<nowelinie.size(); i++)
    {
        if (linie[i][5]==1 || linie[i][5]==2)
        {
            ClientDC.SetPen(pen2);
            ClientDC.DrawLine(nowelinie[i][1],maxy-nowelinie[i][0],nowelinie[i][3],maxy-nowelinie[i][2]);
            ClientDC.SetPen(pen1);

        }
        else if (linie[i][5]==3)
        {
            ClientDC.SetPen(pen3);
            ClientDC.DrawLine(nowelinie[i][1],maxy-nowelinie[i][0],nowelinie[i][3],maxy-nowelinie[i][2]);
            ClientDC.SetPen(pen1);

        }
        else
            ClientDC.DrawLine(nowelinie[i][1],maxy-nowelinie[i][0],nowelinie[i][3],maxy-nowelinie[i][2]);

    }

}

void SprawdzenieTopo::rysowanietopo(vector<vector<int> >& linie, int ktora)
{
    wxPen pen1(wxColor(0,0,0),1);
    wxPen pen2(wxColor(255,0,0),2);
    wxPen pen3(wxColor(0,0,255),2);

    wxCoord maxx, maxy;

    wxClientDC ClientDC(Panel1); //ustawiamy panel jako narzêdzie do rysowania

    ClientDC.Clear();

    ClientDC.GetSize(&maxx,&maxy);

    vector<vector<int> > nowelinie;
    nowelinie.resize(linie.size()); //okreslenie wymiarow tabeli linii
    for(unsigned int i=0; i<nowelinie.size(); i++)
        nowelinie[i].resize(7);

    int najmx,najmy, najwx, najwy, sredx, sredy;
    double skalax,skalay,skala;

//-------------
    if (linie[ktora][0]>linie[ktora][2])
    {
        najwx=linie[ktora][0];
        najmx=linie[ktora][2];
    }
    else
    {
        najwx=linie[ktora][2];
        najmx=linie[ktora][0];
    }

    if (linie[ktora][1]>linie[ktora][3])
    {
        najwy=linie[ktora][1];
        najmy=linie[ktora][3];
    }
    else
    {
        najwy=linie[ktora][3];
        najmy=linie[ktora][1];
    }

    skalax=(najwx-najmx)/(maxy-50); //wyznaczenie skali lokalnej
    skalay=(najwy-najmy)/(maxx-50);

    if (skalax<skalay)
    {
        skala=skalay*skalaglob/1000000;
    }
    else
    {
        skala=skalax*skalaglob/1000000;
    }

//-------------OBLICZENIE WSPÓ£RZÊDNYCH PO PRZESKALOWANIU------------------------------------------------------------------

    for (unsigned int i=0; i<nowelinie.size(); i++) //przeskalowane wspó³rzêdne
    {
        nowelinie[i][0]=linie[i][0]/skala;
        nowelinie[i][2]=linie[i][2]/skala;
        nowelinie[i][1]=linie[i][1]/skala;
        nowelinie[i][3]=linie[i][3]/skala;
    }

    if (nowelinie[ktora][0]>nowelinie[ktora][2])
    {
        najwx=nowelinie[ktora][0];
        najmx=nowelinie[ktora][2];
    }
    else
    {
        najwx=nowelinie[ktora][2];
        najmx=nowelinie[ktora][0];
    }

    if (nowelinie[ktora][1]>nowelinie[ktora][3])
    {
        najwy=nowelinie[ktora][1];
        najmy=nowelinie[ktora][3];
    }
    else
    {
        najwy=nowelinie[ktora][3];
        najmy=nowelinie[ktora][1];
    }


    sredx=(maxx-(najwy-najmy))/2;
    sredy=(maxy-(najwx-najmx))/2;

//-------------OBLICZENIE OSTATECZNYCH WSPÓ£RZÊDNYCH------------------------------------------------------------------

    for (unsigned int i=0; i<nowelinie.size(); i++)
    {
        nowelinie[i][0]=nowelinie[i][0]-najmx+sredy-ppy;
        nowelinie[i][2]=nowelinie[i][2]-najmx+sredy-ppy;
        nowelinie[i][1]=nowelinie[i][1]-najmy+sredx+ppx;
        nowelinie[i][3]=nowelinie[i][3]-najmy+sredx+ppx;
    }

    for (unsigned int i=0; i<nowelinie.size(); i++)
    {
        if (linie[i][5]==1 && i==ktora)
        {   ClientDC.SetTextForeground(wxColor(255,0,0));
            ClientDC.SetPen(pen2);

            ClientDC.DrawLine(nowelinie[i][1],maxy-nowelinie[i][0],nowelinie[i][3],maxy-nowelinie[i][2]);
            ClientDC.DrawCircle(nowelinie[i][1],maxy-nowelinie[i][0],3);
            ClientDC.DrawText("1",nowelinie[i][1]+2,maxy-nowelinie[i][0]-2);

            ClientDC.SetPen(pen1);
            ClientDC.SetTextForeground(wxColor(0,0,0));

        }
        if (linie[i][5]==2 && i==ktora)
        {   ClientDC.SetTextForeground(wxColor(255,0,0));
            ClientDC.SetPen(pen2);

            ClientDC.DrawLine(nowelinie[i][1],maxy-nowelinie[i][0],nowelinie[i][3],maxy-nowelinie[i][2]);
            ClientDC.DrawCircle(nowelinie[i][3],maxy-nowelinie[i][2],3);
            ClientDC.DrawText("2",nowelinie[i][3]+2,maxy-nowelinie[i][2]-2);

            ClientDC.SetPen(pen1);
            ClientDC.SetTextForeground(wxColor(0,0,0));

        }

        else if (linie[i][5]==3 && i==ktora)
        {   ClientDC.SetTextForeground(wxColor(0,0,255));
            ClientDC.SetPen(pen3);

            ClientDC.DrawLine(nowelinie[i][1],maxy-nowelinie[i][0],nowelinie[i][3],maxy-nowelinie[i][2]);
            ClientDC.DrawCircle(nowelinie[i][1],maxy-nowelinie[i][0],3);
            ClientDC.DrawCircle(nowelinie[i][3],maxy-nowelinie[i][2],3);
            ClientDC.DrawText("1",nowelinie[i][1]+2,maxy-nowelinie[i][0]-2);
            ClientDC.DrawText("2",nowelinie[i][3]+2,maxy-nowelinie[i][2]-2);

            ClientDC.SetPen(pen1);
            ClientDC.SetTextForeground(wxColor(0,0,0));

        }
        else
            ClientDC.DrawLine(nowelinie[i][1],maxy-nowelinie[i][0],nowelinie[i][3],maxy-nowelinie[i][2]);

    }





}

//usuniêcie linii podwójnych i o d³ugoœci 0
void SprawdzenieTopo::OnToolBarItem1Clicked(wxCommandEvent& event)
{
    rd=false;
    if (prd==false)
    {
    ppx=ppy=skalaglob=0;
    skalaglob=1000000;
    }


    int k=0, licz;  //lp, lz;
    //fstream plik, proj; //deklaracje zmiennych
    //string projekt;

    //usuniêcie linii o d³ugoœci 0
     for (unsigned int j=0; j<linietopo.size(); j++)
    {
        if (linietopo[k][4]==0)
        {
            linietopo.erase(linietopo.begin()+k);
            j++;
            k--;
        }
        k++;
    }

    //usuniêcie linii podwójnych
    licz=1;
       while (licz!=0)
    {
        licz=k=0;
        for (unsigned int j=0; j<linietopo.size(); j++)
            for (unsigned int i=0; i<linietopo.size(); i++)
            {

                if (linietopo[j][4]==linietopo[i][4] && i!=j)
                {
                    if (linietopo[j][0]==linietopo[i][0] && linietopo[j][1]==linietopo[i][1] && linietopo[j][2]==linietopo[i][2] && linietopo[j][3]==linietopo[i][3])
                    {
                        linietopo[i][0]=0;
                        linietopo[i][1]=0;
                        linietopo[i][2]=0;
                        linietopo[i][3]=0;
                        licz++;
                    }
                    if (linietopo[j][0]==linietopo[i][2] && linietopo[j][1]==linietopo[i][3] && linietopo[j][2]==linietopo[i][0] && linietopo[j][3]==linietopo[i][1])
                    {
                        linietopo[i][0]=0;
                        linietopo[i][1]=0;
                        linietopo[i][2]=0;
                        linietopo[i][3]=0;
                        licz++;
                    }
                }
            }
        //if (licz!=0)
            for (unsigned int j=0; j<linietopo.size(); j++)
            {
                if (linietopo[k][0]==0 && linietopo[k][1]==0 && linietopo[k][2]==0 && linietopo[k][3]==0)
                {
                    linietopo.erase(linietopo.begin()+k);
                    j++;
                    k--;
                }
                k++;
            }
    }

MessageDialog1->ShowModal();


     if (ToolBarItem4->IsToggled() && wiszace(linietopo)!=0)
 {
     rysowanietopo(linietopo, ktora[ktorai]);
 }
        else
{
    rysowanie(linietopo);
}


}

//wêz³y wisz¹ce
void SprawdzenieTopo::OnToolBarItem2Clicked(wxCommandEvent& event)
{
   rd=false;
    if (prd==false)
    {
    ppx=ppy=skalaglob=0;
    skalaglob=1000000;
    }

    if (wiszace(linietopo)==0)
    {
        MessageDialog2->ShowModal();
    }
    else
    {
        MessageDialog3->ShowModal();
    }

     if (ToolBarItem4->IsToggled() && wiszace(linietopo)!=0)
 {
     rysowanietopo(linietopo, ktora[ktorai]);
 }
        else
{
    rysowanie(linietopo);
}


}

//linie przecinaj¹ce siê
void SprawdzenieTopo::OnToolBarItem3Clicked(wxCommandEvent& event)
{
    rd=false;
    if (prd==false)
    {
    ppx=ppy=skalaglob=0;
    skalaglob=1000000;
    }

    int xp,yp;

    wektor.resize(1); //okreslenie wymiarów tabeli ze wspó³rzêdnymi linii
    for(unsigned int i=0; i<wektor.size(); i++)
        wektor[i].resize(7);
    wektor.pop_back();

for (unsigned int i=0; i<linietopo.size(); i++) //wybór linii do sprawdzenia
    {
        for (unsigned int j=0; j<linietopo.size(); j++) //wybór linii do porównania
        {
            if (i!=j)
            {
            if (przecinanie(linietopo[i][0], linietopo[i][1], linietopo[i][2], linietopo[i][3], linietopo[j][0], linietopo[j][1], linietopo[j][2], linietopo[j][3]))
            {
            wektor.clear();
            przeciecie(linietopo[i],linietopo[j],xp,yp);
            wektor.push_back(linietopo[i]);
            wektor.push_back(linietopo[i]);
            wektor.push_back(linietopo[j]);
            wektor.push_back(linietopo[j]);

            wektor[0][0]=xp;
            wektor[0][1]=yp;
            wektor[1][2]=xp;
            wektor[1][3]=yp;
            wektor[2][0]=xp;
            wektor[2][1]=yp;
            wektor[3][2]=xp;
            wektor[3][3]=yp;

            if (i<j)
            {
            linietopo.erase(linietopo.begin()+j);
            linietopo.erase(linietopo.begin()+i);
            } else
            {
            linietopo.erase(linietopo.begin()+i);
            linietopo.erase(linietopo.begin()+j);
            }
            linietopo.push_back(wektor[0]);
            linietopo.push_back(wektor[1]);
            linietopo.push_back(wektor[2]);
            linietopo.push_back(wektor[3]);
            wektor.clear();
            i=j=0;
            }
            }
        }
    }

plik.close();

MessageDialog4->ShowModal();


     if (ToolBarItem4->IsToggled() && wiszace(linietopo)!=0)
 {
     rysowanietopo(linietopo, ktora[ktorai]);
 }
        else
{
    rysowanie(linietopo);
}


}


void SprawdzenieTopo::OnPanel1RightDown(wxMouseEvent& event)
{
    rd=true;
    if (!prd)
    {
    prd=true;
    ppx=ppy=0;
    }


        pxk=event.GetX();
        pyk=event.GetY();

}

void SprawdzenieTopo::OnPanel1RightUp(wxMouseEvent& event)
{
    rd=false;
    //ppx=ppy=0;

}

void SprawdzenieTopo::OnPanel1MouseMove(wxMouseEvent& event)
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

void SprawdzenieTopo::OnPanel1MouseWheel(wxMouseEvent& event)
{
    if (event.GetWheelRotation()>0)
    {
        skalaglob=skalaglob*1.3;
    }
    else
    {
      skalaglob=skalaglob*0.7;
    }

     if (ToolBarItem4->IsToggled())
 {
     rysowanietopo(linietopo, ktora[ktorai]);
 }
        else
{
    rysowanie(linietopo);
}

}

void SprawdzenieTopo::OnToolBarItem4Clicked(wxCommandEvent& event)
{
    if (ToolBarItem4->IsToggled() && wiszace(linietopo)!=0)
    {
    ktora.clear();
    ktorai=0;
        for(unsigned int i=0; i<linietopo.size(); i++)
           if (linietopo[i][5]==1 || linietopo[i][5]==2 || linietopo[i][5]==3)
           {
               ktora.push_back(i);
           }
    }

     if (ToolBarItem4->IsToggled() && wiszace(linietopo)!=0)
 {
     rysowanietopo(linietopo, ktora[ktorai]);
 }
        else
{
    rysowanie(linietopo);
}

}

//poprzedni b³¹d
void SprawdzenieTopo::OnToolBarItem10Clicked(wxCommandEvent& event)
{
    if (ktorai>0 && ToolBarItem4->IsToggled() && wiszace(linietopo)!=0)
    {
        ktorai--;
        rysowanietopo(linietopo, ktora[ktorai]);
    }
}

//kolejny b³¹d
void SprawdzenieTopo::OnToolBarItem11Clicked(wxCommandEvent& event)
{
    if (ktorai<ktora.size()-1 && ToolBarItem4->IsToggled() && wiszace(linietopo)!=0)
    {
        ktorai++;
        rysowanietopo(linietopo, ktora[ktorai]);
    }
}

//usuñ
void SprawdzenieTopo::OnToolBarItem5Clicked(wxCommandEvent& event)
{
    if (ToolBarItem4->IsToggled() && wiszace(linietopo)!=0)
    {
        linietopo.erase(linietopo.begin()+ktora[ktorai]);
    }
    if (wiszace(linietopo)!=0)
    {
    ktora.clear();
    ktorai=0;
        for(unsigned int i=0; i<linietopo.size(); i++)
           if (linietopo[i][5]==1 || linietopo[i][5]==2 || linietopo[i][5]==3)
           {
               ktora.push_back(i);
           }
    rysowanietopo(linietopo, ktora[ktorai]);
    }
    else
    {
        rysowanie(linietopo);
    }
}

//1 do wêz³a
void SprawdzenieTopo::OnToolBarItem6Clicked(wxCommandEvent& event)
{
if (linietopo[ktora[ktorai]][5]==1 || linietopo[ktora[ktorai]][5]==3)
    if (ToolBarItem4->IsToggled() && wiszace(linietopo)!=0)
    {
        int cos, odl, odlt;
        wyborpkt(linietopo, punkty);

        if (odleglosc(linietopo[ktora[ktorai]][0],linietopo[ktora[ktorai]][1],punkty[0][0],punkty[0][1])!=0)
        {
            cos=0;
            odl=odleglosc(linietopo[ktora[ktorai]][0],linietopo[ktora[ktorai]][1],punkty[0][0],punkty[0][1]);
        }
        else
        {
            cos=1;
            odl=odleglosc(linietopo[ktora[ktorai]][0],linietopo[ktora[ktorai]][1],punkty[1][0],punkty[1][1]);
        }
        for (int i=1; i<punkty.size(); i++)
        {
            odlt=odleglosc(linietopo[ktora[ktorai]][0],linietopo[ktora[ktorai]][1],punkty[i][0],punkty[i][1]);
            if (odlt<odl && odlt!=0)
            {
                odl=odlt;
                cos=i;
            }
        }
        linietopo[ktora[ktorai]][0]=punkty[cos][0];
        linietopo[ktora[ktorai]][1]=punkty[cos][1];
    }
    if (wiszace(linietopo)!=0)
    {
    ktora.clear();
    ktorai=0;
        for(unsigned int i=0; i<linietopo.size(); i++)
           if (linietopo[i][5]==1 || linietopo[i][5]==2 || linietopo[i][5]==3)
           {
               ktora.push_back(i);
           }
    rysowanietopo(linietopo, ktora[ktorai]);
    }
    else
    {
        rysowanie(linietopo);
    }
}

//2 do wêz³a
void SprawdzenieTopo::OnToolBarItem8Clicked(wxCommandEvent& event)
{
    if (linietopo[ktora[ktorai]][5]==2 || linietopo[ktora[ktorai]][5]==3)
       if (ToolBarItem4->IsToggled() && wiszace(linietopo)!=0)
    {
        int cos, odl, odlt;
        wyborpkt(linietopo, punkty);

        if (odleglosc(linietopo[ktora[ktorai]][2],linietopo[ktora[ktorai]][3],punkty[0][0],punkty[0][1])!=0)
        {
            cos=0;
            odl=odleglosc(linietopo[ktora[ktorai]][2],linietopo[ktora[ktorai]][3],punkty[0][0],punkty[0][1]);
        }
        else
        {
            cos=1;
            odl=odleglosc(linietopo[ktora[ktorai]][2],linietopo[ktora[ktorai]][3],punkty[1][0],punkty[1][1]);
        }
        for (unsigned int i=1; i<punkty.size(); i++)
        {
            odlt=odleglosc(linietopo[ktora[ktorai]][2],linietopo[ktora[ktorai]][3],punkty[i][0],punkty[i][1]);
            if (odlt<odl && odlt!=0)
            {
                odl=odlt;
                cos=i;
            }
        }
        linietopo[ktora[ktorai]][2]=punkty[cos][0];
        linietopo[ktora[ktorai]][3]=punkty[cos][1];
    }

    if (wiszace(linietopo)!=0)
    {
    ktora.clear();
    ktorai=0;
        for(unsigned int i=0; i<linietopo.size(); i++)
           if (linietopo[i][5]==1 || linietopo[i][5]==2 || linietopo[i][5]==3)
           {
               ktora.push_back(i);
           }
    rysowanietopo(linietopo, ktora[ktorai]);
    }
    else
    {
        rysowanie(linietopo);
    }
}

//1 do linii
void SprawdzenieTopo::OnToolBarItem7Clicked(wxCommandEvent& event)
{
     if (ToolBarItem4->IsToggled() && wiszace(linietopo)!=0)
    {

    if (linietopo[ktora[ktorai]][5]==1 || linietopo[ktora[ktorai]][5]==3)

    {

    int xk,yk,azym, odl,odl2,stometrow, ktorei,xprz,yprz, war, war2;
        stometrow=100000; war=0;
        double azymrad;
        vector<int> linia;
        linia.resize(4);

            azym=azymut(linietopo[ktora[ktorai]][2],linietopo[ktora[ktorai]][3],linietopo[ktora[ktorai]][0],linietopo[ktora[ktorai]][1]);
            azymrad=(azym/10000)*(M_PI/200);
            odl=odleglosc(linietopo[ktora[ktorai]][0],linietopo[ktora[ktorai]][1],linietopo[ktora[ktorai]][2],linietopo[ktora[ktorai]][3]);

        while (war!=1) //petla wyszukujaca linie z ktora sie przecina
        {
    odl=odl+stometrow;
    xk=linietopo[ktora[ktorai]][2]+(cos(azymrad)*odl);
    yk=linietopo[ktora[ktorai]][3]+(sin(azymrad)*odl);
    linia[0]=linietopo[ktora[ktorai]][2]; //linia, zeby przekazac do funkcji
    linia[1]=linietopo[ktora[ktorai]][3];
    linia[2]=xk;
    linia[3]=yk;

    for (int i=0;i<linietopo.size();i++) //funkcia liczaca przeciecia
    {
         war2=przecinanie(linia[0],linia[1],linia[2],linia[3],linietopo[i][0],linietopo[i][1],linietopo[i][2],linietopo[i][3]);
         if (war2==1)
         {
             war=1;
             przeciecie(linia,linietopo[i],xprz,yprz);
             if (i==0)
             {
                 odl2=odleglosc(xprz,yprz,linia[0],linia[1]);
                 ktorei=i;
             }else
             {
                 if (odl2>odleglosc(xprz,yprz,linia[0],linia[1]))
                 {
                     odl2=odleglosc(xprz,yprz,linia[0],linia[1]);
                     ktorei=i;
                 }
             }
         }
    } //mamy indeks linii, z ktora sie przecina

    } //mamy indeks :D: D:D D :D :D:D :DD:  D:

    //konczymy czensc

      przeciecie(linia, linietopo[ktorei], xprz, yprz);
    linietopo.push_back(linietopo[ktorei]);
    linietopo.push_back(linietopo[ktorei]);
    linietopo.push_back(linietopo[ktora[ktorai]]);

            linietopo[linietopo.size()-2][0]=xprz;
            linietopo[linietopo.size()-2][1]=yprz;
            linietopo[linietopo.size()-3][2]=xprz;
            linietopo[linietopo.size()-3][3]=yprz;

            linietopo[linietopo.size()-1][0]=xprz;
            linietopo[linietopo.size()-1][1]=yprz;

            if (ktorei<ktora[ktorai])
            {
            linietopo.erase(linietopo.begin()+ktora[ktorai]);
            linietopo.erase(linietopo.begin()+ktorei);
            } else
            {
            linietopo.erase(linietopo.begin()+ktorei);
            linietopo.erase(linietopo.begin()+ktora[ktorai]);
            }
    }

    if (wiszace(linietopo)!=0)
    {
    ktora.clear();
    ktorai=0;
        for(unsigned int i=0; i<linietopo.size(); i++)
           if (linietopo[i][5]==1 || linietopo[i][5]==2 || linietopo[i][5]==3)
           {
               ktora.push_back(i);
           }
    rysowanietopo(linietopo, ktora[ktorai]);
    }
    else
    {
        rysowanie(linietopo);
    }

    }

}

//2 do linii
void SprawdzenieTopo::OnToolBarItem9Clicked(wxCommandEvent& event)
{
    if (ToolBarItem4->IsToggled() && wiszace(linietopo)!=0)
    {

    if (linietopo[ktora[ktorai]][5]==2 || linietopo[ktora[ktorai]][5]==3)
    {

    int xk,yk,azym, odl,odl2,stometrow, ktorei,xprz,yprz, war, war2;
        stometrow=100000; war=0;
        double azymrad;
        vector<int> linia;
        linia.resize(4);

            azym=azymut(linietopo[ktora[ktorai]][0],linietopo[ktora[ktorai]][1],linietopo[ktora[ktorai]][2],linietopo[ktora[ktorai]][3]);
            azymrad=(azym/10000)*(M_PI/200);
            odl=odleglosc(linietopo[ktora[ktorai]][0],linietopo[ktora[ktorai]][1],linietopo[ktora[ktorai]][2],linietopo[ktora[ktorai]][3]);

        while (war!=1) //petla wyszukujaca linie z ktora sie przecina
        {
    odl=odl+stometrow;
    xk=linietopo[ktora[ktorai]][0]+(cos(azymrad)*odl);
    yk=linietopo[ktora[ktorai]][1]+(sin(azymrad)*odl);
    linia[2]=linietopo[ktora[ktorai]][2]; //linia, zeby przekazac do funkcji
    linia[3]=linietopo[ktora[ktorai]][3];
    linia[0]=xk;
    linia[1]=yk;

    for (int i=0;i<linietopo.size();i++) //funkcia liczaca przeciecia
    {
         war2=przecinanie(linia[0],linia[1],linia[2],linia[3],linietopo[i][0],linietopo[i][1],linietopo[i][2],linietopo[i][3]);
         if (war2==1)
         {
             war=1;
             przeciecie(linia,linietopo[i],xprz,yprz);
             if (i==0)
             {
                 odl2=odleglosc(xprz,yprz,linia[2],linia[3]);
                 ktorei=i;
             }else
             {
                 if (odl2>odleglosc(xprz,yprz,linia[2],linia[3]))
                 {
                     odl2=odleglosc(xprz,yprz,linia[2],linia[3]);
                     ktorei=i;
                 }
             }
         }
    } //mamy indeks linii, z ktora sie przecina

    } //mamy indeks :D: D:D D :D :D:D :DD:  D:

    //konczymy czensc
if (przecinanie(linietopo[ktorei][0],linietopo[ktorei][1],linietopo[ktorei][2],linietopo[ktorei][3],linia[0],linia[1], linia[2],linia[3])==1)

      przeciecie(linietopo[ktorei], linia, xprz, yprz);
    linietopo.push_back(linietopo[ktorei]);
    linietopo.push_back(linietopo[ktorei]);
    linietopo.push_back(linietopo[ktora[ktorai]]);

            linietopo[linietopo.size()-2][0]=xprz;
            linietopo[linietopo.size()-2][1]=yprz;
            linietopo[linietopo.size()-3][2]=xprz;
            linietopo[linietopo.size()-3][3]=yprz;

            linietopo[linietopo.size()-1][2]=xprz;
            linietopo[linietopo.size()-1][3]=yprz;

            if (ktorei<ktora[ktorai])
            {
            linietopo.erase(linietopo.begin()+ktora[ktorai]);
            linietopo.erase(linietopo.begin()+ktorei);
            } else
            {
            linietopo.erase(linietopo.begin()+ktorei);
            linietopo.erase(linietopo.begin()+ktora[ktorai]);
            }
    }

    if (wiszace(linietopo)!=0)
    {
    ktora.clear();
    ktorai=0;
        for(unsigned int i=0; i<linietopo.size(); i++)
           if (linietopo[i][5]==1 || linietopo[i][5]==2 || linietopo[i][5]==3)
           {
               ktora.push_back(i);
           }
    rysowanietopo(linietopo, ktora[ktorai]);
    }
    else
    {
        rysowanie(linietopo);
    }


    }

}

void SprawdzenieTopo::OnToolBarItem12Clicked(wxCommandEvent& event)
{
    proj.open("konfig/k.konf", ios::in); //pozyskanie œcie¿ki do projektu
        getline(proj, projekt);
proj.close();


plik.open(""+projekt+"/g.gpr", ios::out);  //otwarcie pliku i wczytanie danych

    for (unsigned int i=0; i<linietopo.size(); i++)
    {
        plik<<linietopo[i][0]<<" "<<linietopo[i][1]<<" "<<linietopo[i][2]<<" "<<linietopo[i][3]<<endl;
    }

}
