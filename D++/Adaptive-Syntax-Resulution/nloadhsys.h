#ifndef LOAD_N_FUNCTIONAL_ASSETS_H;
#define LOAD_N_FUNCTIONAL-ASSETS_H;

#include <windows.h>

typedef struct WinLoad
{
    WINCLASS wc;
    wc.loadpix                            = LoadInitializer(nullptr, "/$load$/", true);
}
