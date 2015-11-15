#pragma once


// ConfigPath 对话框

class ConfigPath : public CDialogEx
{
	DECLARE_DYNAMIC(ConfigPath)

public:
	ConfigPath(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~ConfigPath();

// 对话框数据
	enum { IDD = dig_config };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
