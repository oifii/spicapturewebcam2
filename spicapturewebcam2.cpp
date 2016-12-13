/*
 * Copyright (c) 2010-2016 Stephane Poirier
 *
 * stephane.poirier@oifii.org
 *
 * Stephane Poirier
 * 3532 rue Ste-Famille, #3
 * Montreal, QC, H2X 2L1
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// spicapturewebcam2.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "spicapturewebcam2.h"

#define MAX_LOADSTRING 100

/*
// Global Variables:
HINSTANCE hInst;								// current instance
TCHAR szTitle[MAX_LOADSTRING];					// The title bar text
TCHAR szWindowClass[MAX_LOADSTRING];			// the main window class name

// Forward declarations of functions included in this code module:
ATOM				MyRegisterClass(HINSTANCE hInstance);
BOOL				InitInstance(HINSTANCE, int);
LRESULT CALLBACK	WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK	About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY _tWinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR    lpCmdLine,
                     int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

 	// TODO: Place code here.
	MSG msg;
	HACCEL hAccelTable;

	// Initialize global strings
	LoadString(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
	LoadString(hInstance, IDC_SPICAPTUREWEBCAM2, szWindowClass, MAX_LOADSTRING);
	MyRegisterClass(hInstance);

	// Perform application initialization:
	if (!InitInstance (hInstance, nCmdShow))
	{
		return FALSE;
	}

	hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_SPICAPTUREWEBCAM2));

	// Main message loop:
	while (GetMessage(&msg, NULL, 0, 0))
	{
		if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}

	return (int) msg.wParam;
}



//
//  FUNCTION: MyRegisterClass()
//
//  PURPOSE: Registers the window class.
//
//  COMMENTS:
//
//    This function and its usage are only necessary if you want this code
//    to be compatible with Win32 systems prior to the 'RegisterClassEx'
//    function that was added to Windows 95. It is important to call this function
//    so that the application will get 'well formed' small icons associated
//    with it.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
	WNDCLASSEX wcex;

	wcex.cbSize = sizeof(WNDCLASSEX);

	wcex.style			= CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc	= WndProc;
	wcex.cbClsExtra		= 0;
	wcex.cbWndExtra		= 0;
	wcex.hInstance		= hInstance;
	wcex.hIcon			= LoadIcon(hInstance, MAKEINTRESOURCE(IDI_SPICAPTUREWEBCAM2));
	wcex.hCursor		= LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground	= (HBRUSH)(COLOR_WINDOW+1);
	wcex.lpszMenuName	= MAKEINTRESOURCE(IDC_SPICAPTUREWEBCAM2);
	wcex.lpszClassName	= szWindowClass;
	wcex.hIconSm		= LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

	return RegisterClassEx(&wcex);
}

//
//   FUNCTION: InitInstance(HINSTANCE, int)
//
//   PURPOSE: Saves instance handle and creates main window
//
//   COMMENTS:
//
//        In this function, we save the instance handle in a global variable and
//        create and display the main program window.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   HWND hWnd;

   hInst = hInstance; // Store instance handle in our global variable

   hWnd = CreateWindow(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, NULL, NULL, hInstance, NULL);

   if (!hWnd)
   {
      return FALSE;
   }

   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);

   return TRUE;
}

//
//  FUNCTION: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  PURPOSE:  Processes messages for the main window.
//
//  WM_COMMAND	- process the application menu
//  WM_PAINT	- Paint the main window
//  WM_DESTROY	- post a quit message and return
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	int wmId, wmEvent;
	PAINTSTRUCT ps;
	HDC hdc;

	switch (message)
	{
	case WM_COMMAND:
		wmId    = LOWORD(wParam);
		wmEvent = HIWORD(wParam);
		// Parse the menu selections:
		switch (wmId)
		{
		case IDM_ABOUT:
			DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
			break;
		case IDM_EXIT:
			DestroyWindow(hWnd);
			break;
		default:
			return DefWindowProc(hWnd, message, wParam, lParam);
		}
		break;
	case WM_PAINT:
		hdc = BeginPaint(hWnd, &ps);
		// TODO: Add any drawing code here...
		EndPaint(hWnd, &ps);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
}

// Message handler for about box.
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
	UNREFERENCED_PARAMETER(lParam);
	switch (message)
	{
	case WM_INITDIALOG:
		return (INT_PTR)TRUE;

	case WM_COMMAND:
		if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
		{
			EndDialog(hDlg, LOWORD(wParam));
			return (INT_PTR)TRUE;
		}
		break;
	}
	return (INT_PTR)FALSE;
}
*/


#include <windows.h>
#include <dshow.h>
#include <streams.h>

