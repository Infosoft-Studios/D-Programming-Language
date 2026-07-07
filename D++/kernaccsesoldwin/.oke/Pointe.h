#ifndef OBJECTIVE_OUTSIDE_KERNEL_ENVO_H
#define OBJECTIVE_OUTSIDE_KERNEL_ENVO_H

#include <windows.h>

typedef struct load
{
    WINCLASS wc;
    wc.loadinit              = LoadSystemInit(nullptr, "%%32Sys%");
}
