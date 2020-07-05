// #####################################################################################################
// #                                                                                                   #
// #  ###########       #            #          ######      ###########   #         #    ###########   #
// #  #                 #            #          #    #      #         #   #         #    #         #   #
// #  #                 #            #          #   #       #         #   #         #    #         #   #
// #  #            ###########  ###########      # #   #    ###########   ###########    ###########   #
// #  #                 #            #         ##  # #      #             #         #    #             #
// #  #                 #            #        #   # ##      #             #         #    #             #
// #  ###########       #            #        ####    ##    #             #         #    #             #
// #                                                                                                   #
// #####################################################################################################

// #####################################################################################################
// #                                                                                                   #
// # I. PARA COMPILAR O CÓDIGO C++, DIGITE, NO DIRETÓRIO DO ARQUIVO G++ ARQUIVO.FORMATO O NOME_DESTINO #
// #                                                                                                   #
// #####################################################################################################

#include <iostream>
#include <locale.h>

using namespace std;

class CPHP
{
	public:

		CPHP()
		{
			cout << "Contrutor instanciado com sucesso" << endl;
		}

		void getDays()
		{
			system("php -q date.php");
		}

		/**
		 * Função responsável pelo retorno da saída da execução de uma operação no shell.
		 * 
		 * @param 
		 *
		 * @see https://pt.stackoverflow.com/questions/384167/retorno-da-fun%C3%A7%C3%A3o-system-c
		 */
		string readFile(std::string command)
		{
			FILE* output_file = nullptr;
			char buffer[1024];

			if (command.length() == 0) {
				return "Nenhum comando informado";
			}
			
			output_file = popen(command.c_str(), "r");

			if(output_file)
			{
				int i = 0;
				char c;

				while((c = fgetc(output_file)) != EOF)
				{
					buffer[i] = c;
					i++;
				}

				buffer[i] = '\0';
			}
			
			return buffer;
		}
};

int main(int argc, char *argv[])
{
	CPHP file;

	file.getDays();

	string VarTemp = file.readFile("tree");

	cout << VarTemp << endl;

	return 0;
}
