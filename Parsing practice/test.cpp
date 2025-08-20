#include <fstream>
#include <iostream>

int main ()
{
    std::ifstream input("/workspaces/cppSandBox/Parsing practice/files/emails.txt");
    std::string line;

    if (!input.is_open())
    {
        std::cout << "can't open the file chief";
    }

    while (std::getline(input, line))
    {

        std::cout << line << std::endl;
    }
    
    return 0;
}