#include "WasteIssue.h"
#include <iostream>

using namespace std;

WasteIssue::WasteIssue(int id, const string& title, const string& location, const string& type)
    : Signal(id, title, location), wasteType(type)
{
}

void WasteIssue::showInfo() const
{
    cout << "\n[Waste Disposal]\n";
    cout << "ID: " << id << "\n";
    cout << "Title: " << title << "\n";
    cout << "Location: " << location << "\n";
    cout << "Waste Type: " << wasteType << "\n";
    cout << "Status: " << status << "\n";
}
