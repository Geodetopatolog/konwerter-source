#include "DodanieProjektu.h"

//(*InternalHeaders(DodanieProjektu)
#include <wx/intl.h>
#include <wx/string.h>
//*)
using namespace std;

//(*IdInit(DodanieProjektu)
const long DodanieProjektu::ID_STATICTEXT1 = wxNewId();
const long DodanieProjektu::ID_TEXTCTRL1 = wxNewId();
const long DodanieProjektu::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(DodanieProjektu,wxDialog)
	//(*EventTable(DodanieProjektu)
	//*)
END_EVENT_TABLE()

DodanieProjektu::DodanieProjektu(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(DodanieProjektu)
	wxFlexGridSizer* FlexGridSizer1;

	Create(parent, id, _("Dodawanie projektu"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	FlexGridSizer1 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Nazwa projektu:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	FlexGridSizer1->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button1 = new wxButton(this, ID_BUTTON1, _("Utwórz"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	FlexGridSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&DodanieProjektu::OnButton1Click);
	//*)
}

DodanieProjektu::~DodanieProjektu()
{
	//(*Destroy(DodanieProjektu)
	//*)
}


void DodanieProjektu::OnButton1Click(wxCommandEvent& event)
{
     string nazwa,nazwa2;

    nazwa=TextCtrl1->GetValue();
    nazwa2="Projekty/"+nazwa;

char *cstr = new char[nazwa2.length() + 1];
strcpy(cstr, nazwa2.c_str());

 CreateDirectoryA(cstr, NULL);

 delete [] cstr;

    fstream plik;

    plik.open("Projekty/"+nazwa+"/d.doe", ios::out); plik.close();
    plik.open("Projekty/"+nazwa+"/g.gpr", ios::out); plik.close();
    plik.open("Projekty/"+nazwa+"/k.kot", ios::out); plik.close();
    plik.open("Projekty/"+nazwa+"/n.naz", ios::out); plik.close();
    plik.open("Projekty/"+nazwa+"/o.okr", ios::out); plik.close();
    plik.open("Projekty/"+nazwa+"/l.okr", ios::out); plik.close();
    plik.open("Projekty/"+nazwa+"/w.wfr", ios::out); plik.close();
    plik.open("Projekty/"+nazwa+"/i.iff", ios::out); plik.close();
    plik.open("Projekty/"+nazwa+"/p.par", ios::out); plik.close();
    plik.open("Projekty/"+nazwa+"/s.str", ios::out); plik.close();
    plik.open("Projekty/Lista.txt", ios::app);

    plik<<nazwa<<endl;

    plik.close();

    Close();

}
