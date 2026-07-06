#include <windows.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// create the load type
struct xarobat
{
    WINCLASS wc;
    wc.loadkrnl             = KernelSSD(nullptr, 0x00004fdf); // float

    enum token
    {
        prasser,
        tokentype,
        DataTokenType
    };

    std::string depend;
    std::vector<std::string> winmat;
    wc.loadsystem               = LoadKernelBasedXXD86(0x00045f);
    if (winmat != token::prasser)
    {
        wc.load             = Dependieses(nullptr);
    };
}
