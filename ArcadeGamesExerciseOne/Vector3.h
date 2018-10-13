#ifndef __Vector3__
#define __Vector3__

#include <math.h>

template <class T>
class Vector3
{
public:
	T pointX;
	T pointY;
	T pointZ;

	Vector3();
	Vector3(const T pointX, const T pointY, const T pointZ);
	Vector3(const Vector3<T>* vector);

	~Vector3();

	Vector3<float> Normalize();
	float DistanceTo(const Vector3<T> *vector);

	Vector3<T>& operator +(const Vector3<T> &vector);

};


template <class T>
Vector3<T>::Vector3() :
pointX(T()),
pointY(T()),
pointZ(T()) {}

template<class T>
Vector3<T>::Vector3(T pointX, T pointY, T pointZ) : 
	pointX(pointX),
	pointY(pointY),
	pointZ(pointZ) {}

template<class T>
Vector3<T>::Vector3(const Vector3<T>* vector) : 
	pointX(vector->GetPointX()),
	pointY(vector->GetPointY()),
	pointZ(vector->GetPointZ()) {}

template <class T>
Vector3<T>::~Vector3(void)
{
}

template<class T>
Vector3<float> Vector3<T>::Normalize()
{
	float length = sqrt(pointX * pointX + pointY * pointY + pointZ * pointZ);

	Vector3<float> result(pointX / length, pointY / length, pointZ / length);

	return result;
}

template<class T>
float Vector3<T>::DistanceTo(const Vector3<T> *vector)
{
	return sqrt((pointX - vector->pointX) ^ 2 + (pointY - vector->pointY) ^ 2 + (pointZ - vector->pointZ) ^ 2);
}

template<class T>
Vector3<T>& Vector3<T>::operator+(const Vector3<T> &vector)
{
	Vector3<T> resutl(pointX + vector.pointX, pointY + vector.pointY, pointZ + vector.pointZ);
	return resutl;
}

#endif //__Vector3__
