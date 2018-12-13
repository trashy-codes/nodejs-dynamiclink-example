#pragma once
#include<string>

class sdk
{
public:
	sdk();
	~sdk();

	static __declspec(dllexport) std::string Test();
	//ษจร่
	static __declspec(dllexport) int Scan();
};
