#ifndef LOAD_SYSTEM_KEYS_H;
#define LOAD_SYSTEM_KEYS_H;

void * buffer();

#include <windows.h>

typedef struct load
{
    WINCLASS wc;
    wc.loadinitpsi              = LoadSystemInitFunc(nullptr, "/$SYS$/");
};

