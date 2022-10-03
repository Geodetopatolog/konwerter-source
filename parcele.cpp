#include "parcele.h"

//(*InternalHeaders(parcele)
#include <wx/intl.h>
#include <wx/string.h>
//*)

using namespace std;

//(*IdInit(parcele)
const long parcele::ID_STATICBOX1 = wxNewId();
const long parcele::ID_STATICBOX2 = wxNewId();
const long parcele::ID_RADIOBUTTON1 = wxNewId();
const long parcele::ID_RADIOBUTTON2 = wxNewId();
const long parcele::ID_RADIOBUTTON3 = wxNewId();
const long parcele::ID_RADIOBUTTON4 = wxNewId();
const long parcele::ID_RADIOBUTTON5 = wxNewId();
const long parcele::ID_RADIOBUTTON6 = wxNewId();
const long parcele::ID_BUTTON1 = wxNewId();
const long parcele::ID_STATICBOX4 = wxNewId();
const long parcele::ID_STATICTEXT1 = wxNewId();
const long parcele::ID_TEXTCTRL1 = wxNewId();
const long parcele::ID_STATICTEXT2 = wxNewId();
const long parcele::ID_TEXTCTRL2 = wxNewId();
const long parcele::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(parcele,wxFrame)
	//(*EventTable(parcele)
	//*)
END_EVENT_TABLE()

