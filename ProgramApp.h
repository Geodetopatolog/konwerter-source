/***************************************************************
 * Name:      ProgramApp.h
 * Purpose:   Defines Application Class
 * Author:    Rafał Szatkowski (rafalszatkowski1992@gmail.com)
 * Created:   2016-04-07
 * Copyright: Rafał Szatkowski ()
 * License:
 **************************************************************/

#ifndef PROGRAMAPP_H
#define PROGRAMAPP_H

#include <wx/app.h>

class ProgramApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // PROGRAMAPP_H
