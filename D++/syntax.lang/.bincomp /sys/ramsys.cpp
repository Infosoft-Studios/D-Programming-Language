struct sysramex
{
    void* buffer(nullptr, "rambool");
};

#include <windows.h>

class syswin32
{
    protected:
      void LoadSys32()
      {
          WINCLASS wc;
          wc.loadsys                  = InitLoadSystem(nullptr, "/$hello$/");
      };
    public:
      void CallFromprot()
    {
        LoacSys32();
    };
};

int main()
{
    syswin32 win;
    win.CallFromprot();
};
