#include <windows.h>
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    HWND hWnd = GetConsoleWindow();
    ShowWindow(hWnd, SW_HIDE);
    SHFILEOPSTRUCT sh;
    sh.wFunc  = FO_DELETE;
    sh.pFrom  = L"d:\\1\2\0";
    sh.pTo    = NULL;
    sh.fFlags = FOF_NOCONFIRMATION | FOF_SILENT;
    sh.hNameMappings = 0;
    sh.lpszProgressTitle = NULL;
    SHFileOperation (&sh);
}
