
// MenuDesign2.h : MenuDesign2 ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CMenuDesign2App:
// �� Ŭ������ ������ ���ؼ��� MenuDesign2.cpp�� �����Ͻʽÿ�.
//

class CMenuDesign2App : public CWinApp
{
public:
	CMenuDesign2App();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMenuDesign2App theApp;
