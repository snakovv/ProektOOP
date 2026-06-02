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
    Signal(int id, const std::string& title, const std::string& location);
    virtual ~Signal() = default;

    virtual void showInfo() const = 0;

    void changeStatus(const std::string& newStatus);
    int getId() const;
};

#endif
