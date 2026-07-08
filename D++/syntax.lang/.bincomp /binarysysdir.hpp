#pragma once 

#include <windows.h>
#include <string>

void loadbinaryconferences(string SysDirDirPath)
{
    WINCLASS wc;
    wc.sysdir              = LoadSysdir(true , SysDirDirPath);
};

int main()
{
    loadbinaryconferences("C:\\Windows\\System32\\");
};