int w,h; HWND hwnd; MSG msg = {0}; BITMAPINFOHEADER bmih={0}; 

struct __declspec(  uuid("{71771540-2017-11cf-ae26-0020afd79767}")  ) CLSID_Sampler;

struct Sampler : public CBaseVideoRenderer {
    Sampler( IUnknown* unk, HRESULT *hr ) : CBaseVideoRenderer(__uuidof(CLSID_Sampler), NAME("Frame Sampler"), unk, hr) {};
    HRESULT CheckMediaType(const CMediaType *media ) {    
        VIDEOINFO* vi; if(!IsEqualGUID( *media->Subtype(), MEDIASUBTYPE_RGB24) || !(vi=(VIDEOINFO *)media->Format()) ) return E_FAIL;
        bmih=vi->bmiHeader;	SetWindowPos(hwnd,0,0,0,20+(w=vi->bmiHeader.biWidth),60+(h=vi->bmiHeader.biHeight),SWP_NOZORDER|SWP_NOMOVE);
        return  S_OK;
    }
    HRESULT DoRenderSample(IMediaSample *sample){
        BYTE* data; sample->GetPointer( &data ); 
        // Process RGB Frame data* here. For Example: ZeroMemory(data+w*h,w*h);
        BITMAPINFO bmi={0}; bmi.bmiHeader=bmih; RECT r; GetClientRect( hwnd, &r );
        HDC dc=GetDC(hwnd);
        StretchDIBits(dc,0,16,r.right,r.bottom-16,0,0,w,h,data,&bmi,DIB_RGB_COLORS,SRCCOPY);
        //ReleaseDC(dc);
		ReleaseDC(hwnd, dc); //spi
        return  S_OK;
    }
    HRESULT ShouldDrawSampleNow(IMediaSample *sample, REFERENCE_TIME *start, REFERENCE_TIME *stop) {
        return S_OK; // disable droping of frames
    }
};

int WINAPI WinMain(HINSTANCE inst,HINSTANCE prev,LPSTR cmd,int show){
    HRESULT hr = CoInitialize(0);
    //hwnd=CreateWindowEx(0,"LISTBOX",0,WS_SIZEBOX,0,0,0,0,0,0,0,0); 
    hwnd=CreateWindowEx(0,L"LISTBOX",0,WS_SIZEBOX,0,0,0,0,0,0,0,0); //spi
           
    IGraphBuilder*  graph= 0; hr = CoCreateInstance( CLSID_FilterGraph, 0, CLSCTX_INPROC,IID_IGraphBuilder, (void **)&graph );
    IMediaControl*  ctrl = 0; hr = graph->QueryInterface( IID_IMediaControl, (void **)&ctrl );

    Sampler*        sampler      = new Sampler(0,&hr); 
    IPin*           rnd  = 0; hr = sampler->FindPin(L"In", &rnd);
                              hr = graph->AddFilter((IBaseFilter*)sampler, L"Sampler");

    ICreateDevEnum* devs = 0; hr = CoCreateInstance (CLSID_SystemDeviceEnum, 0, CLSCTX_INPROC, IID_ICreateDevEnum, (void **) &devs);
    IEnumMoniker*   cams = 0; hr = devs?devs->CreateClassEnumerator (CLSID_VideoInputDeviceCategory, &cams, 0):0;  
    IMoniker*       mon  = 0; hr = cams?cams->Next (1, &mon, 0):0;
    IBaseFilter*    cam  = 0; hr = mon?mon->BindToObject(0,0,IID_IBaseFilter, (void**)&cam):0;
    IEnumPins*      pins = 0; hr = cam?cam->EnumPins(&pins):0; 
    IPin*           cap  = 0; hr = pins?pins->Next(1,&cap, 0):0;
                              hr = graph->AddFilter(cam, L"Capture Source"); 

    IBaseFilter*    vid  = 0; hr = graph->AddSourceFilter (L"c:\\Windows\\clock.avi", L"File Source", &vid);
    IPin*           avi  = 0; hr = vid?vid->FindPin(L"Output", &avi):0;

    hr = graph->Connect(cap?cap:avi,rnd);
    hr = graph->Render( cap?cap:avi );
    hr = ctrl->Run();
    SendMessage(hwnd, LB_ADDSTRING, 0, (long)(cap?"Capture source ...":"File source ..."));
    ShowWindow(hwnd,SW_SHOW);

    while ( msg.message != WM_QUIT) {  
        if( PeekMessage(      &msg, 0, 0, 0, PM_REMOVE ) ) {
            TranslateMessage( &msg );   
            DispatchMessage(  &msg ); 
            if(msg.message == WM_KEYDOWN && msg.wParam==VK_ESCAPE ) break;
        }   Sleep(30);
    }
};