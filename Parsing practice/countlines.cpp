#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::ifstream input("/workspaces/cppSandBox/Parsing practice/files/lines.txt");
    std::string line;
    int counter = 0;

    if (!input.is_open())
    {
        std::cout << "file didn't open chief" << std::endl;
    }

    while (std::getline(input, line))
    {
        counter ++;
    }
    
    std::cout << "line count: " << counter << std::endl;

    return 0;
}