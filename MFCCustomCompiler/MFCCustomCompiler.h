
// MFCCustomCompiler.h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"																								// 主符号


// CMFCCustomCompilerApp: 
// 有关此类的实现，请参阅 MFCCustomCompiler.cpp
//
class CMFCCustomCompilerApp : public CWinApp
{
public:
	CMFCCustomCompilerApp();

public:																												// 重写
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()																							// 实现

	afx_msg void OnOutputconfig();																					// 打开配置文件
};

extern CMFCCustomCompilerApp theApp;