#include <iostream>
#include <fstream>
#include "./../File/File.cpp"

class BD
{
public:
    static std::string read(std::string FILENAME);
    static std::string find(int id);
    static bool write(std::string FILENAME, std::string CONTENT);

private:
};