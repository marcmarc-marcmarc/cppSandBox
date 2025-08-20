#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::ifstream input("C:\\Users\\Marc\\OneDrive\\Documents\\GitHub\\cppSandBox\\Parsing practice\\files\\data.json.txt");
    std::string K1pair, k2pair, keyName, name, KeyAge, age, line;
    int breakpoint;

        return 0;

    while (std::getline(input, line))
    {
        breakpoint = line.find(':');
        K1pair = line.substr(1, breakpoint - 1 - 1);
        k2pair = line.substr(breakpoint + 1,  line.size() - breakpoint - 3);
        std::cout << "k1 pair: " << K1pair << "  - k2 pair:  " << k2pair << std::endl;
        std::cout << line << std::endl;
    }
    return 0;
}