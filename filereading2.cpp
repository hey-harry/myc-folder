#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ifstream my_file;
    my_file.open("files/1.board");
    if (my_file) {
      cout << "The file stream has been created!" << "\n";
    }    
}
