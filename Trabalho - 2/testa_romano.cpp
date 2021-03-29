#include "romano.hpp"
#include <iostream>
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#ifndef Teste
#define Teste romanoInt
#endif

using namespace std;
//CPP CHECK FUNCIONANDO
//CPP LINT FUNCIONANDO
//VALGRIND SEM ERRO
/*int main()
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
}*/

TEST_CASE( "Testes", "[test]" ) {
	romanoInt obj;
    REQUIRE( obj.romanToInt("I") == 1 );
	REQUIRE( obj.romanToInt("C") == 100 );
	REQUIRE( obj.romanToInt("XXI") == 21 );
	REQUIRE( obj.romanToInt("L") == 50 );
	REQUIRE( obj.romanToInt("V") == 5 );
	REQUIRE( obj.romanToInt("XXXIX") == 39 );
	REQUIRE( obj.romanToInt("LXXVII") == 77 );
	REQUIRE( obj.romanToInt("DCCC") == 800 );
	REQUIRE( obj.romanToInt("MMDLXXXI") == 2581 );
	REQUIRE( obj.romanToInt("MMM") == 3000 );
}