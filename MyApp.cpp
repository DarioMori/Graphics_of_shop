
#include"MyApp.h"
#include "MyFrame.h"
#include "Frame.h"
#include "NewFrame.h"
#include "RegisterFrame.h"


bool MyApp::OnInit()
{
    // Create an instance of our frame, or window

    MyFrame *MainWin = new MyFrame(_T("Ingrosso"), wxPoint(50, 20), wxSize(500,300));
    MainWin->Show(TRUE); // show the window
    SetTopWindow(MainWin); // and finally, set it as the main window

    return TRUE;
}//
// Created by dario on 16/11/2022.
//
