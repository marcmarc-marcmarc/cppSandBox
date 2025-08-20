#include <string>
#include <fstream>
#include <iostream>
#include <vector>

int main()
{
    std::string line, tempStr;
    std::ifstream input("/workspaces/cppSandBox/Parsing practice/files/numbers.csv");
    std::vector<std::vector<int>> num_vec;
    std::vector<int> tempVec;
    int start, end, intCount, lineCount = 1;

    if(!input.is_open())
    {
        std::cout<< "file didn't open!!" << std::endl;
    }

    while (std::getline(input, line))
    {
        start = 0;
        end = 0;
        int length = static_cast<int> (line.size());
        while (end < length)
        {
            end = line.find(',', start + 1);
            if (line.find(',', start + 1) == std::string::npos){ break; }
            if (end == start ) { break; } 

            tempStr = line.substr(start, end - start);
            //std::cout << tempStr << std::endl;
            
            tempVec.push_back(std::stoi(tempStr));
            start = end + 1;
        }
        num_vec.push_back(tempVec);
        tempVec.clear();
    }
        
        for (auto Vec : num_vec)
        {
            intCount = 0;
            std::cout << "line: " << lineCount << "  - ";
            for (int i : Vec)
            {
                std::cout << i << " ";
                intCount ++;
            }
            std::cout << "contains: " << intCount <<" values" << std::endl;
            lineCount ++;
        }
        return 0;
}