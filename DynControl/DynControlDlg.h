
// DynControlDlg.h : 头文件
//

#pragma once


// CDynControlDlg 对话框
class CDynControlDlg : public CDialogEx
{
// 构造
public:
	CDynControlDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_DYNCONTROL_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnAdd();
	afx_msg void OnBnClickedBtnSub();


	CStatic *pPictureControl[100];		//动态控件
	int index;							//当前控件标识
	CRITICAL_SECTION cs;				//控件增减锁
};



