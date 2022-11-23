//
// Created by dario on 16/11/2022.
//
#include "MyFrame.h"
#include "wx/wx.h"
#include "NewFrame.h"
#include "MyApp.h"
#include "Frame.h"
#include "RegisterFrame.h"



const long MyFrame::IdButtonRegister=::wxNewId();
const long MyFrame::IdButtonAccess =::wxNewId();
BEGIN_EVENT_TABLE ( MyFrame, wxFrame )
//EVT_BUTTON ( BUTTON_Hello, MyFrame::OnExit )
           EVT_BUTTON(IdButtonAccess, MyFrame::OnAccess)
           EVT_BUTTON(IdButtonRegister, MyFrame::OnRegister)
// Tell the OS to run MainFrame::OnExit when
END_EVENT_TABLE() // The button is pressed



MyFrame::MyFrame(const wxString &title, const wxPoint &pos, const wxSize
&size): wxFrame((wxFrame*)NULL,  - 1, title, pos, size)

{
this->SetSizeHints(wxDefaultSize, wxDefaultSize);
wxBoxSizer *MainBox= new wxBoxSizer(wxHORIZONTAL);
wxBoxSizer *MainBox1=new wxBoxSizer(wxHORIZONTAL);
Register=new wxButton (this,IdButtonRegister,_T ("Register"),wxDefaultPosition,wxDefaultSize,0);
HelloWorld=new wxButton(this,IdButtonAccess,_T ("Access"), wxDefaultPosition,wxDefaultSize,0);
MainBox1->Add(Register,0,wxALL,0);
this->SetSizer(MainBox1);
MainBox->Add(HelloWorld,0,wxLEFT,100);
this->SetSizer(MainBox);
this->Layout();
//HelloWorld = new wxButton(this, BUTTON_Hello, _T("Access"),
// shows a button on this window
//wxDefaultPosition, wxDefaultSize,0); // with the text "hello World"
}


void MyFrame::OnAccess( wxCommandEvent& event )
{
    NewFrame *MainWin2 = new NewFrame(_T("Access!"));
    MainWin2->Show(TRUE); // show the window
    // and finally, set it as the main window
    // Tells the OS to quit running this process
}
void MyFrame::OnRegister(wxCommandEvent& event){

    RegisterFrame *MainWin3 = new RegisterFrame(_T("Register!"));
    MainWin3->Show(TRUE);
}