#ifndef LIGHTINGISSUE_H
#define LIGHTINGISSUE_H

#include "Signal.h"

class LightingIssue : public Signal
{
private:
    int lampNumber;

public:
    LightingIssue(int id, const std::string& title, const std::string& location, int lamp);
    void showInfo() const override;
};

#endif
