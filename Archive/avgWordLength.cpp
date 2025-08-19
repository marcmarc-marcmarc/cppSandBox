#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string fileToRead = "text.txt";
    ifstream inputFile;
    inputFile.open(fileToRead);
    int sum = 0;
    int count = 0;
    string word;

    while (inputFile >> word){
        sum += word.length();
        count += 1;
    }
    
    
    inputFile.close();

    cout << "total words: " << count << " -  average word length:  " << sum / count << endl;
    cout << "finished running";

    return 0;
}