
// IMTest.cpp : 定义应用程序的类行为。
//

#include "stdafx.h"
#include "IMTest.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CIMTestApp

BEGIN_MESSAGE_MAP(CIMTestApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CIMTestApp 构造

CIMTestApp::CIMTestApp()
{
	// 支持重新启动管理器
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_RESTART;

	// TODO:  在此处添加构造代码，
	// 将所有重要的初始化放置在 InitInstance 中
}


// 唯一的一个 CIMTestApp 对象

CIMTestApp theApp;


// CIMTestApp 初始化

BOOL CIMTestApp::InitInstance()
{
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);
	CWinApp::InitInstance();
	AfxEnableControlContainer();
	CShellManager *pShellManager = new CShellManager;
	CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerWindows));




	
	return FALSE;
}

