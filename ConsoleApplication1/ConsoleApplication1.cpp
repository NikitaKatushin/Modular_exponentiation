#include <iostream>
#include <stdio.h>
#include <stdint.h>

using namespace std;

uint64_t a = 131999920;
uint64_t b = 234979;
uint64_t c = 991540365;
uint64_t d = 1;

template<class T>
uint64_t Com(T num, T pow, T mod, T value)
{
	if (pow == 0) {
		return value;
	}

	if (pow & 1) {
		value = (value * num) % mod;
		pow >>= 1;
		return Com(num * num % mod, pow, mod, value);
	}
	else
	{
		pow >>= 1;
		return Com(num * num % mod, pow, mod, value);
	}
};


int main()
{

	cout << Com(a, b, c, d) << endl;

}
