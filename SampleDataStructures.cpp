// SampleDataStructures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <deque>
using namespace std;

int main()
{
    cout << "Hello World!\n\n";

    //Vector
    vector<string> cars = { "BMW", "Audi", "Honda", "Tesla" };
    cout << cars.at(1) << endl;
    cout << cars.back() << endl;
    cout << cars.front() << endl;

    for (string car : cars) {
        cout << car << "\n";
    }

    cars.at(1) = "nissan\n\n";
    cout << cars.at(1);
    cout << "-------------" << endl;

    //List
    list<string> airlines = { "Delta", "American", "Spirit", "UAE" };
    cout << airlines.front() << "\n";
    cout << "---------- \n";


    //Queue
    queue<string> names;
    names.push("Name1");
    names.push("NAME2");
    names.push("name3");

    cout << names.front() << "\n";

    string item;
    while (!names.empty()) {
        item = names.front();
        cout << item << "\n";
        names.pop();
    }

    cout << "---------- \n";


    //DeQue
    deque<string> browserHistory;
    browserHistory.push_back("Google.com");
    browserHistory.push_back("Youtube.com");
    browserHistory.push_front("Yahoo.com");

    cout << browserHistory.front() << endl;

    cout << "---------- \n";
    





}
