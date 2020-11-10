/////////////////////////////////////////////////////////////////////////////
// Name:        dialogblocks_testapp.h
// Purpose:     
// Author:      Talipov S.N.
// Modified by: 
// Created:     Tue 10 Nov 2020 18:12:19 +06
// RCS-ID:      
// Copyright:   
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _DIALOGBLOCKS_TESTAPP_H_
#define _DIALOGBLOCKS_TESTAPP_H_


/*!
 * Includes
 */

////@begin includes
#include "wx/image.h"
#include "mainform.h"
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
////@end control identifiers

/*!
 * DialogBlocks_testApp class declaration
 */

class DialogBlocks_testApp: public wxApp
{    
    DECLARE_CLASS( DialogBlocks_testApp )
    DECLARE_EVENT_TABLE()

public:
    /// Constructor
    DialogBlocks_testApp();

    void Init();

    /// Initialises the application
    virtual bool OnInit();

    /// Called on exit
    virtual int OnExit();

////@begin DialogBlocks_testApp event handler declarations

////@end DialogBlocks_testApp event handler declarations

////@begin DialogBlocks_testApp member function declarations

////@end DialogBlocks_testApp member function declarations

////@begin DialogBlocks_testApp member variables
////@end DialogBlocks_testApp member variables
};

/*!
 * Application instance declaration 
 */

////@begin declare app
DECLARE_APP(DialogBlocks_testApp)
////@end declare app

#endif
    // _DIALOGBLOCKS_TESTAPP_H_
