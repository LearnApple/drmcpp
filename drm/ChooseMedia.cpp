// ChooseMedia.cpp : 实现文件
//

#include "stdafx.h"
#include "drm.h"
#include "ChooseMedia.h"
#include "afxdialogex.h"


// ChooseMedia 对话框

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


// ChooseMedia 消息处理程序


void ChooseMedia::OnBnClickedchoosemedia()
{
	// TODO:  在此添加控件通知处理程序代码

}


void ChooseMedia::OnEnChangekey()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void ChooseMedia::OnBnDoubleclickedchoosemedia()
{
	// TODO:  在此添加控件通知处理程序代码

}


void ChooseMedia::OnBnClickedencrypt()
{
	// TODO:  在此添加控件通知处理程序代码

}


void ChooseMedia::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}
