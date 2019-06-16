// mfc_library_test.h : main header file for the mfc_library_test DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CmfclibrarytestApp
// See mfc_library_test.cpp for the implementation of this class
//

class CmfclibrarytestApp : public CWinApp
{
public:
	CmfclibrarytestApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
