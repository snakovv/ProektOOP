#include <iostream>
#include <vector>

#include "RoadIssue.h"
#include "LightingIssue.h"
#include "WasteIssue.h"

using namespace std;

void printMenu()
{
    cout << "\n===== VillageAlert =====\n";
    cout << "1. Submit Signal\n";
    cout << "2. Show All Signals\n";
    cout << "3. Change Status (admin)\n";
    cout << "4. Delete Signal\n";
    cout << "0. Exit\n";
    cout << "Choice: ";
}

Signal* createSignal(int id)
{
    int type;
    cout << "1. Road Issue 2. Lighting Issue 3. Waste Issue: ";
    cin >> type;
    cin.ignore();

    string title;
    cout << "Title: ";
    getline(cin, title);

    string location;
    cout << "Location: ";
    getline(cin, location);

    if (type == 1)
    {
        int size;
        cout << "Size: ";
        cin >> size;
        return new RoadIssue(id, title, location, size);
    }
    if (type == 2)
    {
        int lamp;
        cout << "Lamp Number: ";
        cin >> lamp;
        return new LightingIssue(id, title, location, lamp);
    }
    if (type == 3)
    {
        string wasteType;
        cout << "Waste Type: ";
        getline(cin, wasteType);
        return new WasteIssue(id, title, location, wasteType);
    }

    cout << "Unknown type, signal not created.\n";
    return nullptr;
}

void showAll(const vector<Signal*>& signals)
{
    if (signals.empty())
    {
        cout << "No signals yet.\n";
        return;
    }
    for (Signal* signal : signals)
    {
        signal->showInfo();
    }
}

void changeStatus(vector<Signal*>& signals)
{
    int id;
    cout << "ID: ";
    cin >> id;
    cin.ignore();

    string status;
    cout << "New Status: ";
    getline(cin, status);

    for (Signal* signal : signals)
    {
        if (signal->getId() == id)
        {
            signal->changeStatus(status);
            return;
        }
    }
    cout << "No signal with ID " << id << ".\n";
}

void deleteSignal(vector<Signal*>& signals)
{
    int id;
    cout << "ID for deletion: ";
    cin >> id;

    for (size_t i = 0; i < signals.size(); ++i)
    {
        if (signals[i]->getId() == id)
        {
            delete signals[i];
            signals.erase(signals.begin() + i);
            return;
        }
    }
    cout << "No signal with ID " << id << ".\n";
}

int main()
{
    vector<Signal*> signals;
    int nextId = 1;
    int choice;

    do
    {
        printMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (Signal* signal = createSignal(nextId))
            {
                signals.push_back(signal);
                ++nextId;
            }
            break;
        case 2:
            showAll(signals);
            break;
        case 3:
            changeStatus(signals);
            break;
        case 4:
            deleteSignal(signals);
            break;
        case 0:
            break;
        default:
            cout << "Invalid choice.\n";
            break;
        }
    } while (choice != 0);

    for (Signal* signal : signals)
    {
        delete signal;
    }

    return 0;
}
