// queuePractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<queue>
using namespace std;


void displayMenu();


int main()
{
    int choice = 0;
    char con = 'Y';
    string gName, item;
    cout << "Hello Guest!\n";
    queue<string> reservations;
    

    
    while (con == 'Y' || con == 'y') {
        displayMenu();
        cin >> choice;

        

    
        switch (choice) {
        case 1:
            cout << "What is your name?: " << endl;
            cin >> gName;
            reservations.push(gName);
            cout << "You have been added to the queue " + reservations.back() << "!\n";
            cout << "Display Menu? (Y/N): " << endl;
            cin >> con;
            break;
        case 2:
            if (!reservations.empty()) {
                cout << "----------------\n";
                cout << reservations.front() << " Table #32 is ready for you. \n";
                reservations.pop();
                cout << "----------------\n";
            }
            else {
                cout << "----------------\n";
                cout << "The queue is empty! No one to seat.\n";
                cout << "----------------\n";
            }
            break;
        case 3:
            cout << "----------------\n";
            cout << "Reservations: \n";
            cout << "----------------\n";
            //Need temp queue
            queue<string> tempQueue = reservations;
            
            while (!tempQueue.empty()) {
                cout << tempQueue.front();
                tempQueue.pop();
            }
            cout << "----------------\n";
            break;
        case 4:
            con = 'N';
        default:
            con = 'N';
        }
   }
        
    




}

void displayMenu() {
    cout << "XYZ Restaurant Queue\n" << endl;
    cout << "1. Join the list" << endl;
    cout << "2. Find a table" << endl;
    cout << "3. Display the List" << endl;
    cout << "4. Exit" << endl;
}