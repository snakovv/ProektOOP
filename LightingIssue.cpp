#include "LightingIssue.h"

LightingIssue::LightingIssue(int id, std::string title, std::string location, int lamp)
    : Signal(id, title, location)
{
    lampNumber = lamp;
}

void LightingIssue::showInfo()
{
    std::cout << "\n[Street Lighting]\n";
    std::cout << "ID: " << id << "\n";
    std::cout << "Title: " << title << "\n";
    std::cout << "Location: " << location << "\n";
    std::cout << "Lamp Number: " << lampNumber << "\n";
    std::cout << "Status: " << status << "\n";
}