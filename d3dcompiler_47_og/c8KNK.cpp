#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include "ccPlayer.h"
#include "c8KNK.h"

using namespace moddingApi;
using namespace std;

c8KNK::c8KNK(int pln)
{
	ccPlayer c;
	int en = 1;
	if (pln == 1) en = 0;

	uintptr_t p = c.GetPlayerInfo(pln);
	uintptr_t s = c.GetPlayerStatus(pln);
	uintptr_t ep = c.GetPlayerInfo(en);
	uintptr_t es = c.GetPlayerStatus(en);
}

void c8KNK::Loop(int pln)
{
	ccPlayer c;
	int en = 1;
	if (pln == 1) en = 0;

	uintptr_t p = c.GetPlayerInfo(pln);
	uintptr_t s = c.GetPlayerStatus(pln);
	uintptr_t ep = c.GetPlayerInfo(en);
	uintptr_t es = c.GetPlayerStatus(en);
}
