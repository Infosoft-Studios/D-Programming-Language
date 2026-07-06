#include <windows.h>
#include <raylib.h>
#include <iostream>
using namespace std;
WINCLASS wc;

enum WINDOWSWIN
{
    prazzer,
    Token,
    TokenExeedLimit,
    runtime,
    entity,
    cpu_timeout,
    obj
};

void system_load()
{
    WINDOWSWIN ww;
    ww::prazzer                 = RuntieEntyty(nullptr, 9);
    ww::Token                   = Tokenizer(nullptr, 3);
    // wc parts too
    wc.loadtokens               = RuntimeTokens(nullptr, 0);
    wc.gettokens                = ww::Token;

    return 0;
};
