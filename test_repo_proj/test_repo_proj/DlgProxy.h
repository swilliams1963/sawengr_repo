
// DlgProxy.h: header file
//

#pragma once

class CtestrepoprojDlg;


// CtestrepoprojDlgAutoProxy command target

class CtestrepoprojDlgAutoProxy : public CCmdTarget
{
	DECLARE_DYNCREATE(CtestrepoprojDlgAutoProxy)

	CtestrepoprojDlgAutoProxy();           // protected constructor used by dynamic creation

// Attributes
public:
	CtestrepoprojDlg* m_pDialog;

// Operations
public:

// Overrides
	public:
	virtual void OnFinalRelease();

// Implementation
protected:
	virtual ~CtestrepoprojDlgAutoProxy();

	// Generated message map functions

	DECLARE_MESSAGE_MAP()
	DECLARE_OLECREATE(CtestrepoprojDlgAutoProxy)

	// Generated OLE dispatch map functions

	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};

