
// mfc_application_test.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CmfcapplicationtestApp:
// See mfc_application_test.cpp for the implementation of this class
//

class CmfcapplicationtestApp : public CWinApp
{
public:
	CmfcapplicationtestApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CmfcapplicationtestApp theApp;
