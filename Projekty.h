#ifndef PROJEKTY_H
#define PROJEKTY_H

//(*Headers(Projekty)
#include <wx/sizer.h>
#include <wx/msgdlg.h>
#include <wx/listbox.h>
#include <wx/button.h>
#include <wx/frame.h>
//*)
#include <vector>
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <windows.h>
#include "DodanieProjektu.h"
#include "ProgramMain.h"

using namespace std;

class Projekty: public wxFrame
{
	public:

		Projekty(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~Projekty();

		//(*Declarations(Projekty)
		wxButton* Button1;
		wxButton* Button2;
		wxButton* Button3;
		wxMessageDialog* MessageDialog1;
		wxListBox* ListBox1;
		//*)

	protected:

		//(*Identifiers(Projekty)
		static const long ID_BUTTON1;
		static const long ID_LISTBOX1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_MESSAGEDIALOG1;
		//*)

	private:

		//(*Handlers(Projekty)
		void OnListBox1Select(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnButton3Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
