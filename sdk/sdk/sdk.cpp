#include "stdafx.h"
#include "sdk.h"

void  sdk::Test(char* string)
{
	strcpy_s(string, 100, "hello world");
}

