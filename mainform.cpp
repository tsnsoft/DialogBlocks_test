/////////////////////////////////////////////////////////////////////////////
// Name:        mainform.cpp
// Purpose:     
// Author:      Talipov S.N.
// Modified by: 
// Created:     14.04.2025 21:14:03
// RCS-ID:      
// Copyright:   
// Licence:     
/////////////////////////////////////////////////////////////////////////////

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

////@begin includes
////@end includes

#include "mainform.h"

////@begin XPM images

////@end XPM images


/*
 * MainForm type definition
 */

IMPLEMENT_CLASS( MainForm, wxFrame )


/*
 * MainForm event table definition
 */

BEGIN_EVENT_TABLE( MainForm, wxFrame )

////@begin MainForm event table entries
    EVT_BUTTON( ID_BUTTON, MainForm::OnButtonClick )
////@end MainForm event table entries

END_EVENT_TABLE()


/*
 * MainForm constructors
 */

MainForm::MainForm()
{
    Init();
}

MainForm::MainForm( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create( parent, id, caption, pos, size, style );
}


/*
 * MainForm creator
 */

bool MainForm::Create( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
////@begin MainForm creation
    wxFrame::Create( parent, id, caption, pos, size, style );

    CreateControls();
    Centre();
////@end MainForm creation
    return true;
}


/*
 * MainForm destructor
 */

MainForm::~MainForm()
{
////@begin MainForm destruction
////@end MainForm destruction
}


/*
 * Member initialisation
 */

void MainForm::Init()
{
////@begin MainForm member initialisation
////@end MainForm member initialisation
}


/*
 * Control creation for MainForm
 */

void MainForm::CreateControls()
{    
////@begin MainForm content construction
    MainForm* itemFrame1 = this;

    wxBoxSizer* itemBoxSizer1 = new wxBoxSizer(wxVERTICAL);
    itemFrame1->SetSizer(itemBoxSizer1);

    wxStaticText* itemStaticText2 = new wxStaticText( itemFrame1, wxID_STATIC, wxGetTranslation(wxString() + (wxChar) 0x042D + (wxChar) 0x0442 + (wxChar) 0x043E + wxT(" ") + (wxChar) 0x043C + (wxChar) 0x0435 + (wxChar) 0x0442 + (wxChar) 0x043A + (wxChar) 0x0430), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer1->Add(itemStaticText2, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxButton* itemButton3 = new wxButton( itemFrame1, ID_BUTTON, wxGetTranslation(wxString() + (wxChar) 0x0410 + wxT(" ") + (wxChar) 0x044D + (wxChar) 0x0442 + (wxChar) 0x043E + wxT(" ") + (wxChar) 0x043A + (wxChar) 0x043D + (wxChar) 0x043E + (wxChar) 0x043F + (wxChar) 0x043E + (wxChar) 0x0447 + (wxChar) 0x043A + (wxChar) 0x0430 + wxT("!")), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer1->Add(itemButton3, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);


    // Connect events and objects
    itemButton3->Connect(ID_BUTTON, wxEVT_MIDDLE_DOWN, wxMouseEventHandler(MainForm::OnMiddleDown), NULL, this);
////@end MainForm content construction
}


/*
 * wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON
 */

void MainForm::OnButtonClick( wxCommandEvent& event )
{
////@begin wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON in MainForm.
    // Before editing this code, remove the block markers.
    event.Skip();
////@end wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON in MainForm. 
}


/*
 * wxEVT_MIDDLE_DOWN event handler for ID_BUTTON
 */

void MainForm::OnMiddleDown( wxMouseEvent& event )
{
////@begin wxEVT_MIDDLE_DOWN event handler for ID_BUTTON in MainForm.
    // Before editing this code, remove the block markers.
    event.Skip();
////@end wxEVT_MIDDLE_DOWN event handler for ID_BUTTON in MainForm. 
}


/*
 * Should we show tooltips?
 */

bool MainForm::ShowToolTips()
{
    return true;
}

/*
 * Get bitmap resources
 */

wxBitmap MainForm::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin MainForm bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end MainForm bitmap retrieval
}

/*
 * Get icon resources
 */

wxIcon MainForm::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin MainForm icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end MainForm icon retrieval
}
