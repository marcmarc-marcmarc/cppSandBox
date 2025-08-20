#include <iostream>
#include <fstream>

int main ()
{
    std::ifstream input("strings.txt");
    std::string line, name,dorw, result;
    int start, end, counter = 1;

    while (std::getline(input, line))
    {
        start = line.find('\"');
        end = line.find('\"', start + 1);
        name = line.substr(start + 1, end - start - 1);

        start = line.find('\"', end + 1);
        end = line.find('\"', start + 1);
        dorw = line.substr(start + 1, end - start - 1);

        start = line.find('\"', end + 1);
        end = line.find('\"', start + 1);
        result = line.substr(start + 1, end - start - 1);

        std::cout << "line " << counter << ":  name - " << name << ", day or week - " << dorw << ", result  - " << result << std::endl;
    }

    return 0;
}