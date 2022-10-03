#include "WSAD.h"

//(*InternalHeaders(WSAD)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(WSAD)
const long WSAD::ID_STATICBOX1 = wxNewId();
const long WSAD::ID_STATICBOX2 = wxNewId();
const long WSAD::ID_BUTTON1 = wxNewId();
const long WSAD::ID_TEXTCTRL1 = wxNewId();
const long WSAD::ID_STATICTEXT1 = wxNewId();
const long WSAD::ID_STATICTEXT2 = wxNewId();
const long WSAD::ID_STATICTEXT3 = wxNewId();
const long WSAD::ID_TEXTCTRL2 = wxNewId();
const long WSAD::ID_TEXTCTRL3 = wxNewId();
const long WSAD::ID_STATICBOX3 = wxNewId();
const long WSAD::ID_BUTTON2 = wxNewId();
const long WSAD::ID_BUTTON3 = wxNewId();
const long WSAD::ID_STATICTEXT4 = wxNewId();
const long WSAD::ID_STATICTEXT5 = wxNewId();
const long WSAD::ID_TEXTCTRL4 = wxNewId();
const long WSAD::ID_TEXTCTRL5 = wxNewId();
const long WSAD::ID_STATICTEXT6 = wxNewId();
const long WSAD::ID_TEXTCTRL6 = wxNewId();
const long WSAD::ID_TEXTCTRL7 = wxNewId();
const long WSAD::ID_STATICTEXT7 = wxNewId();
const long WSAD::ID_STATICTEXT8 = wxNewId();
const long WSAD::ID_TEXTCTRL8 = wxNewId();
const long WSAD::ID_STATICTEXT9 = wxNewId();
const long WSAD::ID_TEXTCTRL9 = wxNewId();
const long WSAD::ID_STATICTEXT10 = wxNewId();
const long WSAD::ID_BUTTON4 = wxNewId();
const long WSAD::ID_BUTTON5 = wxNewId();
//*)

BEGIN_EVENT_TABLE(WSAD,wxFrame)
	//(*EventTable(WSAD)
	//*)
END_EVENT_TABLE()

