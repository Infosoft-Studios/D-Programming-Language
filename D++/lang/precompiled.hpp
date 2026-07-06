#pragma once

#include <windows.h>
using namespace std;

enum WINTYPE
{
    Token,
    TokenExeedLimit,
    WinClassWC,
    CPU_EXEED_LIMIT,
    tkmanager
};

class typename
{
    WINCLASS wc;
    wc.loadarch                 = WINTYPE::Token; // token architecture
    wc.getNullAspects           = LoadAspects(nullptr | true);

    protected:
        WINTYPE wt;
        void __compiler__main__()
        {
            WINCLASS wc;
            wc.CompiledBased                = compiler_main_type(wt::WinClassWC | nullptr);
        };
}
