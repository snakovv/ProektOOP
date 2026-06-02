#ifndef ROADISSUE_H
#define ROADISSUE_H

#include "Signal.h"
#include <iostream>

class RoadIssue : public Signal
{
private:
    int holeSize;

public:
    RoadIssue(int id, std::string title, std::string location, int size);
    void showInfo() override;
};

#endif