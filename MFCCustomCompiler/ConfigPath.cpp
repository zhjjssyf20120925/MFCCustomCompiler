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
	ON_BN_CLICKED(btn_mop, &ConfigPath::OnBnClickedmop)
	ON_BN_CLICKED(btn_cop, &ConfigPath::OnBnClickedcop)
END_MESSAGE_MAP()


// ConfigPath ��Ϣ�������


/***********************************************************************************************************
 * �������ߣ��Խ���
 * �������ܣ�Microsoft ��������ļ��ĵ�ַ
 * ����˵����null
 * ע�����null
 * �޸����ڣ�2015/11/18 23:30:00
 ***********************************************************************************************************/
void ConfigPath::OnBnClickedmop()
{
	SelectFilePath();
}


/***********************************************************************************************************
 * �������ߣ��Խ���
 * �������ܣ�CodeBlocks ��������ļ��ĵ�ַ
 * ����˵����null
 * ע�����null
 * �޸����ڣ�2015/11/18 23:31:00
 ***********************************************************************************************************/
void ConfigPath::OnBnClickedcop()
{
	SelectFilePath();
}


/***********************************************************************************************************
 * �������ߣ��Խ���
 * �������ܣ�ͨ�õ��ļ���ѡ����
 * ����˵����null
 * ע�����null
 * �޸����ڣ�2015/11/18 23:32:00
 ***********************************************************************************************************/
char* ConfigPath::SelectFilePath()
{
	return NULL;
}
