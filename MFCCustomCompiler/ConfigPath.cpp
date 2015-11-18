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
	SelectFilePath();
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
	SelectFilePath();
}


/***********************************************************************************************************
 * 程序作者：赵进军
 * 函数功能：通用的文件夹选择函数
 * 参数说明：null
 * 注意事项：null
 * 修改日期：2015/11/18 23:32:00
 ***********************************************************************************************************/
char* ConfigPath::SelectFilePath()
{
	return NULL;
}
