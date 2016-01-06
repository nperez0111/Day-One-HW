#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

const int SIZE=6;
const int NUMSIZE=7;
	
void copyData(string (&data)[SIZE][NUMSIZE]);
void displayArrays(string [][NUMSIZE]);

int main() 
{
	string data[SIZE][NUMSIZE];
	
	copyData(data);
	displayArrays(data);
	
	getch();
	return 0;
}

void copyData(string (&data)[SIZE][NUMSIZE])
{
	ifstream inputFile;
	inputFile.open("dayOne.txt");
	
	if(inputFile)
	{
		while(!inputFile.eof())
		{
			for(int count=0; count<SIZE; count++)
			{
				for(int numcount=0; numcount<NUMSIZE; numcount++)
				{
					inputFile>> data[count][numcount];
				}
				
			}
		}	
		inputFile.close(); 
	}
	else
	{
		cout<< "Error opening file.\n";
	}
}

void displayArrays(string data[][NUMSIZE])
{
	for(int count=0; count<SIZE; count++)
		{
			for(int numcount=0; numcount<NUMSIZE; numcount++)
			{
				cout<<data[count][numcount]<<endl;
			}
		
		}
}


