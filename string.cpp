// hello i am kashit and this is my nuclear code......
// this is a code on the string.
#include <iostream>
#include <sstream>
#include <string>
// using namespace std;

using std::istringstream;
using std::string;
using std::cout;

int main() 
{
    // making a string...
    string a("1 2 3");

    istringstream my_stream(a);

    int n;
    
    // Testing to see if the stream was successful and printing results.
    while (my_stream) {
        my_stream >> n;
        if (my_stream) {
            cout << "That stream was successful: " << n << "\n";
        }
        else {
            cout << "That stream was NOT successful!" << "\n";            
        }
    }
}
