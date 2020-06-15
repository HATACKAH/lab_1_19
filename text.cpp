#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main() {
int a;
a=0;
ifstream text;
text.open("laba_1.txt");
    string word;
    while (text >> word)
    {
       a=a+1;
    }

    cout <<a<< endl;
    return 0;

}
