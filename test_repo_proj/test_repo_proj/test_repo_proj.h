
// test_repo_proj.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CtestrepoprojApp:
// See test_repo_proj.cpp for the implementation of this class
//

class CtestrepoprojApp : public CWinApp
{
public:
	CtestrepoprojApp();

// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CtestrepoprojApp theApp;
