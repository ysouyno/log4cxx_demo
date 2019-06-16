// mfc_library_test.cpp : Defines the initialization routines for the DLL.
//

#include "stdafx.h"
#include "mfc_library_test.h"
#include <log4cxx/logger.h>

log4cxx::LoggerPtr logger(log4cxx::Logger::getLogger("mfc_dll"));

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO: If this DLL is dynamically linked against the MFC DLLs,
//		any functions exported from this DLL which call into
//		MFC must have the AFX_MANAGE_STATE macro added at the
//		very beginning of the function.
//
//		For example:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// normal function body here
//		}
//
//		It is very important that this macro appear in each
//		function, prior to any calls into MFC.  This means that
//		it must appear as the first statement within the
//		function, even before any object variable declarations
//		as their constructors may generate calls into the MFC
//		DLL.
//
//		Please see MFC Technical Notes 33 and 58 for additional
//		details.
//

// CmfclibrarytestApp

BEGIN_MESSAGE_MAP(CmfclibrarytestApp, CWinApp)
END_MESSAGE_MAP()


// CmfclibrarytestApp construction

CmfclibrarytestApp::CmfclibrarytestApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
	LOG4CXX_INFO(logger, "CmfclibrarytestApp");
}


// The one and only CmfclibrarytestApp object

CmfclibrarytestApp theApp;


// CmfclibrarytestApp initialization

BOOL CmfclibrarytestApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}
