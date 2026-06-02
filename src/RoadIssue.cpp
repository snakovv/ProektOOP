#include "RoadIssue.h"
#include <iostream>

using namespace std;

RoadIssue::RoadIssue(int id, const string& title, const string& location, int size)
    : Signal(id, title, location), holeSize(size)
{
}

void RoadIssue::showInfo() const
{
    cout << "\n[Road Hole]\n";
    cout << "ID: " << id << "\n";
    cout << "Title: " << title << "\n";
    cout << "Location: " << location << "\n";
    cout << "Size: " << holeSize << " cm\n";
    cout << "Status: " << status << "\n";
}
