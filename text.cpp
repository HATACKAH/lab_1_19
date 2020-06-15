#include <iostream>
#include <fstream>

using namespace std;

int main() {
int a;
a=0;
ifstream text; 
ofstream withdrawal;
text.open("input.txt");
withdrawal.open("output.txt");
    string word;
    while (text >> word)
    {
       a=a+1;
    }

    withdrawal << a;
    withdrawal.close();
    return 0;


}
