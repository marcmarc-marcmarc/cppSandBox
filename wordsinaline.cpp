#include <fstream>
#include <iostream>
#include <string>

int main ()
{
    std::ifstream input("/workspaces/cppSandBox/Parsing practice/files/words.txt");
    int lineCount = 0, wordCount, start = 0, end;
    std::string line;

    if (!input.is_open())
    {
        std::cout << "file didn't open cap" << std::endl;
    }

    while (std::getline(input, line))
    {
        wordCount = 0;
        lineCount ++;
        end = 0;
        start = 0;
        while (end < line.size())
        {
            end = line.find(' ', start + 1);
            if (end > start)
            {
                wordCount ++;
                start = end;
            }
        }
        std::cout << "line: " << lineCount << "  -  words on this line: " << wordCount << std::endl;
    }

}