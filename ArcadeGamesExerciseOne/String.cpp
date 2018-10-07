#include "String.h"
#include <stdlib.h>

String::String(const char* value) : value(value)
{
	Length();
}

String::String(const String & string) : value(string.value)
{
	Length();
}

String::~String()
{
}

String String::operator+(String vector)
{
	const char* currentValueAux = value;
	const char* vectorValueAux = vector.value;
	int lengthVector = vector.Length();
	char* resultChar = (char*)malloc(length + lengthVector);
	char* iterador = resultChar;

	for (int i = 0; i < length; i++) {
		*iterador++ = *currentValueAux++;
	}

	for (int i = 0; i < lengthVector; i++) {
		*iterador++ = *vectorValueAux++;
	}

	*iterador = '\0';

	String result(resultChar);

	return result;
}

bool String::operator==(String vector)
{
	const char* currentValueAux = value;
	const char* vectorValueAux = vector.value;
	int lengthVector = vector.Length();

	if (length != lengthVector) 
	{
		return false;
	}

	for (int i = 0; i < length; i++) {
		if(*currentValueAux++ != *vectorValueAux++)
			return false;
	}

	return true;
}

int String::Length()
{
	const char* stringAux = value;
	
	length = 0;

	while (*stringAux++ != 0) {
		++length;
	}

	return length;
}

void String::Clear()
{
	value = nullptr;
	length = 0;
}
