#include <cstring>
#include <cctype>
#include <fstream>
#include <iostream>

int main()
{

    char original[100] = "This IS a Test";
    char fixed [100];
    
    std::cout << "Original String " << original << std::endl;

    int length = static_cast<int> (strlen(original));
    for (int i = 0;  i < length; i++)
    {
        if (islower(original[i]))
        {
            fixed[i] = toupper(original[i]);
        } 
        else 
        {
            fixed[i] = '_';
        }
    }

    //fixed[length] = '\0';

    std::cout << fixed << std::endl;

    return 0;
}