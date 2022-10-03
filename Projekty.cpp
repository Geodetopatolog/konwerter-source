#include "Projekty.h"
#include "ProgramMain.h"

using namespace std;

//(*InternalHeaders(Projekty)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Projekty)
const long Projekty::ID_BUTTON1 = wxNewId();
const long Projekty::ID_LISTBOX1 = wxNewId();
const long Projekty::ID_BUTTON2 = wxNewId();
const long Projekty::ID_BUTTON3 = wxNewId();
const long Projekty::ID_MESSAGEDIALOG1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Projekty,wxFrame)
	//(*EventTable(Projekty)
	//*)
END_EVENT_TABLE()

Projekty::Projekty(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(Projekty)
	wxFlexGridSizer* FlexGridSizer1;

	Create(parent, id, _("Menad¿er projektów"), wxDefaultPosition, wxDefaultSize, wxCAPTION|wxFRAME_NO_TASKBAR|wxFRAME_FLOAT_ON_PARENT|wxALWAYS_SHOW_SB, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxPoint(22,63));
	FlexGridSizer1 = new wxFlexGridSizer(0, 1, 0, 0);
	Button1 = new wxButton(this, ID_BUTTON1, _("Nowy"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	FlexGridSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ListBox1 = new wxListBox(this, ID_LISTBOX1, wxDefaultPosition, wxSize(178,225), 0, 0, wxLB_SINGLE|wxLB_NEEDED_SB, wxDefaultValidator, _T("ID_LISTBOX1"));
	FlexGridSizer1->Add(ListBox1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(this, ID_BUTTON2, _("Wczytaj"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	FlexGridSizer1->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button3 = new wxButton(this, ID_BUTTON3, _("Usuñ"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	FlexGridSizer1->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	MessageDialog1 = new wxMessageDialog(this, _("Czy na pewno chcesz usun¹æ projekt\? Projekt nie bêdzie mo¿liwy do przywrócenia!"), _("Uwaga!"), wxCANCEL|wxYES_NO|wxSTAY_ON_TOP, wxDefaultPosition);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Projekty::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Projekty::OnButton2Click);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Projekty::OnButton3Click);
	//*)

	fstream plik;
		string nazwa;

	 plik.open("Projekty/Lista.txt", ios::in);

	 while (!plik.eof())  //sprawdzenie warunku poprawnoÅ“ci otwarcia pliku
    {

        getline(plik, nazwa);
        if (nazwa!="")
        ListBox1->Append(nazwa);

    }
	plik.close();
}

Projekty::~Projekty()
{
	//(*Destroy(Projekty)
	//*)
}


void Projekty::OnButton1Click(wxCommandEvent& event)
{
    DodanieProjektu* okno1 = new DodanieProjektu(this);
    okno1->ShowModal();
    okno1->Destroy();


ListBox1->Clear();

fstream plik;
string nazwa;


	 plik.open("Projekty/Lista.txt", ios::in);

	 while (!plik.eof())  //sprawdzenie warunku poprawnoÅ“ci otwarcia pliku
    {

        getline(plik, nazwa);
        if (nazwa!="")
        ListBox1->Append(nazwa);

    }
	plik.close();


}

void Projekty::OnButton3Click(wxCommandEvent& event)
{
MessageDialog1->ShowModal();


string projekt, projekt2, plik2, nazwa;

projekt=ListBox1->GetString(ListBox1->GetSelection());


plik2="Projekty/"+projekt+"/d.doe";

    fstream plik;

char *cstr = new char[plik2.length() + 1];
strcpy(cstr, plik2.c_str());

 DeleteFileA(cstr);

 delete [] cstr;

 plik2="Projekty/"+projekt+"/g.gpr";

strcpy(cstr, plik2.c_str());

 DeleteFileA(cstr);

 delete [] cstr;

 plik2="Projekty/"+projekt+"/k.kot";

strcpy(cstr, plik2.c_str());

 DeleteFileA(cstr);

 delete [] cstr;

 plik2="Projekty/"+projekt+"/n.naz";


strcpy(cstr, plik2.c_str());

 DeleteFileA(cstr);

 delete [] cstr;

 plik2="Projekty/"+projekt+"/o.okr";


strcpy(cstr, plik2.c_str());

 DeleteFileA(cstr);

 delete [] cstr;

  plik2="Projekty/"+projekt+"/l.okr";


strcpy(cstr, plik2.c_str());

 DeleteFileA(cstr);

 delete [] cstr;

plik2="Projekty/"+projekt+"/w.wfr";


strcpy(cstr, plik2.c_str());

 DeleteFileA(cstr);

 delete [] cstr;

 plik2="Projekty/"+projekt+"/i.iff";


strcpy(cstr, plik2.c_str());

 DeleteFileA(cstr);

 delete [] cstr;

 plik2="Projekty/"+projekt+"/p.par";


strcpy(cstr, plik2.c_str());

 DeleteFileA(cstr);

 delete [] cstr;


 plik2="Projekty/"+projekt+"/s.str";

strcpy(cstr, plik2.c_str());

 DeleteFileA(cstr);

 delete [] cstr;



  projekt2="Projekty/"+projekt;

char *cstr1 = new char[projekt2.length() + 1];
strcpy(cstr1, projekt2.c_str());

 RemoveDirectoryA(cstr1);

 delete [] cstr1;

    plik.close();

plik.open("Projekty/Lista.txt", ios::out);


for (unsigned int i=0; i<ListBox1->GetCount(); i++)
{
    if (projekt!=ListBox1->GetString(i))
    {
     plik<<ListBox1->GetString(i)<<endl;
    }
}

plik.close();


ListBox1->Clear();
plik.open("Projekty/Lista.txt", ios::in);

	 while (!plik.eof())  //sprawdzenie warunku poprawnoÅ“ci otwarcia pliku
    {

        getline(plik, nazwa);
        if (nazwa!="")
        ListBox1->Append(nazwa);

    }
	plik.close();


}

void Projekty::OnButton2Click(wxCommandEvent& event)
{

fstream plik;
string projekt;


projekt="Projekty/"+ListBox1->GetString(ListBox1->GetSelection());

plik.open("Konfig/k.konf", ios::out);
plik<<projekt;

plik.close();


Close();
}
