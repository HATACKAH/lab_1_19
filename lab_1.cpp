#include <iostream>
#include <fstream>

using namespace std;

const char input[] = "input.txt";
const char output[] = "output.txt";
const int MAX_SIZE = 2000;

struct String
{
private:
	char text[MAX_SIZE]{};
	int index = 0;
	char marker = '@';

public:
	void addChar(const char &inputChar)
	{
		if (inputChar == '\n')
		{
			return;
		}

		this->text[this->index] = inputChar;
		this->index++;
	}

	bool isMarker(const char &inputChar)
	{
		return inputChar == this->marker;
	}
	void wordcounter()
	{
		int counter = 0;
		int i = 0;
		while (i != marker)
		{
			if (text[index - 1] == ' ' || index == 0)
				;
			{
				counter++;
			}

			i++;
		}
	}
	void printer(string nameOfFile, int counter)
	{
		ofstream out;
		out.open(nameOfFile, ios::app);
		if (out.is_open())
		{
			out << "count = " << counter;
		}
		out.close();
	}
};
