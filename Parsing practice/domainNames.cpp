#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::ifstream input("C:\\Users\\Marc\\OneDrive\\Documents\\GitHub\\cppSandBox\\Parsing practice\\files\\emails.txt");
    
    if(!input.is_open())
    {
        std::cout << "file didn't open, life sucks like that";
    }

    std::string line, domain;
    int at, com;
    while (std::getline(input, line))
    {

        at = line.find('@');
        com = line.find('.');
        domain = line.substr(at, com - at);

        std::cout << "Domain is: " << domain << std::endl;
    }


    return 0;
}