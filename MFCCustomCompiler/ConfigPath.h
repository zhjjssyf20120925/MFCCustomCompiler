#pragma once


// ConfigPath �Ի���

class ConfigPath : public CDialogEx
{
	DECLARE_DYNAMIC(ConfigPath)

public:
	ConfigPath(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ConfigPath();

// �Ի�������
	enum { IDD = dig_config };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
