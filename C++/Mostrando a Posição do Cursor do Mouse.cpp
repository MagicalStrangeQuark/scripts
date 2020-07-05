#include <iostream>
#include <locale.h>
#include <time.h>
#include <windows.h>
#include <cstdio>

int main()
{
	
	setlocale(LC_ALL, "portuguese");
	
	int linha, coluna; // DECLARA��O DAS VARI�VEIS EMPREGADAS;
	
	POINT MouseCursor;
	
	srand(time(NULL)); // FUN��O NECESS�RIA PARA GERAR DIFERENTES N�MEROS ALEAT�RIOS;
	
	while(1) // LOOP POTENCIALMETE INFINITO;
	{
		linha = rand()%1280; // GERA UM VALOR ALEAT�RIO DE 0 A 1279 PARA A LINHA;
		
		coluna = rand()%800; // GERA UM VALOR ALEAT�RIO DE 0 A 799 PARA A COLUNA;	
			
		Sleep(50); // ESPERA CINCO SEGUNDOS;
		
		//SetCursorPos(linha, coluna); // ALTERA A POSI��O DO CURSOR PARA O VALOR GERADO;
		
		GetCursorPos(&MouseCursor );
		
		std::cout << "POSI��O DO CURSOR EM X: " << MouseCursor.x; // MOSTRA A POSI��O DA LINHA NO TERMINAL;
		
		std::cout << " POSI��O DO CURSOR EM Y: " << MouseCursor.y << std::endl; // MOSTRA A POSI��O DA COLUNA NO TERMINAL;
	}

    return 0;
}
