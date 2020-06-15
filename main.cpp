#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main (int argc, char* argv[]) {
    setlocale(LC_ALL, "rus");
    char buff[100];
    ifstream fin("laba_1.txt");
    fin.getline(buff, 100); 
    fin.close();
    unsigned int a,i;
    a=0;
    for (i=0;i<strlen(buff)-1;i++) {

        if ((buff[i]==' ')&& (buff[i+1]!=' ')) 
        {
            a=a+1;
        }
      
        
    }
    a=a+1;
    std::cout << a;
}

