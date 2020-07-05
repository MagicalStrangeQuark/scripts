#include <Windows.h>
#include <math.h>
#include <iostream>

using namespace std;

#define PI 3.14159265
#define PREC 18000

int main()
{
	Sleep(5000);
	
	for(int i = 0; i <= PREC; i++) {
		SetCursorPos(1000 + 100.0 * cos(i * 2 * PI / PREC), 400 + 100.0 * sin(i * 2 * PI / PREC));
		
		mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
		
		Sleep(1);
	}
	
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

    return 0;
}