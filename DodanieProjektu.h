#ifndef DODANIEPROJEKTU_H
#define DODANIEPROJEKTU_H

//(*Headers(DodanieProjektu)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <windows.h>



class DodanieProjektu: public wxDialog
{
	public:

		DodanieProjektu(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~DodanieProjektu();

		//(*Declarations(DodanieProjektu)
		wxButton* Button1;
		wxStaticText* StaticText1;
		wxTextCtrl* TextCtrl1;
		//*)

	protected:

		//(*Identifiers(DodanieProjektu)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTON1;
		//*)

	private:

		//(*Handlers(DodanieProjektu)
		void OnButton1Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
