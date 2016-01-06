#include <iostream>
#include <fstream>

using namespace std;

const int SIZE=6;
const int NUMSIZE=5;
	
void openCloseFile(string [], int [SIZE][]);
void copyData(string [], int [SIZE][]);
void displayArrays();

int main() {
	

	string names[SIZE];
	int numbers[SIZE][NUMSIZE];
	
	openCloseFile(names[SIZE], numbers);
	openCloseFile(names[SIZE], numbers);
	
	return 0;
}

void openCloseFile(string names[], int numbers[SIZE][])
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

void copyData(string names[], int numbers[SIZE][])
{
	while(!inputFile.eof())
	{
		//inputFile>>
		//You need to finish this line of code
	}
}
