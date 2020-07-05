#include <iostream>
#include <locale.h>
#include "File/File.cpp"
#include <fstream>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "portuguese");

    File::file_put_contents("File.TXT", "Testing...", FILE_APPEND);

    std::string CONTENT;

    CONTENT = File::file_get_contents("File.TXT", CONTENT);

    std::cout << CONTENT << std::endl;

    return 0;
}