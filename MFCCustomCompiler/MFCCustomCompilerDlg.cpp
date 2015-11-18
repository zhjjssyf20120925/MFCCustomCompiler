
// MFCCustomCompilerDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCCustomCompiler.h"
#include "MFCCustomCompilerDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


//class CAboutDlg : public CDialogEx																					// 用于应用程序“关于”菜单项的 CAboutDlg 对话框
//{
//public:
//	CAboutDlg();
//
//	enum																										    // 对话框数据
//	{
//		IDD = dig_config
//	};
//
//protected:
//	virtual void DoDataExchange(CDataExchange* pDX);																// DDX/DDV 支持
//
//protected:																											// 实现
//	DECLARE_MESSAGE_MAP()
//public:
//	afx_msg void OnOpenfile();																						// OpenFile 按钮事件
//};
//
//CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
//{
//}

//void CAboutDlg::DoDataExchange(CDataExchange* pDX)
//{
//	CDialogEx::DoDataExchange(pDX);
//}
//
//BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
//	ON_COMMAND(ID_OPENFILE, &CAboutDlg::OnOpenfile)
//END_MESSAGE_MAP()


CMFCCustomCompilerDlg::CMFCCustomCompilerDlg(CWnd* pParent /*=NULL*/)												// CMFCCustomCompilerDlg 对话框
	: CDialogEx(CMFCCustomCompilerDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCCustomCompilerDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMFCCustomCompilerDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_COMMAND(ID_OPENFILE, &CMFCCustomCompilerDlg::OnOpenfile)
END_MESSAGE_MAP()


/***********************************************************************************************************
 * 程序作者：赵进军
 * 函数功能：CMFCCustomCompilerDlg 消息处理程序
 * 参数说明：null
 * 注意事项：null
 * 修改日期：2015/11/18 21:41:00
 ***********************************************************************************************************/
BOOL CMFCCustomCompilerDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);																							// 设置大图标
	SetIcon(m_hIcon, FALSE);																						// 设置小图标

	// TODO:  在此添加额外的初始化代码

	return TRUE;																									// 除非将焦点设置到控件，否则返回 TRUE
}

void CMFCCustomCompilerDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		//CAboutDlg dlgAbout;
		//dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

/***********************************************************************************************************
 * 程序作者：赵进军
 * 函数功能：如果向对话框添加最小化按钮，则需要下面的代码
 *           来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，这将由框架自动完成。
 * 参数说明：null
 * 注意事项：null
 * 修改日期：2015/11/18 22:45:00
 ***********************************************************************************************************/
void CMFCCustomCompilerDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this);																							// 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		int cxIcon = GetSystemMetrics(SM_CXICON);																	// 使图标在工作区矩形中居中
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		dc.DrawIcon(x, y, m_hIcon);																					// 绘制图标
	}
	else
	{
		CDialogEx::OnPaint();
	}
}


/***********************************************************************************************************
 * 程序作者：赵进军
 * 函数功能：当用户拖动最小化窗口时系统调用此函数取得光标显示。
 * 参数说明：null
 * 注意事项：null
 * 修改日期：2015/11/18 23:05:00
 ***********************************************************************************************************/
HCURSOR CMFCCustomCompilerDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


/***********************************************************************************************************
 * 程序作者：赵进军
 * 函数功能：打开文件按钮
 * 参数说明：null
 * 注意事项：null
 * 修改日期：2015/11/18 23:05:00
 ***********************************************************************************************************/
void CMFCCustomCompilerDlg::OnOpenfile()
{
	// TODO:  在此添加命令处理程序代码
	int i = 0;
}
