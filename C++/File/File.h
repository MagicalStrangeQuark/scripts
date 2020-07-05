#ifndef _MODULE_H_
#define _MODULE_H_

#include <iostream>
#include <fstream>

enum WRITE_MODE
{
    FILE_OVERWRITE = 0,
    FILE_APPEND = 1
};

class File
{
public:
    File() {}
    static void file_put_contents(const std::string &FILENAME, const std::string &content, WRITE_MODE WRITE_MODE = FILE_APPEND);
    static std::string &file_get_contents(std::string FILENAME, std::string &CONTENT);

private:
};

#endif