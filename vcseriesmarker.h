#if !defined(AFX_VCSERIESMARKER_H__69465C07_E16F_4388_9375_76F6821C7382__INCLUDED_)
#define AFX_VCSERIESMARKER_H__69465C07_E16F_4388_9375_76F6821C7382__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CVcSeriesMarker wrapper class

class CVcSeriesMarker : public COleDispatchDriver
{
public:
	CVcSeriesMarker() {}		// Calls COleDispatchDriver default constructor
	CVcSeriesMarker(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CVcSeriesMarker(const CVcSeriesMarker& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetAuto();
	void SetAuto(BOOL bNewValue);
	BOOL GetShow();
	void SetShow(BOOL bNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VCSERIESMARKER_H__69465C07_E16F_4388_9375_76F6821C7382__INCLUDED_)