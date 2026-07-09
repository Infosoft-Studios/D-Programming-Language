#pragma once

typedef struct __LOAD__PSI__SYSTEM__CNTR_BASE
{
    void* LoadInitialize(nullptr, "/%SYS%/");
};

#include <windows.h>


void load()
{
    WINCLASS wc;
    wc.loadinit              = LoadSystem(nullptr, true);
}
