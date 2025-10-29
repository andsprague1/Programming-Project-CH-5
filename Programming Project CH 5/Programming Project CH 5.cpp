// Programming Project CH 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //For i 0 - 20 inclusive
    //Loop
    cout << "This is celcius to Farioaenfajsdb" << endl;
    for (int c = 0; c <= 20; c++)
    {
        //f = 9 / 5 * i + 32
        double f = (9 / 5.0) * c + 32;
        //Output f
        //Output i
        cout<<"F:"<<left <<setw(5) << f << " C:" << c<<endl;
       
    }

        //Do Loop
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
