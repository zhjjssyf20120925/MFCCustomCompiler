
// MFCCustomCompiler.cpp : ����Ӧ�ó��������Ϊ��
//
#include "stdafx.h"
#include "MFCCustomCompiler.h"
#include "MFCCustomCompilerDlg.h"
#include "ConfigPath.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

/***********************************************************************************************************
 * �������ߣ��Խ���
 * �������ܣ���Ϣ��ͼ(CMFCCustomCompilerApp)
 * ����˵����null
 * ע�����null
 * �޸����ڣ�2015/11/15 23:03:00
 ***********************************************************************************************************/
BEGIN_MESSAGE_MAP(CMFCCustomCompilerApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
	ON_COMMAND(ID_OUTPUTConfig, &CMFCCustomCompilerApp::OnOutputconfig)
	ON_COMMAND(ID_SAVEFILE, &CMFCCustomCompilerApp::OnSavefile)
	ON_COMMAND(ID_MICRSOFT, &CMFCCustomCompilerApp::OnMicrsoft)
	ON_COMMAND(ID_CODEBLOCKS, &CMFCCustomCompilerApp::OnCodeblocks)
END_MESSAGE_MAP()


/***********************************************************************************************************
 * �������ߣ��Խ���
 * �������ܣ�CMFCCustomCompilerApp ����
 * ����˵����null
 * ע�����null
 * �޸����ڣ�2015/11/15 22:29:00
 ***********************************************************************************************************/
CMFCCustomCompilerApp::CMFCCustomCompilerApp()
{
	// ֧����������������
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_RESTART;

	// TODO:  �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


/***********************************************************************************************************
 * �������ߣ��Խ���
 * �������ܣ�Ψһ��һ�� CMFCCustomCompilerApp ����
 * ע�����null
 * �޸����ڣ�2015/11/15 23:00:00
 ***********************************************************************************************************/
CMFCCustomCompilerApp theApp;


/***********************************************************************************************************
 * �������ߣ��Խ���
 * �������ܣ�CMFCCustomCompilerApp ��ʼ��
 * ����˵����null
 * ע�����null
 * �޸����ڣ�2015/11/15 22:28:00
 ***********************************************************************************************************/
BOOL CMFCCustomCompilerApp::InitInstance()
{
	// ���һ�������� Windows XP �ϵ�Ӧ�ó����嵥ָ��Ҫ
	// ʹ�� ComCtl32.dll �汾 6 ����߰汾�����ÿ��ӻ���ʽ��
	//����Ҫ InitCommonControlsEx()��  ���򣬽��޷��������ڡ�
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// ��������Ϊ��������Ҫ��Ӧ�ó�����ʹ�õ�
	// �����ؼ��ࡣ
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();


	AfxEnableControlContainer();

	// ���� shell ���������Է��Ի������
	// �κ� shell ����ͼ�ؼ��� shell �б���ͼ�ؼ���
	CShellManager *pShellManager = new CShellManager;

	// ���Windows Native���Ӿ����������Ա��� MFC �ؼ�����������
	CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerWindows));

	// ��׼��ʼ��
	// ���δʹ����Щ���ܲ�ϣ����С
	// ���տ�ִ���ļ��Ĵ�С����Ӧ�Ƴ�����
	// ����Ҫ���ض���ʼ������
	// �������ڴ洢���õ�ע�����
	// TODO:  Ӧ�ʵ��޸ĸ��ַ�����
	// �����޸�Ϊ��˾����֯��
	SetRegistryKey(_T("Ӧ�ó��������ɵı���Ӧ�ó���"));

	CMFCCustomCompilerDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO:  �ڴ˷��ô����ʱ��
		//  ��ȷ�������رնԻ���Ĵ���
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO:  �ڴ˷��ô����ʱ��
		//  ��ȡ�������رնԻ���Ĵ���
	}
	else if (nResponse == -1)
	{
		TRACE(traceAppMsg, 0, "����: �Ի��򴴽�ʧ�ܣ�Ӧ�ó���������ֹ��\n");
		TRACE(traceAppMsg, 0, "����: ������ڶԻ�����ʹ�� MFC �ؼ������޷� #define _AFX_NO_MFC_CONTROLS_IN_DIALOGS��\n");
	}

	// ɾ�����洴���� shell ��������
	if (pShellManager != NULL)
	{
		delete pShellManager;
	}

	// ���ڶԻ����ѹرգ����Խ����� FALSE �Ա��˳�Ӧ�ó���
	//  ����������Ӧ�ó������Ϣ�á�
	return FALSE;
}


/***********************************************************************************************************
 * �������ߣ��Խ���
 * �������ܣ��������ļ�
 * ����˵����null
 * ע�����null
 * �޸����ڣ�2015/11/18 23:00:00
 ***********************************************************************************************************/
void CMFCCustomCompilerApp::OnOutputconfig()
{
	ConfigPath cp;
	cp.DoModal();
}


/***********************************************************************************************************
 * �������ߣ��Խ���
 * �������ܣ������ļ���ť
 * ����˵����null
 * ע�����null
 * �޸����ڣ�2015/11/18 23:12:00
 ***********************************************************************************************************/
void CMFCCustomCompilerApp::OnSavefile()
{

}


/***********************************************************************************************************
 * �������ߣ��Խ���
 * �������ܣ�Microsoft �������
 * ����˵����null
 * ע�����null
 * �޸����ڣ�2015/11/18 23:13:00
 ***********************************************************************************************************/
void CMFCCustomCompilerApp::OnMicrsoft()
{

}


/***********************************************************************************************************
 * �������ߣ��Խ���
 * �������ܣ�CodeBlocks �������
 * ����˵����null
 * ע�����null
 * �޸����ڣ�2015/11/18 23:14:00
 ***********************************************************************************************************/
void CMFCCustomCompilerApp::OnCodeblocks()
{

}
