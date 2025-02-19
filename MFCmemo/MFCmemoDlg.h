﻿
// MFCmemoDlg.h: 헤더 파일
//

#pragma once


// CMFCmemoDlg 대화 상자
class CMFCmemoDlg : public CDialogEx
{
// 생성입니다.
public:
	CMFCmemoDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCMEMO_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedBtnTest();
	// TB_MEMO1의 입력 테스트 내용
	//CString strMemo;
	CEdit CMemo2;
	CEdit CMemo1;
//	afx_msg void OnBnClickedCancel();
//	afx_msg void OnBnClickedCheck1();
	
	afx_msg void OnMnuViewLower();
	afx_msg void OnMnuViewUpper();
	afx_msg void OnMnuViewHexa();
	afx_msg void OnMnuExit();
	afx_msg void OnEnChangeTbMemo1();
	afx_msg void OnMnuFileOpen();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	
	afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);
	afx_msg void OnBnClickedBtnCalltest();
};
