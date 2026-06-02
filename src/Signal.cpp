#include "Signal.h"

using namespace std;

Signal::Signal(int id, const string& title, const string& location)
    : id(id), title(title), location(location), status("New")
{
}

void Signal::changeStatus(const string& newStatus)
{
    status = newStatus;
}

int Signal::getId() const
{
    return id;
}
