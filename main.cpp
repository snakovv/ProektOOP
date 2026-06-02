#include <iostream>
#include <vector>
#include "RoadIssue.h"
#include "LightingIssue.h"
#include "WasteIssue.h"

int main()
{
    std::vector<Signal*> signals;
    int nextId = 1;
    int choice;

    do
    {
        std::cout << "\n===== VillageAlert =====\n";
        std::cout << "1. Submit Signal\n";
        std::cout << "2. Show All Signals\n";
        std::cout << "3. Change Status (admin)\n";
        std::cout << "4. Delete Signal\n";
        std::cout << "0. Exit\n";
        std::cout << "Choice: ";
        std::cin >> choice;

        if(choice == 1)
        {
            int type;
            std::string title, location;

            std::cout << "1. Road Issue 2. Lighting Issue 3. Waste Issue: ";
            std::cin >> type;

            std::cin.ignore();

            std::cout << "Title: ";
            getline(std::cin, title);

            std::cout << "Location: ";
            getline(std::cin, location);

            if(type == 1)
            {
                int size;
                std::cout << "Size: ";
                std::cin >> size;

                signals.push_back(new RoadIssue(nextId++, title, location, size));
            }
            else if(type == 2)
            {
                int lamp;
                std::cout << "Lamp Number: ";
                std::cin >> lamp;

                signals.push_back(new LightingIssue(nextId++, title, location, lamp));
            }
            else if(type == 3)
            {
                std::string typeWaste;
                std::cin.ignore();

                std::cout << "Waste Type: ";
                getline(std::cin, typeWaste);

                signals.push_back(new WasteIssue(nextId++, title, location, typeWaste));
            }
        }
        else if(choice == 2)
        {
            for(auto s : signals)
                s->showInfo();
        }
        else if(choice == 3)
        {
            int id;
            std::string status;

            std::cout << "ID: ";
            std::cin >> id;

            std::cin.ignore();

            std::cout << "New Status: ";
            getline(std::cin, status);

            for(auto s : signals)
                if(s->getId() == id)
                    s->changeStatus(status);
        }
        else if(choice == 4)
        {
            int id;
            std::cout << "ID for deletion: ";
            std::cin >> id;

            for(size_t i = 0; i < signals.size(); i++)
            {
                if(signals[i]->getId() == id)
                {
                    delete signals[i];
                    signals.erase(signals.begin() + i);
                    break;
                }
            }
        }

    } while(choice != 0);

    for(auto s : signals)
        delete s;

    return 0;
}