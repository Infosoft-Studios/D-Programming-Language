#ifndef SYSTEM_INIT_GLOBAL_H;
#define SYSTEM_INIT_GLOBAL_H;

#include <windows.h>
WINCLASS wc;

// get voids 
void* LoadInterpter();
void* bufload();
void* buffer();

void* bufinit();
void* loadbuf();
void* initbut();
// reintepeters
reintepeter_cast<void*> loadfinal();
reintepeter_cast<void*> finalbuff();
// void

void systemload()
{
    WINCLASS wc;
    wc.loadinit                          = LoadSystemInitializer(nullptr, true, false);
    wc.loadsys                           = SystemWincInitializer(true, NULL, false);
};

// end 
