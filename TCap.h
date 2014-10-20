// TCap.h

#ifndef __T_CAP__
#define __T_CAP__

// キャプチャ モード
typedef enum {
	TCMODE_WINDOW = 0,  // ウィンドウ全体
	TCMODE_CLIENT = 1   // クライアント領域のみ
} TCAP_MODE;

// エラーコード
typedef enum {
	TCERROR_NONE = 0,  // エラーなし
	TCERROR_CAPTURE_FAILED = 1,   // キャプチャ失敗
	TCERROR_WRITE_FAILED   = 2,   // 書き込み失敗
	TCERROR_INVALID_MODE   = 10,  // 無効なキャプチャモード
	TCERROR_UNKNOWN = 1000        // 不明なエラー
} TCAP_ERROR;

// ==== API関数 ====
extern "C" {

// == DLLのバージョンを取得 ==
UINT WINAPI DllGetVersion();

// == キャプチャ ==
TCAP_ERROR WINAPI CaptureA(HWND hWnd,
													 LPCSTR lpOutFileName,
													 DWORD dwCaptureMode, 
													 UINT uCodePage);

TCAP_ERROR WINAPI CaptureW(HWND hWnd,
													 LPCWSTR lpOutFileName,
													 DWORD dwCaptureMode);

}

#endif
