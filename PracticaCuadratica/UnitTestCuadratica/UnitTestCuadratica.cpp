#include "pch.h"
#include "CppUnitTest.h"
#include "../Cuadratica/Cuadratica.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestCuadratica
{
	TEST_CLASS(UnitTestCuadratica)
	{
	public:
		
		TEST_METHOD(TestCaso1) {
			a = 1;
			b = 4;
			c = 5;
			operacion();
			Assert::AreEqual(1, sol, L"Error en la función operacion: el resultado del discriminante no es el esperado.");
		}

		TEST_METHOD(TestCaso2) {
			a = 1;
			b = -6;
			c = 9;
			operacion();
			Assert::AreEqual(2, sol, L"Error en la función operacion: el resultado del discriminante no es el esperado.");

			Assert::AreEqual(5.0, x1, L"Error en la función operacion: el resultado del discriminante no es el esperado.");
		}

		TEST_METHOD(TestCaso3) {
			a = 1;
			b = -3;
			c = 2;
			operacion();
			Assert::AreEqual(0, sol, L"Error en la función operacion: el resultado del discriminante no es el esperado.");
			Assert::AreEqual(3.0, x1, L"Error en la función operacion: el resultado del discriminante no es el esperado.");
			Assert::AreEqual(2.0, x2, L"Error en la función operacion: el resultado del discriminante no es el esperado.");
		}
	};
}