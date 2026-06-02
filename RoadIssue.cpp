#include "RoadIssue.h"

RoadIssue::RoadIssue(int id, std::string title, std::string location, int size)
    : Signal(id, title, location)
{
    holeSize = size;
}

void RoadIssue::showInfo()
{
    std::cout << "\n[Road Hole]\n";
    std::cout << "ID: " << id << "\n";
    std::cout << "Title: " << title << "\n";
    std::cout << "Location: " << location << "\n";
    std::cout << "Size: " << holeSize << " cm\n";
    std::cout << "Status: " << status << "\n";
}