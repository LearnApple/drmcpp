// ChooseMedia.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "drm.h"
#include "ChooseMedia.h"
#include "afxdialogex.h"


// ChooseMedia �Ի���

IMPLEMENT_DYNAMIC(ChooseMedia, CDialogEx)

ChooseMedia::ChooseMedia(CWnd* pParent /*=NULL*/)
	: CDialogEx(ChooseMedia::IDD, pParent)
{

}

ChooseMedia::~ChooseMedia()
{
}

void ChooseMedia::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ChooseMedia, CDialogEx)
	ON_BN_CLICKED(chooseMedia, &ChooseMedia::OnBnClickedchoosemedia)
	ON_EN_CHANGE(key, &ChooseMedia::OnEnChangekey)
	ON_BN_DOUBLECLICKED(chooseMedia, &ChooseMedia::OnBnDoubleclickedchoosemedia)
	ON_BN_CLICKED(encrypt, &ChooseMedia::OnBnClickedencrypt)
	ON_BN_CLICKED(IDOK, &ChooseMedia::OnBnClickedOk)
END_MESSAGE_MAP()


// ChooseMedia ��Ϣ�������


void ChooseMedia::OnBnClickedchoosemedia()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������

}


void ChooseMedia::OnEnChangekey()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void ChooseMedia::OnBnDoubleclickedchoosemedia()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������

}


void ChooseMedia::OnBnClickedencrypt()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������

}


void ChooseMedia::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnOK();
}
