#pragma once

class ConfigPath : public CDialogEx																					// ConfigPath 对话框
{
	DECLARE_DYNAMIC(ConfigPath)

public:
	ConfigPath(CWnd* pParent = NULL);																				// 标准构造函数
	virtual ~ConfigPath();
	enum { IDD = dig_config };																						// 对话框数据

protected:
	virtual void DoDataExchange(CDataExchange* pDX);																// DDX/DDV 支持
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedmop();
	afx_msg void OnBnClickedcop();
private:
	char* SelectFilePath();
};
