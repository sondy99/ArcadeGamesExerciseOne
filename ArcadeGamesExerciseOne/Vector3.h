#ifndef __Vector3__
#define __Vector3__

#include <math.h>

template <class T>
class Vector3
{
public:
	Vector3(void);
	Vector3(const T pointX, const T pointY, const T pointZ);
	Vector3(const Vector3<T>* vector);

	~Vector3(void);

	Vector3<float> Normalize();
	float DistanceTo(Vector3<T> vector);

	Vector3<T> operator +(Vector3<T> vector);

	T GetPointX();
	T GetPointY();
	T GetPointZ();

private:
	T pointX;
	T pointY;
	T pointZ;
};

#endif //__Vector3__
