
// MFCCustomCompiler.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"																								// ������


// CMFCCustomCompilerApp: 
// �йش����ʵ�֣������ MFCCustomCompiler.cpp
//
class CMFCCustomCompilerApp : public CWinApp
{
public:
	CMFCCustomCompilerApp();

public:																												// ��д
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()																							// ʵ��

	afx_msg void OnOutputconfig();																					// �������ļ�
	afx_msg void OnSavefile();																						// �����ļ�
	afx_msg void OnMicrsoft();																						// Microsoft �������
	afx_msg void OnCodeblocks();																					// CodeBlocks �������
};

extern CMFCCustomCompilerApp theApp;