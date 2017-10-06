// ConsoleApplication34.cpp: 定义控制台应用程序的入口点。
//3.4.cpp寻找11-999之间自身，平方，；立方均为回文数的数字

#include "stdafx.h"
#include<iostream>
using namespace std;

bool choose(unsigned n) {
	unsigned i = n;
	unsigned m = 0;
	while (i > 0) {
		m = m * 10 + i % 10;
		i /= 10;
	}
	return m == n;
}

int main()
{
	for (unsigned m = 11; m<1000; m++)
		if (choose(m) && choose(m*m) && choose(m*m*m)) {
			cout << "m=" << m;
			cout << " m*m=" << m*m;
			cout << " m*m*m=" << m*m*m << endl;
		}
	return 0;
}

