
// DlgProxy.cpp : implementation file
//

#include "stdafx.h"
#include "test_repo_proj.h"
#include "DlgProxy.h"
#include "test_repo_projDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CtestrepoprojDlgAutoProxy

IMPLEMENT_DYNCREATE(CtestrepoprojDlgAutoProxy, CCmdTarget)

CtestrepoprojDlgAutoProxy::CtestrepoprojDlgAutoProxy()
{
	EnableAutomation();

	// To keep the application running as long as an automation
	//	object is active, the constructor calls AfxOleLockApp.
	AfxOleLockApp();

	// Get access to the dialog through the application's
	//  main window pointer.  Set the proxy's internal pointer
	//  to point to the dialog, and set the dialog's back pointer to
	//  this proxy.
	ASSERT_VALID(AfxGetApp()->m_pMainWnd);
	if (AfxGetApp()->m_pMainWnd)
	{
		ASSERT_KINDOF(CtestrepoprojDlg, AfxGetApp()->m_pMainWnd);
		if (AfxGetApp()->m_pMainWnd->IsKindOf(RUNTIME_CLASS(CtestrepoprojDlg)))
		{
			m_pDialog = reinterpret_cast<CtestrepoprojDlg*>(AfxGetApp()->m_pMainWnd);
			m_pDialog->m_pAutoProxy = this;
		}
	}
}

CtestrepoprojDlgAutoProxy::~CtestrepoprojDlgAutoProxy()
{
	// To terminate the application when all objects created with
	// 	with automation, the destructor calls AfxOleUnlockApp.
	//  Among other things, this will destroy the main dialog
	if (m_pDialog != NULL)
		m_pDialog->m_pAutoProxy = NULL;
	AfxOleUnlockApp();
}

void CtestrepoprojDlgAutoProxy::OnFinalRelease()
{
	// When the last reference for an automation object is released
	// OnFinalRelease is called.  The base class will automatically
	// deletes the object.  Add additional cleanup required for your
	// object before calling the base class.

	CCmdTarget::OnFinalRelease();
}

BEGIN_MESSAGE_MAP(CtestrepoprojDlgAutoProxy, CCmdTarget)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CtestrepoprojDlgAutoProxy, CCmdTarget)
END_DISPATCH_MAP()

// Note: we add support for IID_Itest_repo_proj to support typesafe binding
//  from VBA.  This IID must match the GUID that is attached to the
//  dispinterface in the .IDL file.

// {9dd28dfe-fff9-4225-8435-4679b85fac41}
static const IID IID_Itest_repo_proj =
{0x9dd28dfe,0xfff9,0x4225,{0x84,0x35,0x46,0x79,0xb8,0x5f,0xac,0x41}};

BEGIN_INTERFACE_MAP(CtestrepoprojDlgAutoProxy, CCmdTarget)
	INTERFACE_PART(CtestrepoprojDlgAutoProxy, IID_Itest_repo_proj, Dispatch)
END_INTERFACE_MAP()

// The IMPLEMENT_OLECREATE2 macro is defined in StdAfx.h of this project
// {bce62923-75e0-4093-a9e4-99d31a37c299}
IMPLEMENT_OLECREATE2(CtestrepoprojDlgAutoProxy, "test_repo_proj.Application", 0xbce62923,0x75e0,0x4093,0xa9,0xe4,0x99,0xd3,0x1a,0x37,0xc2,0x99)


// CtestrepoprojDlgAutoProxy message handlers
