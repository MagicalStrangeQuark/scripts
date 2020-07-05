#include "BD.h"

std::string BD::read(std::string FILENAME)
{
    return "ok";
}

// std::string BD::find(int id)
// {
// }

bool BD::write(std::string FILENAME, std::string CONTENT)
{
    File::file_put_contents(FILENAME, CONTENT, FILE_APPEND);

    return true;
}