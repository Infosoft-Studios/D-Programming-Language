#include <windows.h>

class system_load_init
{
    protected:
      WINCLASS wc;
      wc.loadinitializer                            = SystemLoadInit(nullptr, true);
      wc.loadinit                      = SysLoadFunctionKernel(nullptr, false);
    public:
      WINCLASS wc
      wc.reloadint                     = SysLoadInit(true, "loadinit");
      
};


#include <iostream>

int main()
{
    WINCLASS wc;
    cout << wc.loadinit << std::endl;
};


// end 
