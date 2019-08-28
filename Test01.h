#pragma once
#include <vector>
#include <string>

class ITest
{
public:
	ITest(const std::vector<std::string>&) {}

	virtual void Test() = 0;
};

class Test01 : ITest
{
public:
	Test01(const std::vector<std::string>& ArrString);
	~Test01();

	virtual void Test() override;

private:
	int x = 0;
	int y = 0;
	
};
