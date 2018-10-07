#include "Vector3.h"

template <class T>
Vector3<T>::Vector3(void)
{
	this->pointX = T();
	this->pointY = T();
	this->pointZ = T();
}

template<class T>
Vector3<T>::Vector3(T pointX, T pointY, T pointZ)
{
	this->pointX = pointX;
	this->pointY = pointY;
	this->pointZ = pointZ;
}

template<class T>
Vector3<T>::Vector3(const Vector3<T>* vector)
{
	this->pointX = vector->GetPointX();
	this->pointY = vector->GetPointY();
	this->pointZ = vector->GetPointZ();
}

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
float Vector3<T>::DistanceTo(Vector3<T> vector)
{
	return hypot(hypot(pointX - vector.GetPointX(), pointY - vector.GetPointY()), pointZ - vector.GetPointZ());
}

template<class T>
Vector3<T> Vector3<T>::operator+(Vector3<T> vector)
{
	return Vector3<T>(pointX + vector.GetPointX(), pointY + vector.GetPointY(), pointZ + vector.GetPointZ());
}

template<class T>
T Vector3<T>::GetPointX()
{
	return pointX;
}

template<class T>
T Vector3<T>::GetPointY()
{
	return pointY;
}

template<class T>
T Vector3<T>::GetPointZ()
{
	return pointZ;
}
