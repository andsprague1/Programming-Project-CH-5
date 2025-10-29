// Programming Project CH 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>

int main()
{
	std::ifstream inputFile;
	inputFile.open("Stores.txt");

	if(!inputFile)
	{
		std::cout << "Error will Robinson, ERROR!";
		return -1;
	}
	int sales;

	for (int i = 1; i < 6; i++)
	{
		inputFile >> sales;
		int askterNum = sales / 100;
		std::cout << "For store " << i << " :";
		for (int j = 0; j < askterNum; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;

	}

	inputFile.close();


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
