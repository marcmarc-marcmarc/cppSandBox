#include <iostream>
#include <fstream>

int main() {
   std::string name = "test! \n";
   std::ofstream outfile;

   outfile.open("log.txt");

   for (int i = 0; i < 3; i ++){
       outfile << name << " " << i << std::endl;
   }


   std::cout << "test has run !"<< std::endl;

   outfile.close();


   return 0;
}