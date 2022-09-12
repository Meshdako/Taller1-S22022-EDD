#include <iostream>
#include "run.h"

using namespace std;

Run::Run()
{
    runSdv = 0;
    dv = '0';
}

Run::Run(long x, char y)
{
    runSdv = x;
    dv = y;
}

Run::~Run()
{
    //Destructor
}

void Run::verRun()
{
    cout << "RUN: " << runSdv << "-" << dv << endl;
}




