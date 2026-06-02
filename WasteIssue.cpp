#include "WasteIssue.h"

WasteIssue::WasteIssue(int id, std::string title, std::string location, std::string type)
    : Signal(id, title, location)
{
    wasteType = type;
}

void WasteIssue::showInfo()
{
    std::cout << "\n[Waste Disposal]\n";
    std::cout << "ID: " << id << "\n";
    std::cout << "Title: " << title << "\n";
    std::cout << "Location: " << location << "\n";
    std::cout << "Waste Type: " << wasteType << "\n";
    std::cout << "Status: " << status << "\n";
}