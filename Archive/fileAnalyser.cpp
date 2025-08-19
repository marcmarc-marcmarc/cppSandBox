#include <fstream>
#include <string>
#include <filesystem>
//#include <cstdlib>
//#include <bits/stdc++.h>

using namespace std;

int main() {
    // get cwd
    string path("/workspaces/codespaces-blank");
    string command("dir ");
    command.append(path);

    const char* final_command = command.c_str();

    system(final_command);
        // get dir
        // get size of each file - use multidemsnional array

        return 0;
}