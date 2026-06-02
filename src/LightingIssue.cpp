#include "LightingIssue.h"
#include <iostream>

using namespace std;

LightingIssue::LightingIssue(int id, const string& title, const string& location, int lamp)
    : Signal(id, title, location), lampNumber(lamp)
{
}

void LightingIssue::showInfo() const
{
    cout << "\n[Street Lighting]\n";
    cout << "ID: " << id << "\n";
    cout << "Title: " << title << "\n";
    cout << "Location: " << location << "\n";
    cout << "Lamp Number: " << lampNumber << "\n";
    cout << "Status: " << status << "\n";
}
