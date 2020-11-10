/////////////////////////////////////////////////////////////////////////////
// Name:        dialogblocks_testapp.cpp
// Purpose:     
// Author:      Talipov S.N.
// Modified by: 
// Created:     Tue 10 Nov 2020 18:12:19 +06
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

#include "dialogblocks_testapp.h"

////@begin XPM images
////@end XPM images


/*
 * Application instance implementation
 */

////@begin implement app
IMPLEMENT_APP( DialogBlocks_testApp )
////@end implement app


/*
 * DialogBlocks_testApp type definition
 */

IMPLEMENT_CLASS( DialogBlocks_testApp, wxApp )


/*
 * DialogBlocks_testApp event table definition
 */

BEGIN_EVENT_TABLE( DialogBlocks_testApp, wxApp )

////@begin DialogBlocks_testApp event table entries
////@end DialogBlocks_testApp event table entries

END_EVENT_TABLE()


/*
 * Constructor for DialogBlocks_testApp
 */

DialogBlocks_testApp::DialogBlocks_testApp()
{
    Init();
}


/*
 * Member initialisation
 */

void DialogBlocks_testApp::Init()
{
////@begin DialogBlocks_testApp member initialisation
////@end DialogBlocks_testApp member initialisation
}

/*
 * Initialisation for DialogBlocks_testApp
 */

bool DialogBlocks_testApp::OnInit()
{    
////@begin DialogBlocks_testApp initialisation
	// Remove the comment markers above and below this block
	// to make permanent changes to the code.

#if wxUSE_XPM
	wxImage::AddHandler(new wxXPMHandler);
#endif
#if wxUSE_LIBPNG
	wxImage::AddHandler(new wxPNGHandler);
#endif
#if wxUSE_LIBJPEG
	wxImage::AddHandler(new wxJPEGHandler);
#endif
#if wxUSE_GIF
	wxImage::AddHandler(new wxGIFHandler);
#endif
	MainForm* mainWindow = new MainForm( NULL );
	mainWindow->Show(true);
////@end DialogBlocks_testApp initialisation

    return true;
}


/*
 * Cleanup for DialogBlocks_testApp
 */

int DialogBlocks_testApp::OnExit()
{    
////@begin DialogBlocks_testApp cleanup
	return wxApp::OnExit();
////@end DialogBlocks_testApp cleanup
}

