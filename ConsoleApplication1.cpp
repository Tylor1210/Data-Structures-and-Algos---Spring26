// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


//Algorithm:
/*
Step 1: Get user input 
Step 2: store data in array
Step 3: Sort Array
Step 4: Display array contents
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int nums[5];
    for (int i = 0; i <= 4; i++) {
        cout << "What is num " << i+1 << "?" << endl;
        cin >> nums[i];
        cin.ignore();
        
    }
    cout << "Pre-swap" << endl;
    for (int i = 0; i <= 4; i++) {
        cout << "\n" << nums[i] << endl;
    }

    
    //Sort comparing first num in array to int +1
    //for (int i = 0; i<=4; i++) {
    //    //bucket
    //    int nswap1 = 0;
    //    int nswap2 = 0;
    //    if (nums[i] > nums[i + 1]) {
    //        nswap1 = nums[i];
    //        nums[i] = nums[i + 1];
    //        nums[i + 1] = nswap;
    //    }
    //}
    //Sort
    sort(nums, nums + 5);
    cout << "Post-swap" << endl;
    for (int i = 0; i <= 4; i++) {
        cout << "\n" << nums[i] << endl;
    }
}

