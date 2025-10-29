// Programming Project CH 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	//Variables average, total, count, inputFile, num
	int average, total, count, num;
	ifstream inFile;
	count = 0;
	total = 0;
	inFile.open("Random.txt");

	while (inFile >> num)
	{
		total += num;
		count++;
	}
	average = total / (double)count;

	inFile.close();

	ofstream outFile;
	outFile.open("OutOut.out");

	outFile << average << endl;
	outFile << count << endl;
	outFile << total << endl;


	//Open file
	//While readline(file) :
	//Add total
	//Increment count
	//Average = total / count
	//Output average,
	//Output count
	//Output total

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
