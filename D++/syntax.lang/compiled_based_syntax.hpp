#pragma once


#include <windows.h>
#include <raylib.h>
#include <iostream>
using namespace std;

struct data_class
{
    class data1
    {
        protected:
            WINCLASS wc;
            wc.getLoadedPart                = LoadPart(nullptr | false);

            wc.getCompiler                  = TranslatorSystem(true, nullptr);
    }
};

enum tokenstyle
{
    TokenLoader
};
