//
// Created by dario on 16/11/2022.
//

#include "MyFrame.h"
#include "wx/wx.h"
#include "NewFrame.h"
#include "MyApp.h"
#include "Frame.h"


wxTextCtrl *password;
const long NewFrame::IdButtonConfirm =::wxNewId();

BEGIN_EVENT_TABLE (NewFrame, wxFrame)
        EVT_BUTTON(IdButtonConfirm, NewFrame::Access)

END_EVENT_TABLE() // The button is pressed



NewFrame::NewFrame(const wxString &title)
        : wxFrame(NULL, -1, title, wxPoint(-1, -1), wxSize(365, 250)){




   // this->Layout();


    wxPanel *panel = new wxPanel(this, -1);

    wxBoxSizer *hbox = new wxBoxSizer(wxHORIZONTAL);


    wxFlexGridSizer *fgs = new wxFlexGridSizer(3, 2, 12, -10);

    //wxBoxSizer *MainBox=new wxBoxSizer(wxHORIZONTAL);

    wxStaticText *thetitle = new wxStaticText(panel, -1, wxT("Email"));
    wxStaticText *password = new wxStaticText(panel, -1, wxT("Password"));
    Confirm=new wxButton (panel,IdButtonConfirm,_T ("Ok"),wxDefaultPosition,wxDefaultSize,0);



    wxTextCtrl *tc1 = new wxTextCtrl(panel, -1);
    wxTextCtrl *m_passwordText = new wxTextCtrl(panel, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(150, wxDefaultSize.GetHeight()), wxTE_PASSWORD);


    fgs->Add(thetitle);
    fgs->Add(tc1, 1, wxEXPAND);
    fgs->Add(password);
    fgs->Add(m_passwordText, 1);
    fgs->Add(Confirm,0,wxLeft,100);

    fgs->AddGrowableRow(1, 1);
    fgs->AddGrowableCol(1, 1);


    hbox->Add(fgs, 1, wxALL, 10);


    panel->SetSizer(hbox);
    //this->SetSizer(MainBox);

    Centre();
}

void NewFrame::Access(wxCommandEvent &event) {
    int x;

}
