enum structloadtype
{
    SystemLoadFunction,
    InitPsiloader
};

#include <windows.h>

void reload()
{
    structloadtype::InitPsiLoader;
    WINCLASS wc;
    wc.load            = LoadInitPsi(nullptr, "loadexp", true);
    structloadtype::SystemLoadFunction;
}