parcele::parcele(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(parcele)
	Create(parent, id, _("Selekcja parcel i ich generalizacja"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE|wxFRAME_NO_TASKBAR|wxFRAME_FLOAT_ON_PARENT, _T("id"));
	SetClientSize(wxSize(509,249));
	Move(wxPoint(22,63));
	StaticBox1 = new wxStaticBox(this, ID_STATICBOX1, _("Typ selekcji"), wxPoint(8,8), wxSize(496,56), 0, _T("ID_STATICBOX1"));
	StaticBox2 = new wxStaticBox(this, ID_STATICBOX2, _("Napisy bêd¹ce baz¹ selekcji"), wxPoint(8,64), wxSize(248,144), 0, _T("ID_STATICBOX2"));
	RadioButton1 = new wxRadioButton(this, ID_RADIOBUTTON1, _("Na podstawie punktów wstawienia napisów"), wxPoint(24,32), wxDefaultSize, wxRB_GROUP, wxDefaultValidator, _T("ID_RADIOBUTTON1"));
	RadioButton1->SetValue(true);
	RadioButton2 = new wxRadioButton(this, ID_RADIOBUTTON2, _("Na podstawie linii"), wxPoint(352,32), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON2"));
	RadioButton3 = new wxRadioButton(this, ID_RADIOBUTTON3, _("Nazwy parceli"), wxPoint(16,88), wxDefaultSize, wxRB_GROUP, wxDefaultValidator, _T("ID_RADIOBUTTON3"));
	RadioButton3->SetValue(true);
	RadioButton4 = new wxRadioButton(this, ID_RADIOBUTTON4, _("Wysokoœci furt"), wxPoint(16,120), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON4"));
	RadioButton5 = new wxRadioButton(this, ID_RADIOBUTTON5, _("Postêp wydobycia"), wxPoint(16,152), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON5"));
	RadioButton6 = new wxRadioButton(this, ID_RADIOBUTTON6, _("Rzêdne wysokoœciowe"), wxPoint(16,184), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON6"));
	Button1 = new wxButton(this, ID_BUTTON1, _("Selekcja"), wxPoint(16,216), wxSize(232,28), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	StaticBox4 = new wxStaticBox(this, ID_STATICBOX4, _("Parametry generalizacji granic"), wxPoint(256,64), wxSize(248,144), 0, _T("ID_STATICBOX4"));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("K¹towy [grad]"), wxPoint(304,88), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("1"), wxPoint(416,88), wxSize(52,24), wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Liniowy [mm/m]"), wxPoint(304,120), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, _("1"), wxPoint(416,120), wxSize(52,24), wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	Button2 = new wxButton(this, ID_BUTTON2, _("Generalizacja"), wxPoint(264,216), wxSize(232,28), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	Button2->Disable();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&parcele::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&parcele::OnButton2Click);
	//*)

	linietopo.resize(1); //okreslenie wymiarów tabeli ze wspó³rzêdnymi linii
    for(unsigned int i=0; i<linietopo.size(); i++)
    linietopo[i].resize(7);
    linietopo.pop_back();

     vector<int> linia;
    linia.resize (7);


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

}


parcele::~parcele()
{
	//(*Destroy(parcele)
	//*)
}


void parcele::OnButton1Click(wxCommandEvent& event)
{
    parceletab.clear();
    int xp,yp,xk,yk,xprz,yprz, war,stometrow,ktorei,odl,azym,azym2,z; //deklaracje zmiennych

    vector<vector<int> > liniedobre, wybranelinie, granice, elemwyb;

    string napis;

    war=z=0;  //warunek sprawdzajacy, czy sie przecielo
    stometrow=100000;

    vector<int> linia;
    linia.resize(4);

    liniedobre.resize(linietopo.size()); //okreslenie wymiarów tabeli ze wspó³rzêdnymi linii
    for(unsigned int i=0; i<liniedobre.size(); i++)
    liniedobre[i].resize(8);

    wybranelinie.resize(1); //okreslenie wymiarów tabeli ze wspó³rzêdnymi linii
    for(unsigned int i=0; i<wybranelinie.size(); i++)
    wybranelinie[i].resize(8);

    granice.resize(1); //okreslenie wymiarów tabeli ze wspó³rzêdnymi linii
    for(unsigned int i=0; i<granice.size(); i++)
    granice[i].resize(8);
    granice.pop_back();


    elemwybnazw.clear();

    elemwyb.resize(1); //okreslenie wymiarów tabeli ze wspó³rzêdnymi napisów
    for(unsigned int i=0; i<elemwyb.size(); i++)
    elemwyb[i].resize(2);
    elemwyb.pop_back();

//----------SELEKCJA PO NAPISACH-----------------------------------------------------
if (RadioButton1->GetValue())
{
  //-----WCZYTANIE ODPOWIEDNICH NAPISÓW----------------------------------------------

  if (RadioButton3->GetValue()) //NAZWY
  {
    plik.open(""+projekt+"/n.naz", ios::in);  //otwarcie pliku i wczytanie danych
  }

  if (RadioButton4->GetValue()) //wysokoœci furt
  {
    plik.open(""+projekt+"/w.wfr", ios::in);
  }

  if (RadioButton5->GetValue())
  {
    plik.open(""+projekt+"/o.okr", ios::in);
  }

  if (RadioButton6->GetValue())
  {
    plik.open(""+projekt+"/k.kot", ios::in);
  }

    while (!plik.eof())
    {
    plik>>linia[0];
    if (!plik.fail())
        {
    plik>>linia[1];
    plik>>napis;

    elemwyb.push_back(linia);
    elemwybnazw.push_back(napis);
        }
    }
    plik.close();

//---PRZYPISANIE WARTOŒCI DO NOWEJ TABELI LINII--------------------------------------
    for (unsigned int i=0;i<linietopo.size();i++)
{
    liniedobre[i][0]=linietopo[i][0];
    liniedobre[i][1]=linietopo[i][1];
    liniedobre[i][2]=linietopo[i][2];
    liniedobre[i][3]=linietopo[i][3];
    liniedobre[i][4]=azymut(linietopo[i][0],linietopo[i][1],linietopo[i][2],linietopo[i][3]);
}

 //---------W£AŒCIWIE SELEKCJONOWANIE PARCEL------------------------------------------
for (unsigned int k=0;k<elemwyb.size();k++)
 {  skok:
     war=0;
    int max20=0;
//---------WYBRANIE PIERWSZEJ LINII DANEJ PARCELI-------------------------------------
    while (war!=1) //petla wyszukujaca linie z ktora sie przecina
    { max20++;
    xp=elemwyb[k][0]; //okreslenie odcinka do przeciecia
    yp=elemwyb[k][1];
    xk=elemwyb[k][0]-stometrow;
    yk=elemwyb[k][1];
    stometrow=stometrow+100000;
    linia[0]=xp; //linia, zeby przekazac do funkcji
    linia[1]=yp;
    linia[2]=xk;
    linia[3]=yk;
    int licz=0;
    for (unsigned int i=0;i<liniedobre.size();i++) //funkcia liczaca przeciecia
    {
         //war2=przecinanie(xp,yp,xk,yk,liniedobre[i][0],liniedobre[i][1],liniedobre[i][2],liniedobre[i][3]);
         if (przecinanie(xp,yp,xk,yk,liniedobre[i][0],liniedobre[i][1],liniedobre[i][2],liniedobre[i][3]))//(war2==1)
         {  licz++;
             war=1;
             przeciecie(linia,liniedobre[i],xprz,yprz);
             if (licz==1)
             {
                 odl=odleglosc(xprz,yprz,xp,yp);
                 ktorei=i;
             }else
             {
                 if (odl>odleglosc(xprz,yprz,xp,yp))
                 {
                     odl=odleglosc(xprz,yprz,xp,yp);
                     ktorei=i;
                 }
             }
         }
    } //mamy indeks linii, z ktora sie przecina
    if (max20>20)
    {
        k++;
        goto skok;
    }

    } //mamy wybran¹ linie z przeciecia HURAAAAA!

    granice.clear();
    //wybieramy pierwszy element tablicy granice
    if (liniedobre[ktorei][4]>2000000) //|| liniedobre[ktorei][4]<3000000
    {
        granice.push_back(liniedobre[ktorei]);
        granice[0][0]=liniedobre[ktorei][2];
        granice[0][1]=liniedobre[ktorei][3];
        granice[0][2]=liniedobre[ktorei][0];
        granice[0][3]=liniedobre[ktorei][1];
        granice[0][4]=granice[0][4]-2000000;
        if (granice[0][4]<0)
            granice[0][4]=granice[0][4]+4000000;
    } else
    {
       granice.push_back(liniedobre[ktorei]);
    }

//------PÊTLA WYBIERAJ¥CA RESZTÊ ELEMENTÓW GRANICY A¯ DO ZAMKNIÊCIA-------------
  while (granice[0][0]!=granice[granice.size()-1][2] || granice[0][1]!=granice[granice.size()-1][3])
{
    wybranelinie.clear(); //WYBRANIE LINII DOCHODZ¥CYCH DO KOÑCA OSTATNIEJ GRANICY PARCELI
    for (unsigned int i=0;i<liniedobre.size();i++)
    {
            if ((liniedobre[i][0]==granice[granice.size()-1][2] && liniedobre[i][1]==granice[granice.size()-1][3]) && (liniedobre[i][2]!=granice[granice.size()-1][0] && liniedobre[i][3]!=granice[granice.size()-1][1]))
            {
            wybranelinie.push_back(liniedobre[i]);
            }
            if ((liniedobre[i][2]==granice[granice.size()-1][2] && liniedobre[i][3]==granice[granice.size()-1][3]) && (liniedobre[i][0]!=granice[granice.size()-1][0] && liniedobre[i][1]!=granice[granice.size()-1][1]))
            {
            wybranelinie.push_back(liniedobre[i]);
            wybranelinie[wybranelinie.size()-1][0]=liniedobre[i][2];
            wybranelinie[wybranelinie.size()-1][1]=liniedobre[i][3];
            wybranelinie[wybranelinie.size()-1][2]=liniedobre[i][0];
            wybranelinie[wybranelinie.size()-1][3]=liniedobre[i][1];
            wybranelinie[wybranelinie.size()-1][4]=wybranelinie[wybranelinie.size()-1][4]-2000000;
                if (wybranelinie[wybranelinie.size()-1][4]<0)
                    wybranelinie[wybranelinie.size()-1][4]=wybranelinie[wybranelinie.size()-1][4]+4000000;
            }
    }
//----------ZNALEZIENIE LINII SKRÊCAJ¥CEJ MAKSYMALNIE W LEWO---------------------------------
    for (unsigned int i=0;i<wybranelinie.size();i++)
    {
        if (wybranelinie[i][2]!=granice[granice.size()-1][0])
        {
            if (i==0)
            {

                if(granice[granice.size()-1][4]>2000000)
                {
                    azym2=granice[granice.size()-1][4]-2000000;
                }else
                {
                    azym2=granice[granice.size()-1][4]+2000000;
                }
                wybranelinie[i][5]=wybranelinie[i][4]-azym2;

                if (wybranelinie[i][5]<0)
                    wybranelinie[i][5]=wybranelinie[i][5]+4000000;
                azym=wybranelinie[i][5];
                ktorei=i;
            } else
        {
           if(granice[granice.size()-1][4]>2000000)
            {
                azym2=granice[granice.size()-1][4]-2000000;
            }else
            {
                azym2=granice[granice.size()-1][4]+2000000;
            }
           wybranelinie[i][5]=wybranelinie[i][4]-azym2;
            if (wybranelinie[i][5]<0)
                wybranelinie[i][5]=wybranelinie[i][5]+4000000;
            if (azym>wybranelinie[i][5])
            {
                azym=wybranelinie[i][5];
                ktorei=i;
            }
        }
        }
    }  //wybralismy :D :D :D :D :D
    granice.push_back(wybranelinie[ktorei]);
}
z++;
        parceletab.push_back(granice);

        granice.clear();
}
}

//-------USUNIÊCIE PARCELI POWTARZAJ¥CYCH SIÊ------------------------------------

    for (unsigned int i=0;i<parceletab.size()-1;i++)
    {
        for (unsigned int j=0;j<parceletab.size();j++)
        {
            if (i!=j)
            {
                for (unsigned int k=0;k<parceletab[j].size();k++)
                {
                    if (parceletab[i][0][0]==parceletab[j][k][0] && parceletab[i][0][1]==parceletab[j][k][1] && parceletab[i][0][2]==parceletab[j][k][2] && parceletab[i][0][3]==parceletab[j][k][3])
                    {
                        for (unsigned int l=0;l<parceletab[j].size();l++)
                        {
                            parceletab[j][l][0]=0;
                            parceletab[j][l][1]=0;
                            parceletab[j][l][2]=0;
                            parceletab[j][l][3]=0;
                        }
                    }
                }
            }
        }
    }

    for (unsigned int j=0; j<parceletab.size(); j++)
    {
        if (parceletab[j][0][0]==0 && parceletab[j][0][1]==0 && parceletab[j][0][2]==0 && parceletab[j][0][3]==0)   //(odleglosc(parceletab[k][0][0],parceletab[k][0][1],parceletab[k][0][2],parceletab[k][0][3])==0)
        {
            parceletab.erase(parceletab.begin()+j);
            j--;
        }
    }


    plik.open(""+projekt+"/p.par", ios::out);
    plik<<parceletab.size()<<endl;
    for (unsigned int j=0;j<parceletab.size();j++)
    {
        if (RadioButton3->GetValue())
        plik<<j+1<<" 0 "<<elemwybnazw[j]<<" 0 0 0 0 0 30.12.1899 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 30.12.1899 0 0 0 0 0 0 "<<endl;
        else
        plik<<j+1<<" 0 0 0 0 0 0 0 30.12.1899 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 30.12.1899 0 0 0 0 0 0 "<<endl;
       plik<<parceletab[j].size()<<endl;
        for (unsigned int i=0;i<parceletab[j].size();i++)
        {
            plik<<parceletab[j][i][0]<<" "<<parceletab[j][i][1]<<" -1 -1 -1 "<<parceletab[j][i][2]<<" "<<parceletab[j][i][3]<<endl;
        }
    }
    plik.close();

    liniedobre.clear();
    wybranelinie.clear();
    granice.clear();
    elemwyb.clear();
    elemwybnazw.clear();
    Button2->Enable(true);
}

//------GENERALIZACJA------------------------------------------------------------------------------
void parcele::OnButton2Click(wxCommandEvent& event)
{
    double A, B, C, odl, az1, az2, kat, warkat, warodl;
    int war;

    TextCtrl1->GetValue().ToDouble(&warkat);
    TextCtrl2->GetValue().ToDouble(&warodl);
    warkat=warkat*10000;


//---------PARAMETR KATOWY (WYD£U¯ENIE LINII)
    for (unsigned int i=0;i<parceletab.size();i++) //pêtla wybieraj¹ca parcele
    {   war=0;
        while (war!=1)
        {   war=1;
            for (unsigned int j=0;j<parceletab[i].size()-1;j++) //pêtla wybieraj¹ca kolejne granice parceli
        {
            az1=azymut(parceletab[i][j][0],parceletab[i][j][1],parceletab[i][j][2],parceletab[i][j][3]); //obliczenie azymutów
            az2=azymut(parceletab[i][j+1][0],parceletab[i][j+1][1],parceletab[i][j+1][2],parceletab[i][j+1][3]);

            kat=az2-az1; //obliczenie k¹ta
                if (kat<0)
                    kat=kat*(-1);

            parametry(parceletab[i][j][0],parceletab[i][j][1],parceletab[i][j+1][2],parceletab[i][j+1][3],A, B, C);
            odl=(odlodpros(parceletab[i][j][2],parceletab[i][j][3],A, C))/odleglosc(parceletab[i][j][0],parceletab[i][j][1],parceletab[i][j+1][2],parceletab[i][j+1][3]);
            if (odl<0)
                    odl=odl*(-1);

            if (kat<warkat || (kat<warkat*5 && odl<warodl))
            {
                war=0;
                parceletab[i][j][2]=parceletab[i][j+1][2];
                parceletab[i][j][3]=parceletab[i][j+1][3];
                parceletab[i].erase(parceletab[i].begin()+j+1);
                break;
            }
        }
        }

         war=0;
        while (war!=1)
        {   war=1;
            az2=azymut(parceletab[i][parceletab[i].size()-1][0],parceletab[i][parceletab[i].size()-1][1],parceletab[i][parceletab[i].size()-1][2],parceletab[i][parceletab[i].size()-1][3]); //obliczenie azymutów
            az1=azymut(parceletab[i][0][0],parceletab[i][0][1],parceletab[i][0][2],parceletab[i][0][3]);

            kat=az2-az1; //obliczenie k¹ta
                if (kat<0)
                    kat=kat*(-1);

            parametry(parceletab[i][parceletab[i].size()-1][0],parceletab[i][parceletab[i].size()-1][1],parceletab[i][0][2],parceletab[i][0][3],A, B, C);
            odl=(odlodpros(parceletab[i][parceletab[i].size()-1][2],parceletab[i][parceletab[i].size()-1][3],A, C))/odleglosc(parceletab[i][parceletab[i].size()-1][0],parceletab[i][parceletab[i].size()-1][1],parceletab[i][0][2],parceletab[i][0][3]);
            if (odl<0)
                    odl=odl*(-1);

            if (kat<warkat || (kat<warkat*5 && odl<warodl))
            {
                war=0;
                parceletab[i][parceletab[i].size()-1][2]=parceletab[i][0][2];
                parceletab[i][parceletab[i].size()-1][3]=parceletab[i][0][3];
                parceletab[i].erase(parceletab[i].begin());
            }
        }
    }

    plik.open(""+projekt+"/p.par", ios::out);
    plik<<parceletab.size()<<endl;
    for (unsigned int j=0;j<parceletab.size();j++)
    {
        if (RadioButton3->GetValue())
        plik<<j+1<<" 0 "<<elemwybnazw[j]<<" 0 0 0 0 0 30.12.1899 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 30.12.1899 0 0 0 0 0 0 "<<endl;
        else
        plik<<j+1<<" 0 0 0 0 0 0 0 30.12.1899 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 30.12.1899 0 0 0 0 0 0 "<<endl;
        plik<<parceletab[j].size()<<endl;
        for (unsigned int i=0;i<parceletab[j].size();i++)
        {
            plik<<parceletab[j][i][0]<<" "<<parceletab[j][i][1]<<" -1 -1 -1 "<<parceletab[j][i][2]<<" "<<parceletab[j][i][3]<<endl;
        }
    }
    plik.close();

}
