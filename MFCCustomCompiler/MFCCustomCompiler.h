
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
	afx_msg void OnSavefile();																						// 保存文件
	afx_msg void OnMicrsoft();																						// Microsoft 编译代码
	afx_msg void OnCodeblocks();																					// CodeBlocks 编译代码
};

extern CMFCCustomCompilerApp theApp;