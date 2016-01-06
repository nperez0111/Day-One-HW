#include <iostream>
#include <fstream>

using namespace std;

const int SIZE=6;
const int NUMSIZE=5;
	
void openCloseFile(string [], int [][NUMSIZE]);
void copyData(string [], int [][NUMSIZE]);
void displayArrays();

int main() {
	

	string names[SIZE];
	int numbers[SIZE][NUMSIZE];
	
	openCloseFile(names[SIZE], numbers[SIZE][NUMSIZE]);
	openCloseFile(names[SIZE], numbers[][]);
	
	return 0;
}

void openCloseFile(string names[], int numbers[][])
{
	ifstream inputFile;
	inputFile.open("dayOne.txt");
	
	if(inputFile)
	{
		copyData(names[], numbers[][]);
		inputFile.close(); 
	}
	else
	{
		cout<< "Error opening file.\n";
	}
}

void copyData(string names[], int numbers[][])
{
	while(!inputFile.eof())
	{
		inputFile>> 
	}
}
