#include "romano.hpp"
#include <iostream>

#ifndef Teste
#define Teste romanoInt
#endif

using namespace std;
//CPP CHECK FUNCIONANDO
//CPP LINT FUNCIONANDO
//VALGRIND SEM ERRO
int main()
{
    romanoInt obj;
	string str = "II";
	cout << str << " em números arábicos é: " << obj.romanToInt(str) << endl;

	string str = "MMDLXXXI";
	cout << str << " em números arábicos é: " << obj.romanToInt(str) << endl;

	string str = "V";
	cout << str << " em números arábicos é: " << obj.romanToInt(str) << endl;

	string str = "L";
	cout << str << " em números arábicos é: " << obj.romanToInt(str) << endl;

	string str = "MMM";
	cout << str << " em números arábicos é: " << obj.romanToInt(str) << endl;

	return 0;
}