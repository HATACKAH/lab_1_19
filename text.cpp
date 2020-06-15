#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a;
    a = 0;
    ifstream input;
    ofstream output;
    input.open("input.txt");
    output.open("output.txt");
    string word;
    while (input >> word)
    {
        a = a + 1;
    }

    output << a;
    output.close();
    return 0;
}
