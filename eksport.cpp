#include "eksport.h"

using namespace std;
//(*InternalHeaders(eksport)




//(*IdInit(eksport)




BEGIN_EVENT_TABLE(eksport,wxFrame)
	//(*EventTable(eksport)
	//*)
END_EVENT_TABLE()

eksport::eksport(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(eksport)
















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