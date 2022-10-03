#include "eksport.h"

using namespace std;
//(*InternalHeaders(eksport)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(eksport)
const long eksport::ID_BUTTON1 = wxNewId();
const long eksport::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(eksport,wxFrame)
	//(*EventTable(eksport)
	//*)
END_EVENT_TABLE()

eksport::eksport(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(eksport)
	wxFlexGridSizer* FlexGridSizer1;

	Create(parent, id, _("Eksport"), wxDefaultPosition, wxDefaultSize, wxSTAY_ON_TOP|wxCAPTION|wxCLOSE_BOX|wxFRAME_NO_TASKBAR|wxFRAME_FLOAT_ON_PARENT, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	FlexGridSizer1 = new wxFlexGridSizer(0, 2, 0, 0);
	Button1 = new wxButton(this, ID_BUTTON1, _("Modez"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	FlexGridSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(this, ID_BUTTON2, _("EDN"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	FlexGridSizer1->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&eksport::OnButton1Click);
	//*)
}

eksport::~eksport()
{
	//(*Destroy(eksport)
	//*)
}


void eksport::OnButton1Click(wxCommandEvent& event)
{
    modez* oknogl = new modez(this);
    oknogl->Show(true);

    Close();
}
