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
	DDX_Control(pDX, edt_mop, mop_SelectPath);
	DDX_Control(pDX, edt_cop, cop_SelectPath);
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
	mop_SelectPath.SetWindowTextW(SelectFolder());
	/*CString caption = TEXT("��ѡ����ļ���");
	::MessageBox(NULL, getPath, caption, MB_OK);*/
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
	cop_SelectPath.SetWindowTextW(SelectFolder());
}


/***********************************************************************************************************
 * �������ߣ��Խ���
 * �������ܣ�ͨ�õ��ļ���ѡ����
 * ����˵����null
 * ע�����null
 * �޸����ڣ�2015/11/18 23:32:00
 ***********************************************************************************************************/
CString ConfigPath::SelectFolder()
{
	TCHAR  szFolderPath[MAX_PATH] = { 0 };
	CString strFolderPath = TEXT("");
	BROWSEINFO sInfo;
	::ZeroMemory(&sInfo, sizeof(BROWSEINFO));
	sInfo.pidlRoot = 0;
	sInfo.lpszTitle = _T("��ѡ��һ���ļ���:");
	sInfo.ulFlags = BIF_DONTGOBELOWDOMAIN | BIF_RETURNONLYFSDIRS | BIF_EDITBOX;
	sInfo.lpfn = NULL;

	LPITEMIDLIST lpidlBrowse = ::SHBrowseForFolder(&sInfo);
	if (lpidlBrowse != NULL)
	{
		if (::SHGetPathFromIDList(lpidlBrowse, szFolderPath))
		{
			strFolderPath = szFolderPath;
		}
	}

	if (lpidlBrowse != NULL)
	{
		::CoTaskMemFree(lpidlBrowse);
	}

	return strFolderPath;
}
