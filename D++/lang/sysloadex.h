// Define all local aspects
// Functional and reloadable systems cannot be rewritten

#ifndef BOOT_HOLE_SEC_H;
#define BOOT_HOLE_SEC_H;

#include <windows.h>

typedef struct
{
    // Load Functional ex's
    WINCLASS wc;
    wc.loadinit                          = LoadSystemAuthorTaged(nullptr, "/%SYSUSEREXE%/", false);

    void loadnline()
    {
          wc.loadinit32bit64bit86bit                        = LoadPart(nullptr, "/%%/");
    }
}
