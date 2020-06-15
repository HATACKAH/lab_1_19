#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main() {

ifstream text;
text.open("laba_1.txt");
    

    string word;
    while (text >> word)
    {
       cout << word << ".";
    }

    
    return 0;

}
