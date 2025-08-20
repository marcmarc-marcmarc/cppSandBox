#include <iostream>
#include <fstream>

int main()
{
    
    std::ifstream input("/workspaces/cppSandBox/Parsing practice/files/grades.csv");
    if (!input.is_open())
    {
        std::cout << "File didn't open" << std::endl;
    }

    std::string line, name, scoreStr;
    int avg, count, start, end;

    while (std::getline(input, line))
    {
        avg = 0;
        count = 0;
        start = 0;
        end = end = line.find(',', start);
        name = line.substr(start, end - start);
        start = end + 1;

        while (line.find(',', end + 1) != std::string::npos)
        {
            end = line.find(',', start);
            scoreStr = line.substr(start, end - start - 1);
            // std::cout << scoreStr << " ";
            avg += std::stoi(scoreStr);
            count++;
            start = end + 1;
        }

        std::cout << name << ", average score: " << static_cast<double>(avg) / count << std::endl;
    }
    return 0;
}