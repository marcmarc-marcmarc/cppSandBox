#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string input;
    string output;
    cout <<  "give me a string: ";  
    cin >> input;

    for (int i = input.length(); i >= 0; i--){
        output.push_back(input[i]);
    }

    cout << output;
    return 0;
}