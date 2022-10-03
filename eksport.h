#ifndef EKSPORT_H
#define EKSPORT_H

#include "modez.h"

//(*Headers(eksport)
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/frame.h>
//*)

class eksport: public wxFrame
{
	public:

		eksport(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~eksport();

		//(*Declarations(eksport)
		wxButton* Button1;
		wxButton* Button2;
		//*)

		//(*Identifiers(eksport)
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		//*)

		//(*Handlers(eksport)
		void OnButton1Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
