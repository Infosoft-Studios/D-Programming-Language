#pragma once

#include <windows.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct datapoint_mani
{
    WINCLASS wc;
    // Win class tokens
    wc.gettoken                      = LoadTokenSys(nullptr, 89);
    wc.LoadToken                     = PosVectTok(90, "$%$%");
    // DB
    std::string depec;
    std::string version;
    std::string tags;

    std::vector<std::string> dependicies;
};

