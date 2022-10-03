#include "modez.h"
#include <wx/grid.h>

//(*InternalHeaders(modez)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(modez)
const long modez::ID_BUTTON1 = wxNewId();
const long modez::ID_GRID3 = wxNewId();
const long modez::ID_PANEL2 = wxNewId();
const long modez::ID_GRID2 = wxNewId();
const long modez::ID_PANEL3 = wxNewId();
const long modez::ID_GRID1 = wxNewId();
const long modez::ID_PANEL4 = wxNewId();
const long modez::ID_NOTEBOOK1 = wxNewId();
const long modez::ID_PANEL5 = wxNewId();
const long modez::ID_PANEL6 = wxNewId();
const long modez::ID_NOTEBOOK2 = wxNewId();
const long modez::ID_RADIOBUTTON1 = wxNewId();
const long modez::ID_RADIOBUTTON2 = wxNewId();
const long modez::ID_RADIOBUTTON3 = wxNewId();
const long modez::ID_STATICTEXT1 = wxNewId();
const long modez::ID_STATICTEXT2 = wxNewId();
const long modez::ID_RADIOBUTTON4 = wxNewId();
const long modez::ID_RADIOBUTTON5 = wxNewId();
const long modez::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(modez,wxFrame)
	//(*EventTable(modez)
	//*)
END_EVENT_TABLE()

