// MFCCustomCompilerDlg.h : 头文件
//

#pragma once

class CMFCCustomCompilerDlg : public CDialogEx																		// CMFCCustomCompilerDlg 对话框
{
public:																												// 构造
	CMFCCustomCompilerDlg(CWnd* pParent = NULL);																	// 标准构造函数
	
	enum { IDD = IDD_MFCCUSTOMCOMPILER_DIALOG };																	// 对话框数据

protected:
	virtual void DoDataExchange(CDataExchange* pDX);																// DDX/DDV 支持

protected:																											// 实现
	HICON m_hIcon;

	virtual BOOL OnInitDialog();																					// 生成的消息映射函数
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnOpenfile();																						// 打开文件按钮
};
