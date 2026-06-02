#include "Signal.h"
#include <iostream>

Signal::Signal(int id, std::string title, std::string location)
{
    this->id = id;
    this->title = title;
    this->location = location;
    this->status = "Нов";
}

void Signal::changeStatus(std::string newStatus)
{
    status = newStatus;
}

int Signal::getId()
{
    return id;
}