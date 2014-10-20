// TCap.h

#ifndef __T_CAP__
#define __T_CAP__

// �L���v�`�� ���[�h
typedef enum {
	TCMODE_WINDOW = 0,  // �E�B���h�E�S��
	TCMODE_CLIENT = 1   // �N���C�A���g�̈�̂�
} TCAP_MODE;

// �G���[�R�[�h
typedef enum {
	TCERROR_NONE = 0,  // �G���[�Ȃ�
	TCERROR_CAPTURE_FAILED = 1,   // �L���v�`�����s
	TCERROR_WRITE_FAILED   = 2,   // �������ݎ��s
	TCERROR_INVALID_MODE   = 10,  // �����ȃL���v�`�����[�h
	TCERROR_UNKNOWN = 1000        // �s���ȃG���[
} TCAP_ERROR;

// ==== API�֐� ====
extern "C" {

// == DLL�̃o�[�W�������擾 ==
UINT WINAPI DllGetVersion();

// == �L���v�`�� ==
TCAP_ERROR WINAPI CaptureA(HWND hWnd,
													 LPCSTR lpOutFileName,
													 DWORD dwCaptureMode, 
													 UINT uCodePage);

TCAP_ERROR WINAPI CaptureW(HWND hWnd,
													 LPCWSTR lpOutFileName,
													 DWORD dwCaptureMode);

}

#endif