WSAD::WSAD(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(WSAD)
	Create(parent, wxID_ANY, _("Wczytanie pliku WSAD"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE|wxFRAME_NO_TASKBAR|wxFRAME_FLOAT_ON_PARENT, _T("wxID_ANY"));
	SetClientSize(wxSize(359,362));
	StaticBox1 = new wxStaticBox(this, ID_STATICBOX1, _("Wybór pliku"), wxPoint(8,0), wxSize(344,64), 0, _T("ID_STATICBOX1"));
	StaticBox2 = new wxStaticBox(this, ID_STATICBOX2, _("Parametry"), wxPoint(8,64), wxSize(344,112), 0, _T("ID_STATICBOX2"));
	Button1 = new wxButton(this, ID_BUTTON1, _("Wybierz plik"), wxPoint(16,24), wxSize(100,25), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(120,24), wxSize(224,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Pomniejsz wspó³rzêdne o:"), wxPoint(16,88), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("X [m]"), wxPoint(16,112), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Y [m]"), wxPoint(16,142), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, _("5500000"), wxPoint(56,110), wxSize(110,22), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	TextCtrl3 = new wxTextCtrl(this, ID_TEXTCTRL3, _("4700000"), wxPoint(56,140), wxSize(110,22), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	StaticBox3 = new wxStaticBox(this, ID_STATICBOX3, _("Import danych"), wxPoint(8,184), wxSize(344,152), 0, _T("ID_STATICBOX3"));
	Button2 = new wxButton(this, ID_BUTTON2, _("Importuj"), wxPoint(128,200), wxSize(100,25), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	Button2->Disable();
	Button3 = new wxButton(this, ID_BUTTON3, _("Zakoñcz"), wxPoint(252,336), wxSize(100,25), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Zaimpotowano"), wxPoint(136,227), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("granic"), wxPoint(88,248), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	TextCtrl4 = new wxTextCtrl(this, ID_TEXTCTRL4, _("0"), wxPoint(32,248), wxSize(50,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	TextCtrl5 = new wxTextCtrl(this, ID_TEXTCTRL5, _("0"), wxPoint(32,272), wxSize(50,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("nazw"), wxPoint(88,274), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	TextCtrl6 = new wxTextCtrl(this, ID_TEXTCTRL6, _("0"), wxPoint(192,248), wxSize(50,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	TextCtrl7 = new wxTextCtrl(this, ID_TEXTCTRL7, _("0"), wxPoint(192,272), wxSize(50,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("wysokoœci furt"), wxPoint(248,248), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("granic okr. wyd."), wxPoint(248,274), wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	TextCtrl8 = new wxTextCtrl(this, ID_TEXTCTRL8, _("0"), wxPoint(32,296), wxSize(50,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL8"));
	StaticText9 = new wxStaticText(this, ID_STATICTEXT9, _("rzednych wys."), wxPoint(88,300), wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	TextCtrl9 = new wxTextCtrl(this, ID_TEXTCTRL9, _("0"), wxPoint(192,296), wxSize(50,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL9"));
	StaticText10 = new wxStaticText(this, ID_STATICTEXT10, _("okr. wydobyw."), wxPoint(248,300), wxDefaultSize, 0, _T("ID_STATICTEXT10"));
	Button4 = new wxButton(this, ID_BUTTON4, _("Podgl¹d tabel"), wxPoint(8,336), wxSize(100,25), 0, wxDefaultValidator, _T("ID_BUTTON4"));
	Button4->Disable();
	Button5 = new wxButton(this, ID_BUTTON5, _("Podgl¹d geometrii"), wxPoint(112,336), wxSize(136,25), 0, wxDefaultValidator, _T("ID_BUTTON5"));
	Button5->Disable();
	FileDialog1 = new wxFileDialog(this, _("Wybierz plik"), wxEmptyString, wxEmptyString, wxFileSelectorDefaultWildcardStr, wxFD_DEFAULT_STYLE|wxFD_OPEN, wxDefaultPosition, wxDefaultSize, _T("wxFileDialog"));

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&WSAD::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&WSAD::OnButton2Click);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&WSAD::OnButton3Click);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&WSAD::OnButton4Click);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&WSAD::OnButton5Click);
	//*)
}

WSAD::~WSAD()
{
	//(*Destroy(WSAD)
	//*)
}


void WSAD::OnButton1Click(wxCommandEvent& event)
{
    if (FileDialog1->ShowModal()==wxID_OK)
        sciezka=FileDialog1->GetPath();

    TextCtrl1->AppendText(sciezka);

    Button2->Enable(true);
}


void WSAD::OnButton2Click(wxCommandEvent& event)
{
    string typ, nazwa;
    fstream plikws, plikwsad, plikd, plikg, plikk, plikn, pliko, plikl, plikw, proj;
    double x, y, xp, yp, xk, yk, wf, kt, xzmd, yzmd;
    long long xi, yi, xpi, ypi, xki, yki, wfi, kti, xzm, yzm;
    wxDouble gpr, kot, okr1, okr2, naz, wfr;
    char znak;
    vector<char> ciag, ciag2, ciag3;
    gpr=kot=okr1=okr2=naz=wfr=0;
        proj.open("konfig/k.konf", ios::in);
        getline(proj, projekt);
        proj.close();

       plikws.open(sciezka, ios::in);
    plikwsad.open(""+projekt+"/d.doe", ios::out);

    TextCtrl2->GetValue().ToDouble(&xzmd);
    TextCtrl3->GetValue().ToDouble(&yzmd);
    xzm=xzmd;
    yzm=yzmd;

    if (plikws.good() && plikwsad.good())                       // sprawdzenie czy pliki otwarly sie prawidlowo
    {
        char c;                                             // definicja zmiennej c;

        while (plikws.get(c))                                //get() wyjmuje ze strumienia 1 bajt i umieszcza go w zmiennej c, nastepnie dopoki nie wystapi
        {
            if (c == ',') c = '.';                          // koniec pliku bedzie nastepowala zamiana , na .

            plikwsad <<c;
        }
    }

    plikws.close();
    plikwsad.close();

    plikwsad.open(""+projekt+"/d.doe", ios::in);
    plikg.open(""+projekt+"/g.gpr", ios::out);
    plikk.open(""+projekt+"/k.kot", ios::out);
    plikn.open(""+projekt+"/n.naz", ios::out);
    pliko.open(""+projekt+"/o.okr", ios::out);
    plikl.open(""+projekt+"/l.okr", ios::out);
    plikw.open(""+projekt+"/w.wfr", ios::out);

     while (!plikwsad.eof())
     {
        plikwsad>>znak;
        if (!plikwsad.fail())
        {
            plikwsad>>typ;
            if (typ=="gr") //granice
            {
                gpr++;
                plikwsad>>xp;
                plikwsad>>znak;
                plikwsad>>yp;
                plikwsad>>znak;
                plikwsad>>xk;
                plikwsad>>znak;
                plikwsad>>yk;
                plikwsad>>znak;

                xpi=(xp-xzm)*1000;
                ypi=(yp-yzm)*1000;
                xki=(xk-xzm)*1000;
                yki=(yk-yzm)*1000;

                plikg<<xpi<<" "<<ypi<<" "<<xki<<" "<<yki<<endl;
            }


            if (typ=="wf")
            {
                wfr++;
                plikwsad>>x;
                plikwsad>>znak;
                plikwsad>>y;
                plikwsad>>znak;
                plikwsad>>wf;
                plikwsad>>znak;

                xi=(x-xzm)*1000;
                yi=(y-yzm)*1000;
                wfi=wf*100;

                plikw<<xi<<" "<<yi<<" "<<wfi<<endl;
            }
            if (typ=="rw")
            {
                kot++;
                plikwsad>>x;
                plikwsad>>znak;
                plikwsad>>y;
                plikwsad>>znak;
                plikwsad>>kt;
                plikwsad>>znak;

                xi=(x-xzm)*1000;
                yi=(y-yzm)*1000;
                kti=kt*100;

                plikk<<xi<<" "<<yi<<" "<<kti<<endl;
            }

            if (typ=="ol") //granice
            {
                okr1++;
                plikwsad>>xp;
                plikwsad>>znak;
                plikwsad>>yp;
                plikwsad>>znak;
                plikwsad>>xk;
                plikwsad>>znak;
                plikwsad>>yk;
                plikwsad>>znak;

                xpi=(xp-xzm)*1000;
                ypi=(yp-yzm)*1000;
                xki=(xk-xzm)*1000;
                yki=(yk-yzm)*1000;

                plikl<<xpi<<" "<<ypi<<" "<<xki<<" "<<yki<<endl;

            }
            if (typ=="od")
            {
                okr2++;
                ciag.clear();
                ciag2.clear();
                ciag3.clear();
                plikwsad>>x;
                plikwsad>>znak;
                plikwsad>>y;
                plikwsad>>znak;
                plikwsad>>znak;
            while (znak!='\"')
                {
                    ciag.push_back(znak);
                    plikwsad>>znak;
                }

                if (ciag.size()>1)
                {
                   for (unsigned int i=0;i<ciag.size();i++)
                   {
                    if (ciag[ciag.size()-i]!=';')
                    {
                        ciag2.push_back(ciag[ciag.size()-i]);
                    }
                    else
                        break;

                   }

                for (unsigned int i=1;i<ciag2.size();i++)
                {
                    if (ciag2[i]=='P' && ciag2[i+1]=='\\')
                    {
                     ciag3.push_back('\\');
                     i++;
                    }
                    else
                    {
                     ciag3.push_back(ciag2[i]);
                    }
                }

                if (ciag3[0]=='\\')
                {
                    ciag3.erase(ciag3.begin());
                }

                ciag2.clear();
                for (unsigned int i=0;i<ciag3.size();i++)
                {
                    ciag2.push_back(ciag3[ciag3.size()-i-1]);
                }

                xi=(x-xzm)*1000;
                yi=(y-yzm)*1000;

                pliko<<xi<<" "<<yi<<" ";
                for (unsigned int i=0;i<ciag2.size();i++)
                    pliko<<ciag2[i];
                    pliko<<endl;
                }
            }
            if (typ=="np")
            {
                naz++;
                ciag.clear();
                plikwsad>>x;
                plikwsad>>znak;
                plikwsad>>y;
                plikwsad>>znak;
                plikwsad>>znak;
                while (znak!='\"')
                {
                    ciag.push_back(znak);
                    plikwsad>>znak;
                }

                if (ciag.size()>1)
                {
                xi=(x-xzm)*1000;
                yi=(y-yzm)*1000;

                plikn<<xi<<" "<<yi<<" ";

                    for (unsigned int i=0;i<ciag.size();i++)
                    plikn<<ciag[i];
                    plikn<<endl;
                }
            }
        }
     }



    plikwsad.close();
    plikws.close();
    plikd.close();
    plikg.close();
    plikk.close();
    plikn.close();
    pliko.close();
    plikw.close();

    wxString napisstr;

    TextCtrl4->Clear(); TextCtrl5->Clear(); TextCtrl6->Clear(); TextCtrl7->Clear(); TextCtrl8->Clear(); TextCtrl9->Clear();
    napisstr.Printf(wxT("%.0f"),gpr);
    TextCtrl4->AppendText(napisstr);
    napisstr.Printf(wxT("%.0f"),naz);
    TextCtrl5->AppendText(napisstr);
    napisstr.Printf(wxT("%.0f"),wfr);
    TextCtrl6->AppendText(napisstr);
    napisstr.Printf(wxT("%.0f"),okr2);
    TextCtrl7->AppendText(napisstr);
    napisstr.Printf(wxT("%.0f"),kot);
    TextCtrl8->AppendText(napisstr);
    napisstr.Printf(wxT("%.0f"),okr1);
    TextCtrl9->AppendText(napisstr);




    Button4->Enable(true);
    Button5->Enable(true);
}

void WSAD::OnButton3Click(wxCommandEvent& event)
{
    Close();
}

void WSAD::OnButton4Click(wxCommandEvent& event)
{
    tabele* oknogl = new tabele(this);
    oknogl->Show(true);
}

void WSAD::OnButton5Click(wxCommandEvent& event)
{
    glowneokno* oknogl = new glowneokno(this);
    oknogl->Show(true);
}
