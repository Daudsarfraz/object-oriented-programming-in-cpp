#include <iostream>
using namespace std;
void enterData(int firstMatrix[][5], int secondMatrix[][5], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
void multiplyMatrices(int firstMatrix[][5], int secondMatrix[][5], int multResult[][5], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
void display(int mult[][5], int rowFirst, int columnSecond);
int main(){
	int firstMatrix[5][5], secondMatrix[5][5], mult[5][5], rowFirst, columnFirst, rowSecond, columnSecond, i, j, k;
	cout << "Enter rows and column for first matrix: ";
	cin >> rowFirst >> columnFirst;
	cout << "Enter rows and column for second matrix: ";
	cin >> rowSecond >> columnSecond;
	while (columnFirst != rowSecond)	{
		cout << "Error! column of first matrix not equal to row of second." << endl;
		cout << "Enter rows and column for first matrix: ";
		cin >> rowFirst >> columnFirst;
		cout << "Enter rows and column for second matrix: ";
		cin >> rowSecond >> columnSecond;
	}
        enterData(firstMatrix, secondMatrix, rowFirst, columnFirst, rowSecond, columnSecond);
        multiplyMatrices(firstMatrix, secondMatrix, mult, rowFirst, columnFirst, rowSecond, columnSecond);
	    display(mult, rowFirst, columnSecond);
	return 0;
}
void enterData(int firstMatrix[][5], int secondMatrix[][5], int rowFirst, int columnFirst, int rowSecond, int columnSecond){
	int i, j;
	cout << endl << "Enter elements of matrix 1:" << endl;
	for(i = 0; i < rowFirst; ++i)	{
		for(j = 0; j < columnFirst; ++j)	{
			cout << "Enter elements a"<< i + 1 << j + 1 << ": ";
			cin >> firstMatrix[i][j];
		}
	}
	cout << endl << "Enter elements of matrix 2:" << endl;
	for(i = 0; i < rowSecond; ++i){
		for(j = 0; j < columnSecond; ++j){
			cout << "Enter elements b" << i + 1 << j + 1 << ": ";
			cin >> secondMatrix[i][j];
		}
	}
}

void multiplyMatrices(int firstMatrix[][5], int secondMatrix[][5], int mult[][5], int rowFirst, int columnFirst, int rowSecond, int columnSecond){
	int i, j, k;
	for(i = 0; i < rowFirst; ++i)	{
		for(j = 0; j < columnSecond; ++j)
		{
			mult[i][j] = 0;
		}
	}
	for(i = 0; i < rowFirst; ++i){
		for(j = 0; j < columnSecond; ++j){
			for(k=0; k<columnFirst; ++k)	{
				mult[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
			}
		}
	}
}
void display(int mult[][5], int rowFirst, int columnSecond){
	int i, j;
	cout << "Output Matrix:" << endl;
	for(i = 0; i < rowFirst; ++i){
		for(j = 0; j < columnSecond; ++j){
			cout << mult[i][j] << " ";
			if(j == columnSecond - 1)
				cout << endl << endl;
		}
	}
}