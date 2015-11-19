// ConfigPath.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCCustomCompiler.h"
#include "ConfigPath.h"
#include "afxdialogex.h"


// ConfigPath 对话框

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


// ConfigPath 消息处理程序


/***********************************************************************************************************
 * 程序作者：赵进军
 * 函数功能：Microsoft 编译输出文件的地址
 * 参数说明：null
 * 注意事项：null
 * 修改日期：2015/11/18 23:30:00
 ***********************************************************************************************************/
void ConfigPath::OnBnClickedmop()
{
	mop_SelectPath.SetWindowTextW(SelectFolder());
	/*CString caption = TEXT("你选择的文件夹");
	::MessageBox(NULL, getPath, caption, MB_OK);*/
}


/***********************************************************************************************************
 * 程序作者：赵进军
 * 函数功能：CodeBlocks 编译输出文件的地址
 * 参数说明：null
 * 注意事项：null
 * 修改日期：2015/11/18 23:31:00
 ***********************************************************************************************************/
void ConfigPath::OnBnClickedcop()
{
	cop_SelectPath.SetWindowTextW(SelectFolder());
}


/***********************************************************************************************************
 * 程序作者：赵进军
 * 函数功能：通用的文件夹选择函数
 * 参数说明：null
 * 注意事项：null
 * 修改日期：2015/11/18 23:32:00
 ***********************************************************************************************************/
CString ConfigPath::SelectFolder()
{
	TCHAR  szFolderPath[MAX_PATH] = { 0 };
	CString strFolderPath = TEXT("");
	BROWSEINFO sInfo;
	::ZeroMemory(&sInfo, sizeof(BROWSEINFO));
	sInfo.pidlRoot = 0;
	sInfo.lpszTitle = _T("请选择一个文件夹:");
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
