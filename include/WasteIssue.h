#ifndef WASTEISSUE_H
#define WASTEISSUE_H

#include "Signal.h"

class WasteIssue : public Signal
{
private:
    std::string wasteType;

public:
    WasteIssue(int id, const std::string& title, const std::string& location, const std::string& type);
    void showInfo() const override;
};

#endif
