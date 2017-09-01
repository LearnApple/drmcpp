#pragma once


// ChooseMedia 对话框

class ChooseMedia : public CDialogEx
{
	DECLARE_DYNAMIC(ChooseMedia)

public:
	ChooseMedia(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~ChooseMedia();

// 对话框数据
	enum { IDD = MediaEncrypt };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()

	
public:
	afx_msg void OnBnClickedchoosemedia();
	afx_msg void OnEnChangekey();
	afx_msg void OnBnDoubleclickedchoosemedia();
	afx_msg void OnBnClickedencrypt();
	afx_msg void OnBnClickedOk();
};
