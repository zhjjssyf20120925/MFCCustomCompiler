#pragma once

class ConfigPath : public CDialogEx																					// ConfigPath �Ի���
{
	DECLARE_DYNAMIC(ConfigPath)

public:
	ConfigPath(CWnd* pParent = NULL);																				// ��׼���캯��
	virtual ~ConfigPath();
	enum { IDD = dig_config };																						// �Ի�������

protected:
	virtual void DoDataExchange(CDataExchange* pDX);																// DDX/DDV ֧��
	DECLARE_MESSAGE_MAP()
};
