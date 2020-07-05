#include <iostream>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <cstdio>
#include <windows.h>

using namespace std;

/*-----------------Cores do DOS-------------------------------------------------
Descrição: Procedimento para defini��o de Cores do DOS
------------------------------------------------------------------------------*/
enum DOS_COLORS {
    BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN,
    LIGHT_GRAY, DARK_GRAY, LIGHT_BLUE, LIGHT_GREEN, LIGHT_CYAN,
    LIGHT_RED, LIGHT_MAGENTA, YELLOW, WHITE };
/*----------------------------------------------------------------------------*/

/*-----------------Cores das letras---------------------------------------------
Descri��o: Procedimento para inserir cores de letras no programa
------------------------------------------------------------------------------*/
void textcolor (DOS_COLORS iColor)
{
    HANDLE hl = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
    BOOL b = GetConsoleScreenBufferInfo(hl, &bufferInfo);
    bufferInfo.wAttributes &= 0x00F0;
    SetConsoleTextAttribute (hl, bufferInfo.wAttributes |= iColor);
}
/*----------------------------------------------------------------------------*/

int main(void)
{
	setlocale(LC_ALL, "portuguese");

	for(int i = 0; i < 10000; i++)
	{
		textcolor(RED);
		
		cout << "text" << endl;
	}
	
	system("pause");
	
	return 0;
}