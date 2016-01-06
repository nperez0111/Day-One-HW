#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

const int SIZE=6;
const int NUMSIZE=5;
	
void copyData(string (&names)[SIZE], int (&numbers)[SIZE][NUMSIZE]);
void displayArrays(string [], int [][NUMSIZE]);

int main() 
{
	

	string names[SIZE];
	int numbers[SIZE][NUMSIZE];
	
	copyData(names, numbers);
	displayArrays(names, numbers);
	
	getch();
	return 0;
}

void copyData(string (&names)[SIZE], int (&numbers)[SIZE][NUMSIZE])
{
	int count= 0;
	int numcount=0;
	ifstream inputFile;
	inputFile.open("dayOne.txt");
	
	if(inputFile)
	{
		while(count<SIZE && numcount<NUMSIZE && !inputFile.eof())
		{
			inputFile>> numbers[count][numcount];
			count++;
			numcount++;
		}	
		inputFile.close(); 
	}
	else
	{
		cout<< "Error opening file.\n";
	}
}

void displayArrays(string names[], int numbers[][NUMSIZE])
{
	int count=0;
	int numcount=0;
	
	while(count<SIZE && numcount<NUMSIZE)
	{
		cout<< numbers[count][numcount]<< endl;
		count++;
		numcount++;
	}
}



