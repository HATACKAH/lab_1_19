#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main() {

ifstream inputStream;
ifstream stream("laba_1.txt");
    

    string word;
    while (inputStream >> word)
    {
       cout << word << ".";
    }

    
    return 0;

}
