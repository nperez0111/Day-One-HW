#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

const int SIZE=6;
const int NUMSIZE=5;
	
void copyData(string [], int [][NUMSIZE]);
void displayArrays();

int main() {
	

	string names[SIZE];
	int numbers[SIZE][NUMSIZE];
	
	copyData(names, numbers);
	
	getch();
	return 0;
}

void copyData(string names[], int numbers[][NUMSIZE])
{
	ifstream inputFile;
	inputFile.open("dayOne.txt");
	
	if(inputFile)
	{
		while(!inputFile.eof())
		{
			//inputFile>>
			//You need to finish this line of code
		}	
		inputFile.close(); 
	}
	else
	{
		cout<< "Error opening file.\n";
	}
}


