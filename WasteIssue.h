#ifndef WASTEISSUE_H
#define WASTEISSUE_H

#include "Signal.h"
#include <iostream>

class WasteIssue : public Signal
{
private:
    std::string wasteType;

public:
    WasteIssue(int id, std::string title, std::string location, std::string type);
    void showInfo() override;
};

#endif