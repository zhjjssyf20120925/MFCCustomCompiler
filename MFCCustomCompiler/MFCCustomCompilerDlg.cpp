
// MFCCustomCompilerDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCCustomCompiler.h"
#include "MFCCustomCompilerDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


//class CAboutDlg : public CDialogEx																					// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���
//{
//public:
//	CAboutDlg();
//
//	enum																										    // �Ի�������
//	{
//		IDD = dig_config
//	};
//
//protected:
//	virtual void DoDataExchange(CDataExchange* pDX);																// DDX/DDV ֧��
//
//protected:																											// ʵ��
//	DECLARE_MESSAGE_MAP()
//public:
//	afx_msg void OnOpenfile();																						// OpenFile ��ť�¼�
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


CMFCCustomCompilerDlg::CMFCCustomCompilerDlg(CWnd* pParent /*=NULL*/)												// CMFCCustomCompilerDlg �Ի���
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
 * �������ߣ��Խ���
 * �������ܣ�CMFCCustomCompilerDlg ��Ϣ�������
 * ����˵����null
 * ע�����null
 * �޸����ڣ�2015/11/18 21:41:00
 ***********************************************************************************************************/
BOOL CMFCCustomCompilerDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
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

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);																							// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);																						// ����Сͼ��

	// TODO:  �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;																									// ���ǽ��������õ��ؼ������򷵻� TRUE
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
 * �������ߣ��Խ���
 * �������ܣ������Ի��������С����ť������Ҫ����Ĵ���
 *           �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó����⽫�ɿ���Զ���ɡ�
 * ����˵����null
 * ע�����null
 * �޸����ڣ�2015/11/18 22:45:00
 ***********************************************************************************************************/
void CMFCCustomCompilerDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this);																							// ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		int cxIcon = GetSystemMetrics(SM_CXICON);																	// ʹͼ���ڹ����������о���
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		dc.DrawIcon(x, y, m_hIcon);																					// ����ͼ��
	}
	else
	{
		CDialogEx::OnPaint();
	}
}


/***********************************************************************************************************
 * �������ߣ��Խ���
 * �������ܣ����û��϶���С������ʱϵͳ���ô˺���ȡ�ù����ʾ��
 * ����˵����null
 * ע�����null
 * �޸����ڣ�2015/11/18 23:05:00
 ***********************************************************************************************************/
HCURSOR CMFCCustomCompilerDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


/***********************************************************************************************************
 * �������ߣ��Խ���
 * �������ܣ����ļ���ť
 * ����˵����null
 * ע�����null
 * �޸����ڣ�2015/11/18 23:05:00
 ***********************************************************************************************************/
void CMFCCustomCompilerDlg::OnOpenfile()
{
	// TODO:  �ڴ���������������
	int i = 0;
}
