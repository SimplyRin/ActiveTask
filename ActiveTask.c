#include <stdio.h>
#include <windows.h>

int main(int argc, char **argv) {
	char wnd_title[256];
	HWND hwnd = GetForegroundWindow();
	GetWindowText(hwnd,wnd_title,sizeof(wnd_title));

	printf(wnd_title);

	return 0;
}
