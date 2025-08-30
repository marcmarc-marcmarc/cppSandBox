#include <iostream>
#include <vector>
#include <fstream>
#include <ctime>

using namespace std;

int main ()
{
    string outputFile = "outputLog.txt";
    vector<int> numbersList;
    int randNum;
    ofstream output(outputFile);

    //set seed for random number. using Current time.
    srand(time(NULL));

    int lengthOfArray = rand() % 61;

    for (int i = 0; i < lengthOfArray; i++)
    {

        // add a random number to array
        numbersList.push_back(rand() % 3000);
    }

    // output array to file
    for (int i = 0; i < lengthOfArray; i++)
    {
        //output to file
        output << numbersList[i] << "\n";
    }
    output.close();
    return 0;
}