// MFCCustomCompilerDlg.h : ͷ�ļ�
//

#pragma once

class CMFCCustomCompilerDlg : public CDialogEx																		// CMFCCustomCompilerDlg �Ի���
{
public:																												// ����
	CMFCCustomCompilerDlg(CWnd* pParent = NULL);																	// ��׼���캯��
	
	enum { IDD = IDD_MFCCUSTOMCOMPILER_DIALOG };																	// �Ի�������

protected:
	virtual void DoDataExchange(CDataExchange* pDX);																// DDX/DDV ֧��

protected:																											// ʵ��
	HICON m_hIcon;

	virtual BOOL OnInitDialog();																					// ���ɵ���Ϣӳ�亯��
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnOpenfile();																						// ���ļ���ť
};
