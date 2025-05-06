#include "pch.h"
#include "CppUnitTest.h"
#include "../Calculator/Calculator.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestCalculator
{
	TEST_CLASS(UnitTestCalculator)
	{
	public:
		
		TEST_METHOD(TestSuma)
		{
			a = 7;
			b = 5;
			sumar();
			Assert::AreEqual(12, suma,
				L"Error en la función sumar: el resultado no es el esperado.");
		}

		TEST_METHOD(TestResta)
		{
			a = 7;
			b = 5;
			restar();
			Assert::AreEqual(2, resta,
				L"Error en la función restar: el resultado no es el esperado.");
		}

		TEST_METHOD(TestMultiplicacion)
		{
			a = 7;
			b = 5;
			multiplicar();
			Assert::AreEqual(35, multiplicacion,
				L"Error en la función sumar: el resultado no es el esperado.");
		}

		TEST_METHOD(TestDivision)
		{
			a = 7;
			b = 5;
			dividir();
			Assert::AreEqual((1.4), division,
				L"Error en la función sumar: el resultado no es el esperado.");
		}
	};
}