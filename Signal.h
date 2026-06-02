#ifndef SIGNAL_H
#define SIGNAL_H

#include <string>

class Signal
{
protected:
    int id;
    std::string title;
    std::string location;
    std::string status;

public:
    Signal(int id, std::string title, std::string location);
    virtual ~Signal() {}

    virtual void showInfo() = 0;

    void changeStatus(std::string newStatus);
    int getId();
};

#endif