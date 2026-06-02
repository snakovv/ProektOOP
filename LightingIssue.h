#ifndef LIGHTINGISSUE_H
#define LIGHTINGISSUE_H

#include "Signal.h"
#include <iostream>

class LightingIssue : public Signal
{
private:
    int lampNumber;

public:
    LightingIssue(int id, std::string title, std::string location, int lamp);
    void showInfo() override;
};

#endif