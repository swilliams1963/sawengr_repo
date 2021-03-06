
// test_repo_projDlg.h : header file
//

#pragma once

class CtestrepoprojDlgAutoProxy;


// CtestrepoprojDlg dialog
class CtestrepoprojDlg : public CDialog
{
	DECLARE_DYNAMIC(CtestrepoprojDlg);
	friend class CtestrepoprojDlgAutoProxy;

// Construction
public:
	CtestrepoprojDlg(CWnd* pParent = NULL);	// standard constructor
	virtual ~CtestrepoprojDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TEST_REPO_PROJ_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	CtestrepoprojDlgAutoProxy* m_pAutoProxy;
	HICON m_hIcon;

	BOOL CanExit();

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnClose();
	virtual void OnOK();
	virtual void OnCancel();
	DECLARE_MESSAGE_MAP()
};
