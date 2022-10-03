/***************************************************************
 * Name:      ProgramApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Rafał Szatkowski (rafalszatkowski1992@gmail.com)
 * Created:   2016-04-07
 * Copyright: Rafał Szatkowski ()
 * License:
 **************************************************************/

#include "ProgramApp.h"

//(*AppHeaders
#include "ProgramMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(ProgramApp);

bool ProgramApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	ProgramFrame* Frame = new ProgramFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
