/*
2026 (C) Infosoft SA(Single author) program
File created for D++ Advanced Kernel memory KMB

*/

#ifndef LOAD_BASED_INDEXED_DPP_H;
#define LOAD_BASED_INDEXED_DPP_H;

#include <windows.h>
#include <stdio.h>

typedef struct engload
{
    WINCLASS wc;
    wc.loadpart          = LoadInit(nullptr, "/$sy%s%/$");
    wc.loadinit          = FuncInit(true, "$/type/$");
};

