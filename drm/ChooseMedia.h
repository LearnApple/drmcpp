#pragma once


// ChooseMedia �Ի���

class ChooseMedia : public CDialogEx
{
	DECLARE_DYNAMIC(ChooseMedia)

public:
	ChooseMedia(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ChooseMedia();

// �Ի�������
	enum { IDD = MediaEncrypt };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()

	
public:
	afx_msg void OnBnClickedchoosemedia();
	afx_msg void OnEnChangekey();
	afx_msg void OnBnDoubleclickedchoosemedia();
	afx_msg void OnBnClickedencrypt();
	afx_msg void OnBnClickedOk();
};
