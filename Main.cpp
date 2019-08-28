#include "pch.h"

using namespace std;

#include <limits>
#include "Test01.h"

template<typename T>
[[nodiscard]] T Input()
{
	T val;

	while (true)
	{
		cin >> val;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');

			cout << typeid(T).name() << " : 입력 에러" << endl;
		}
		else { break; }
	}

	cin.ignore(INT_MAX, '\n');
	return val;
}

int main(int n, const char* ar[])
{
	int a = Input<int>();

	cout << a << endl;

	std::string s = Input<std::string>();

	cout << s << endl;
	

	getchar();

	return 0;
}
