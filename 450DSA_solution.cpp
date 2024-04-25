// 450DSA_solution.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "allFunDefination.hxx"

int main(int argc, char* argv[])
{
    int testArray[11] = {1,22,0,4,19,6,7,8,94,10,-11};
    bubbleSort(testArray,11);
    for (int index = 0; index < 11; index++)
    {
        std::cout << testArray[index] << std::endl;
    }
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
