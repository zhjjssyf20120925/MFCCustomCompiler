// ConfigPath.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCCustomCompiler.h"
#include "ConfigPath.h"
#include "afxdialogex.h"


// ConfigPath �Ի���

IMPLEMENT_DYNAMIC(ConfigPath, CDialogEx)

ConfigPath::ConfigPath(CWnd* pParent /*=NULL*/)
	: CDialogEx(ConfigPath::IDD, pParent)
{

}

ConfigPath::~ConfigPath()
{
}

void ConfigPath::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ConfigPath, CDialogEx)
END_MESSAGE_MAP()


// ConfigPath ��Ϣ�������
