
// IMTest.cpp : ����Ӧ�ó��������Ϊ��
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


// CIMTestApp ����

CIMTestApp::CIMTestApp()
{
	// ֧����������������
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_RESTART;

	// TODO:  �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� CIMTestApp ����

CIMTestApp theApp;


// CIMTestApp ��ʼ��

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

