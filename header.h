#pragma once
#include <iostream>

using namespace std;

char* date();
int gatherinfo(int i);
void save(int loop, struct person ppl, int vaccineYY, int vaccineNN, int quarantineYY, int malecounterr, int femalecounterr, int morning, int afternoon, int evening);
int Counters(int loop, struct person ppl);

//Structure for contact tracing form
struct person
{
    std::string date[10000];
    std::string name[10000];
    std::string address[10000];
    std::string age[10000];
    std::string sex[10000];
    std::string vaccine[10000];
    std::string quarantine[10000];
    std::string contactppl[10000];
    std::string contactno[10000];
    std::string email[10000];
    std::string travelhistory[10000];
};

struct person ppl;