modez::modez(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(modez)
	Create(parent, wxID_ANY, _("Eksport danych w formacie modez"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE|wxFRAME_NO_TASKBAR|wxFRAME_FLOAT_ON_PARENT, _T("wxID_ANY"));
	SetClientSize(wxSize(1169,527));
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(1160,527), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("Eksportuj"), wxPoint(8,232), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Notebook2 = new wxNotebook(Panel1, ID_NOTEBOOK2, wxPoint(112,0), wxSize(1056,528), wxNB_LEFT, _T("ID_NOTEBOOK2"));
	Panel5 = new wxPanel(Notebook2, ID_PANEL5, wxDefaultPosition, wxSize(891,403), wxTAB_TRAVERSAL, _T("ID_PANEL5"));
	Notebook1 = new wxNotebook(Panel5, ID_NOTEBOOK1, wxPoint(8,8), wxSize(1000,496), wxNO_BORDER, _T("ID_NOTEBOOK1"));
	Panel2 = new wxPanel(Notebook1, ID_PANEL2, wxDefaultPosition, wxSize(590,403), wxNO_BORDER|wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	Grid3 = new wxGrid(Panel2, ID_GRID3, wxPoint(8,8), wxSize(752,456), 0, _T("ID_GRID3"));
	Grid3->CreateGrid(1,6);
	Grid3->EnableEditing(true);
	Grid3->EnableGridLines(true);
	Grid3->SetDefaultColSize(110, true);
	Grid3->SetColLabelValue(0, _("Id_zbioru"));
	Grid3->SetColLabelValue(1, _("Nazwa"));
	Grid3->SetColLabelValue(2, _("Komentarz"));
	Grid3->SetColLabelValue(3, _("Data_tworzenia"));
	Grid3->SetColLabelValue(4, _("Autor"));
	Grid3->SetColLabelValue(5, _("Ile_parcel"));
	Grid3->SetDefaultCellFont( Grid3->GetFont() );
	Grid3->SetDefaultCellTextColour( Grid3->GetForegroundColour() );
	Panel3 = new wxPanel(Notebook1, ID_PANEL3, wxDefaultPosition, wxSize(956,451), wxTAB_TRAVERSAL, _T("ID_PANEL3"));
	Grid2 = new wxGrid(Panel3, ID_GRID2, wxPoint(0,0), wxSize(992,464), 0, _T("ID_GRID2"));
	Grid2->CreateGrid(1,32);
	Grid2->EnableEditing(true);
	Grid2->EnableGridLines(true);
	Grid2->SetRowLabelSize(30);
	Grid2->SetDefaultColSize(120, true);
	Grid2->SetColLabelValue(0, _("Nr_Parceli"));
	Grid2->SetColLabelValue(1, _("Nr_Zadania"));
	Grid2->SetColLabelValue(2, _("Nazwa"));
	Grid2->SetColLabelValue(3, _("Komentarz"));
	Grid2->SetColLabelValue(4, _("Sr_Glebokosc_Eksplo"));
	Grid2->SetColLabelValue(5, _("Wsp_A_U"));
	Grid2->SetColLabelValue(6, _("Wsp_A_L"));
	Grid2->SetColLabelValue(7, _("Data_Start_U"));
	Grid2->SetColLabelValue(8, _("Data_End_L"));
	Grid2->SetColLabelValue(9, _("Data_End_U"));
	Grid2->SetColLabelValue(10, _("Wsp_Beta1"));
	Grid2->SetColLabelValue(11, _("Wsp_Beta2"));
	Grid2->SetColLabelValue(12, _("Kier_Beta1"));
	Grid2->SetColLabelValue(13, _("Promien_Rs"));
	Grid2->SetColLabelValue(14, _("Ksi_U"));
	Grid2->SetColLabelValue(15, _("Ksi_L"));
	Grid2->SetColLabelValue(16, _("ile_wierzcholkow"));
	Grid2->SetColLabelValue(17, _("Czy_Pole_Eksplo"));
	Grid2->SetColLabelValue(18, _("Sp_Interpol_G"));
	Grid2->SetColLabelValue(19, _("Sp_Interpol_Z"));
	Grid2->SetColLabelValue(20, _("Sp_Interpol_H"));
	Grid2->SetColLabelValue(21, _("FrontStart1u"));
	Grid2->SetColLabelValue(22, _("FrontStart2u"));
	Grid2->SetColLabelValue(23, _("FrontKoniec1u"));
	Grid2->SetColLabelValue(24, _("FrontKoniec2u"));
	Grid2->SetColLabelValue(25, _("Data_Start_L"));
	Grid2->SetColLabelValue(26, _("FrontStart1l"));
	Grid2->SetColLabelValue(27, _("FrontStart2l"));
	Grid2->SetColLabelValue(28, _("FrontKoniec1l"));
	Grid2->SetColLabelValue(29, _("FrontKoniec2l"));
	Grid2->SetColLabelValue(30, _("Azymut_Upadu"));
	Grid2->SetColLabelValue(31, _("Kat_Upadu"));
	Grid2->SetDefaultCellFont( Grid2->GetFont() );
	Grid2->SetDefaultCellTextColour( Grid2->GetForegroundColour() );
	Panel4 = new wxPanel(Notebook1, ID_PANEL4, wxDefaultPosition, wxSize(857,457), wxTAB_TRAVERSAL, _T("ID_PANEL4"));
	Grid1 = new wxGrid(Panel4, ID_GRID1, wxPoint(0,0), wxSize(752,464), 0, _T("ID_GRID1"));
	Grid1->CreateGrid(1,7);
	Grid1->EnableEditing(true);
	Grid1->EnableGridLines(true);
	Grid1->SetRowLabelSize(40);
	Grid1->SetDefaultColSize(100, true);
	Grid1->SetColLabelValue(0, _("Nr_Parceli"));
	Grid1->SetColLabelValue(1, _("Nr_Punktu"));
	Grid1->SetColLabelValue(2, _("X"));
	Grid1->SetColLabelValue(3, _("Y"));
	Grid1->SetColLabelValue(4, _("Z"));
	Grid1->SetColLabelValue(5, _("g"));
	Grid1->SetColLabelValue(6, _("Zp"));
	Grid1->SetDefaultCellFont( Grid1->GetFont() );
	Grid1->SetDefaultCellTextColour( Grid1->GetForegroundColour() );
	Notebook1->AddPage(Panel2, _("Grupy"), false);
	Notebook1->AddPage(Panel3, _("Zbiór parcel"), false);
	Notebook1->AddPage(Panel4, _("Zbiór wierzcho³ków"), false);
	Panel6 = new wxPanel(Notebook2, ID_PANEL6, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL6"));
	Notebook2->AddPage(Panel5, _("modez"), false);
	Notebook2->AddPage(Panel6, _("EDN"), false);
	RadioButton1 = new wxRadioButton(Panel1, ID_RADIOBUTTON1, _("Modez"), wxPoint(16,40), wxDefaultSize, wxRB_GROUP, wxDefaultValidator, _T("ID_RADIOBUTTON1"));
	RadioButton1->SetValue(true);
	RadioButton2 = new wxRadioButton(Panel1, ID_RADIOBUTTON2, _("EDN"), wxPoint(16,64), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON2"));
	RadioButton3 = new wxRadioButton(Panel1, ID_RADIOBUTTON3, _("Spacja"), wxPoint(16,128), wxDefaultSize, wxRB_GROUP, wxDefaultValidator, _T("ID_RADIOBUTTON3"));
	RadioButton3->SetValue(true);
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Format"), wxPoint(16,16), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Separator"), wxPoint(16,104), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	RadioButton4 = new wxRadioButton(Panel1, ID_RADIOBUTTON4, _("Tabulator"), wxPoint(16,152), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON4"));
	RadioButton5 = new wxRadioButton(Panel1, ID_RADIOBUTTON5, _("Œrednik"), wxPoint(16,176), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON5"));
	DirDialog1 = new wxDirDialog(this, _("Wybierz folder do zapisania plików"), wxEmptyString, wxDD_DEFAULT_STYLE|wxDD_DIR_MUST_EXIST, wxDefaultPosition, wxDefaultSize, _T("wxDirDialog"));

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&modez::OnButton1Click);
	Connect(ID_RADIOBUTTON1,wxEVT_COMMAND_RADIOBUTTON_SELECTED,(wxObjectEventFunction)&modez::OnRadioButton1Select);
	Connect(ID_RADIOBUTTON2,wxEVT_COMMAND_RADIOBUTTON_SELECTED,(wxObjectEventFunction)&modez::OnRadioButton2Select);
	//*)
	wstep();
	wpisaniepar();
	wpisaniewierzch();
	wpisanielist();
}
modez::~modez()
{
	//(*Destroy(modez)
	//*)
}

void modez::wstep()
{
	ktorapar=0; //wynranie "zerowej" parceli

	//czyszczenie i okreœlenie wymiarów wektorów
    parceletab.clear();
    opisstr.clear();

    vector<string> opis;
    vector<vector<int> > linie;

	linie.resize(1);
    for(unsigned int i=0; i<linie.size(); i++)
    linie[i].resize(7);
    linie.pop_back();

    vector<int> linia;
    linia.resize(7);

	opisstr.resize(1);
    for(unsigned int i=0; i<opisstr.size(); i++)
    opisstr[i].resize(32);
    opisstr.pop_back();

    opis.resize(32);

	proj.open("konfig/k.konf", ios::in); //pozyskanie œcie¿ki do projektu
        getline(proj, projekt);
    proj.close();

    plik.open(""+projekt+"/p.par", ios::in);  //otwarcie pliku i wczytanie parcel

    int ile, ilep; //deklaracje zmiennych
    wxString napis;
    double liczba2;
	string napis2;

    plik>>ile; //wczytanie iloœci parcel

    for (int i=0;i<ile;i++) //pêtla wczytuj¹ca parcele
    {
        plik>>opis[0];
        plik>>opis[1];
        plik>>opis[2];
        plik>>opis[3];
        plik>>opis[4];
        plik>>opis[5];
        plik>>opis[6];
        plik>>opis[7];
        plik>>opis[8];
        plik>>opis[9];
        plik>>opis[10];
        plik>>opis[11];
        plik>>opis[12];
        plik>>opis[13];
        plik>>opis[14];
        plik>>opis[15];
        plik>>opis[16];
        plik>>opis[17];
        plik>>opis[18];
        plik>>opis[19];
        plik>>opis[20];
        plik>>opis[21];
        plik>>opis[22];
        plik>>opis[23];
        plik>>opis[24];
        plik>>opis[25];
        plik>>opis[26];
        plik>>opis[27];
        plik>>opis[28];
        plik>>opis[29];
        plik>>opis[30];
        plik>>opis[31];

            opisstr.push_back(opis);

        plik>>ilep; //wczytanie iloœci wierzcho³ków

        linie.clear();
        for (int j=0;j<ilep;j++)
        {
            plik>>linia[0];
            plik>>linia[1];
            plik>>linia[4];
            plik>>linia[5];
            plik>>linia[6];
            plik>>linia[2];
            plik>>linia[3];
            linie.push_back(linia);
        }
        parceletab.push_back(linie);
    }

    plik.close(); //zamkniêcie pliku

    ster.resize(6);

    stery.resize(1); //okreslenie wymiarów tabeli ze wspó³rzêdnymi linii
    for(unsigned int i=0; i<stery.size(); i++)
    stery[i].resize(6);
    stery.pop_back();


plik.open(""+projekt+"/s.str", ios::in);  //otwarcie pliku i wczytanie parcel

while (!plik.eof())
    {
    plik>>ster[0];
    if (!plik.fail())
    {
     plik>>ster[1];
     plik>>ster[2];
     plik>>ster[3];
     plik>>ster[4];
     plik>>ster[5];
     stery.push_back(ster);
    }
    }

plik.close();
}

void modez::wpisaniepar()
{
    Grid2->ClearGrid(); //wyczyszczenie tabeli
    if (Grid2->GetNumberRows()!=0)
    Grid2->DeleteRows(0, Grid2->GetNumberRows(),true);



    for (unsigned int i=0;i<opisstr.size();i++)
    {
         Grid2->InsertRows(i,1,true);
            for (unsigned int j=0;j<opisstr[i].size();j++)
            {
                 Grid2->SetCellValue(i,j,opisstr[i][j]);

            }
    }


}

void modez::wpisaniewierzch()
{
     wxString napis;
    wxDouble zmienna;

    Grid1->ClearGrid(); //wyczyszczenie tabeli
    if (Grid1->GetNumberRows()!=0)
    Grid1->DeleteRows(0, Grid1->GetNumberRows(),true);

int wiersze=0;

    for (unsigned int i=0;i<parceletab.size();i++)
    {
            for (unsigned int j=0;j<parceletab[i].size();j++)
            {   Grid1->InsertRows(wiersze,1,true);

                Grid1->SetCellValue(wiersze,0,opisstr[i][0]);

                zmienna=j+1;
                napis.Printf(wxT("%.0f"),zmienna);
                Grid1->SetCellValue(wiersze,1,napis);

                zmienna=parceletab[i][j][0];
                napis.Printf(wxT("%.3f"),zmienna/1000);
                Grid1->SetCellValue(wiersze,2,napis);

                zmienna=parceletab[i][j][1];
                napis.Printf(wxT("%.3f"),zmienna/1000);
                Grid1->SetCellValue(wiersze,3,napis);

                zmienna=parceletab[i][j][4];
                napis.Printf(wxT("%.2f"),zmienna/100);
                Grid1->SetCellValue(wiersze,4,napis);

                zmienna=parceletab[i][j][5];
                napis.Printf(wxT("%.2f"),zmienna/100);
                Grid1->SetCellValue(wiersze,5,napis);

                zmienna=parceletab[i][j][6];
                napis.Printf(wxT("%.2f"),zmienna/100);
                Grid1->SetCellValue(wiersze,6,napis);


            wiersze++;
            }

    }


}

void modez::wpisanielist()
{
 Grid3->ClearGrid(); //wyczyszczenie tabeli
    if (Grid3->GetNumberRows()!=0)
    Grid3->DeleteRows(0, Grid3->GetNumberRows(),true);

    for (unsigned int i=0;i<stery.size();i++)
    {
         Grid3->InsertRows(i,1,true);
            for (unsigned int j=0;j<stery[i].size();j++)
            {
                 Grid3->SetCellValue(i,j,stery[i][j]);

            }
    }
}

void modez::OnButton1Click(wxCommandEvent& event)
{
    string sciezka;
    char znak;
    wxString napis;
    wxDouble zmienna;

if (DirDialog1->ShowModal()==wxID_OK)
{
    sciezka=DirDialog1->GetPath();
}

if (RadioButton3->GetValue())
    znak=' ';

if (RadioButton4->GetValue())
    znak='\t';

if (RadioButton5->GetValue())
    znak=';';


if (RadioButton1->GetValue())//eksport w formacie modeza

{

     plik.open("t.temp", ios::out); //zapis do pliku celem tranformacji na znaki

    for (unsigned int i=0;i<opisstr.size();i++)
    {
        plik<<opisstr[i][4]<<" "<<opisstr[i][5]<<" "<<opisstr[i][6]<<" "<<opisstr[i][10]<<" "<<opisstr[i][11]<<" "<<opisstr[i][12]<<" "<<opisstr[i][13]<<" "<<opisstr[i][14]<<" "<<opisstr[i][15]<<" "<<opisstr[i][18]<<" "<<opisstr[i][19]<<" "<<opisstr[i][20]<<" "<<opisstr[i][30]<<" "<<opisstr[i][31]<<" "<<endl;
    }

    plik.close();

    fstream plikw;

    plik.open("t.temp", ios::in);
    plikw.open("t2.temp", ios::out);

    if (plik.good() && plikw.good())                       // sprawdzenie czy pliki otwarly sie prawidlowo
    {
        char c;                                             // definicja zmiennej c;

        while (plik.get(c))                                //get() wyjmuje ze strumienia 1 bajt i umieszcza go w zmiennej c, nastepnie dopoki nie wystapi
        {
            if (c == '.') c = ',';                          // koniec pliku bedzie nastepowala zamiana , na .

            plikw <<c;
        }
    }
    plik.close();
    plikw.close();

    plik.open("t2.temp", ios::in); //zapis do pliku celem tranformacji na znaki

    for (unsigned int i=0;i<opisstr.size();i++)
    {
        plik>>opisstr[i][4]>>opisstr[i][5]>>opisstr[i][6]>>opisstr[i][10]>>opisstr[i][11]>>opisstr[i][12]>>opisstr[i][13]>>opisstr[i][14]>>opisstr[i][15]>>opisstr[i][18]>>opisstr[i][19]>>opisstr[i][20]>>opisstr[i][30]>>opisstr[i][31];
    }

    plik.close();

//---ZBIÓR PARCEL--------------------------------------------------------------------
     plik.open(""+sciezka+"/Zbiorparcelzewn.txt", ios::out); //zbior parcel

    plik<<"Nr_Parceli"<<znak<<"Nr_Zadania"<<znak<<"Nazwa"<<znak<<"Komentarz"<<znak<<"Sr_Glebokosc_Eksplo"<<znak<<"Wsp_A_U"<<znak<<"Wsp_A_L"<<znak<<"Data_Start_U"<<znak<<"Data_End_L"<<znak<<"Data_End_U"<<znak<<"Wsp_Beta1"<<znak<<"Wsp_Beta2"<<znak<<"Kier_Beta1"<<znak<<"Promien_Rs"<<znak<<"Ksi_U"<<znak<<"Ksi_L"<<znak<<"ile_wierzcholkow"<<znak<<"Czy_Pole_Eksplo"<<znak<<"Sp_Interpol_G"<<znak<<"Sp_Interpol_Z"<<znak<<"Sp_Interpol_H"<<znak<<"FrontStart1u"<<znak<<"FrontStart2u"<<znak<<"FrontKoniec1u"<<znak<<"FrontKoniec2u"<<znak<<"Data_Start_L"<<znak<<"FrontStart1l"<<znak<<"FrontStart2l"<<znak<<"FrontKoniec1l"<<znak<<"FrontKoniec2l"<<znak<<"Azymut_Upadu"<<znak<<"Kat_Upadu"<<endl;

    for (unsigned int i=0;i<opisstr.size();i++)
    {
        for (unsigned int j=0;j<opisstr[i].size();j++)
        {
            plik<<opisstr[i][j]<<znak;
        }
        plik<<endl;
    }
     plik.close();



//---ZBIÓR WIERZCHO£KÓW--------------------------------------------------------------------
     plik.open("t.temp", ios::out); //zbior wierzcho³ków

    plik<<"Nr_Parceli"<<znak<<"Nr_Punktu"<<znak<<"X"<<znak<<"Y"<<znak<<"Z"<<znak<<"g"<<znak<<"Zp"<<endl;

    for (unsigned int i=0;i<parceletab.size();i++)
    {
            for (unsigned int j=0;j<parceletab[i].size();j++)
            {
                plik<<opisstr[i][0]<<znak;

                zmienna=j+1;
                napis.Printf(wxT("%.0f"),zmienna);
                plik<<napis<<znak;

                zmienna=parceletab[i][j][0];
                napis.Printf(wxT("%.3f"),zmienna/1000);
                plik<<napis<<znak;

                zmienna=parceletab[i][j][1];
                napis.Printf(wxT("%.3f"),zmienna/1000);
                plik<<napis<<znak;

                zmienna=parceletab[i][j][4];
                napis.Printf(wxT("%.2f"),zmienna/100);
                plik<<napis<<znak;

                zmienna=parceletab[i][j][5];
                napis.Printf(wxT("%.2f"),zmienna/100);
                plik<<napis<<znak;

                zmienna=parceletab[i][j][6];
                napis.Printf(wxT("%.2f"),zmienna/100);
                plik<<napis<<endl;
            }

    }
     plik.close();

     plikw.open(""+sciezka+"/Zbiorwierzchzewn.txt", ios::out);
    plik.open("t.temp", ios::in);

    if (plik.good() && plikw.good())                       // sprawdzenie czy pliki otwarly sie prawidlowo
    {
        char c;                                             // definicja zmiennej c;

        while (plik.get(c))                                //get() wyjmuje ze strumienia 1 bajt i umieszcza go w zmiennej c, nastepnie dopoki nie wystapi
        {
            if (c == '.') c = ',';                          // koniec pliku bedzie nastepowala zamiana , na .

            plikw <<c;
        }
    }
    plik.close();
    plikw.close();


//--ZBIÓR ZBIORÓW-----------------------------------------------
    plik.open("t.temp", ios::out); //zapis do pliku celem tranformacji na znaki

    plik<<"Id_zbioru"<<znak<<"Nazwa"<<znak<<"Komentarz"<<znak<<"Data_tworzenia"<<znak<<"Autor"<<znak<<"Ile_parcel"<<endl;

    for (unsigned int i=0;i<stery.size();i++)
    {
        plik<<stery[i][0]<<znak<<stery[i][1]<<znak<<stery[i][2]<<znak<<stery[i][3]<<znak<<stery[i][4]<<znak<<stery[i][5]<<endl;
    }

    plik.close();
    plik.open("t.temp", ios::in);
    plikw.open(""+sciezka+"/Ster_zbior.txt", ios::out); //zbior steruj¹cy

    if (plik.good() && plikw.good())                       // sprawdzenie czy pliki otwarly sie prawidlowo
    {
        char c;                                             // definicja zmiennej c;

        while (plik.get(c))                                //get() wyjmuje ze strumienia 1 bajt i umieszcza go w zmiennej c, nastepnie dopoki nie wystapi
        {
            if (c == '.') c = ',';                          // koniec pliku bedzie nastepowala zamiana , na .

            plikw <<c;
        }
    }
    plik.close();
    plikw.close();

}


}


void modez::OnRadioButton2Select(wxCommandEvent& event)
{
    RadioButton3->Enable(false);
    RadioButton4->Enable(false);
    RadioButton5->Enable(false);
}

void modez::OnRadioButton1Select(wxCommandEvent& event)
{
    RadioButton3->Enable(true);
    RadioButton4->Enable(true);
    RadioButton5->Enable(true);
}
