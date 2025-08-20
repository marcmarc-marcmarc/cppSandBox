#include <string>
#include <fstream>
#include <iostream>

int main ()
{
    std::ifstream input("/workspaces/cppSandBox/Parsing practice/files/data.json.txt");

    if (!input.is_open())
    {
        std::cout << "file din't open chief" << std::endl;
    }
    std::string line, KV1, KV2, nameKey, name, ageKey, age;
    int split, start, end;

    while (std::getline(input, line))
    {
        split = line.find(',');
        KV1 = line.substr(0, split);
        KV2 = line.substr(split + 1);

        start = KV1.find('\"');
        end = KV1.find('\"', start + 1);
        nameKey = KV1.substr(start + 1, end - (start + 1));

        start = KV1.find('\"', end + 1);
        end = KV1.find('\"', start + 1);
        name = KV1.substr(start + 1, end - (start + 1));

        start = KV2.find('\"');
        end = KV2.find('\"', start + 1);
        ageKey = KV2.substr(start + 1, end - (start + 1));

        start = KV2.find(':');
        end = KV2.find('}', start);
        age = KV2.substr(start + 1, end - (start + 1));

        std::cout << nameKey << ": " << name << "  -  " << ageKey << ": " << age << std::endl;
    }
    return 0;
}