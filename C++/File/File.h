#ifndef FILE_H
#define FILE_H

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
    static void file_put_contents(const std::string &FILENAME, const std::string &CONTENT, WRITE_MODE WRITE_MODE = WRITE_MODE::FILE_APPEND);
    static std::string &file_get_contents(std::string FILENAME, std::string &CONTENT);
    static std::string json_encode(int arr[], int length);
    File();
    ~File();

private:
};

#endif