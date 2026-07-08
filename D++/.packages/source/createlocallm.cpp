struct loadbuf
{
    void* buffer();
    enum type
    {
        CompToken,
        CToken
    };
};

#include <windows.h>

void loadsystem()
{
    WINCLASS wc;
    wc.loadtype            = FunctionLoad(nullptr, "type", loadbuf::type::CompToken);
    wc.loadtype2           = FunctionLoad(nullptr, "type2", loadbuf::type::CToken);
}
