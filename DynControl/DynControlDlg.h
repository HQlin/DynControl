
// DynControlDlg.h : ͷ�ļ�
//

#pragma once


// CDynControlDlg �Ի���
class CDynControlDlg : public CDialogEx
{
// ����
public:
	CDynControlDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_DYNCONTROL_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnAdd();
	afx_msg void OnBnClickedBtnSub();


	CStatic *pPictureControl[100];		//��̬�ؼ�
	int index;							//��ǰ�ؼ���ʶ
	CRITICAL_SECTION cs;				//�ؼ�������
};



