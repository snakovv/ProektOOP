#ifndef ROADISSUE_H
#define ROADISSUE_H

#include "Signal.h"

class RoadIssue : public Signal
{
private:
    int holeSize;

public:
    RoadIssue(int id, const std::string& title, const std::string& location, int size);
    void showInfo() const override;
};

#endif
