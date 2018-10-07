#include <iostream>
#include "Vector3.h"
#include "Vector3.cpp"
#include "String.h"

using namespace std;

int main()
{
	//Begin Vector3
	Vector3<int> a();

	Vector3<int> b(3,1,2);

    Vector3<float> c = b.Normalize();

	Vector3<float> d(c);

	Vector3<int> vectorUno(1, 2, 3);
	Vector3<int> vectorDos(-1, 2, 0);

	float distance = vectorUno.DistanceTo(vectorDos);

	Vector3<int> sumResult = vectorUno + vectorDos;
	//End Vector3

	//Begin String
	String stringUno("stringUno");
	String secondString("SecondString");

	String sum = stringUno + secondString;

	String test(sum);

	test.Clear();


	String testEquals("testEquals");
	String testEqualsTwo("testEquals");

	if (testEquals == "testEquals" || testEquals == testEqualsTwo)
	{
		cout << "Equals" << endl;
	}
	else 
	{
		cout << "Diferents" << endl;
	}

	//End String

	cout << ":)" << endl;

	cin.get();
	return 0;
}