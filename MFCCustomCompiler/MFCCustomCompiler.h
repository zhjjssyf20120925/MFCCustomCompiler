
// MFCCustomCompiler.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFCCustomCompilerApp: 
// �йش����ʵ�֣������ MFCCustomCompiler.cpp
//

class CMFCCustomCompilerApp : public CWinApp
{
public:
	CMFCCustomCompilerApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFCCustomCompilerApp theApp;