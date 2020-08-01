#include "File.h"

void File::file_put_contents(const std::string &FILENAME, const std::string &CONTENT, WRITE_MODE WRITE_MODE)
{
    std::ofstream File;

    if (WRITE_MODE == FILE_APPEND)
    {
        File.open(FILENAME, std::ios_base::app);
    }
    else
    {
        File.open(FILENAME);
    }

    File << CONTENT;
}

std::string &File::file_get_contents(std::string FILENAME, std::string &CONTENT)
{
    std::ifstream infile(FILENAME);

    for (std::string LINE_CONTENT_TO_APPEND; getline(infile, LINE_CONTENT_TO_APPEND);)
    {
        CONTENT = CONTENT + LINE_CONTENT_TO_APPEND;
    }

    if (infile.is_open())
        infile.close();

    return CONTENT;
}

std::string File::json_encode(int arr[], int length)
{
    std::string str = "[";

    for (int i = 0; i < length; i++)
    {
        str += ((i + 1) < length) ? std::to_string(arr[i]) + ", " : std::to_string(arr[i]);
    }

    str += "]\n";

    return str;
}

File::File() {}

File::~File() {}