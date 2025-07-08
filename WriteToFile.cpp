#include <iostream>
#include <fstream>

int main() {
   std::string name[4];
   std::ofstream outfile;

   outfile.open("log.txt", std::ios::app);

   for (int i = 0; i < 3; i ++){
       std::cout << "Give me a string: ";
     
       getline(std::cin, name[i]);
   }

   for (int i = 0; i < 3; i++){
       outfile << "\n" << name[i] << std::endl;
   }

   outfile.close();


   return 0;
}