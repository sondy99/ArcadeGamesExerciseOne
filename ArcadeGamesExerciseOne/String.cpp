#include "String.h"
#include <stdlib.h>

String::String()
{
	value = nullptr;
	length = 0;
}

String::String(const char* value)
{
	CopyIntoInternalValue(value);
	Length();
}

String::String(const String & string)
{
	CopyIntoInternalValue(string.value);
	Length();
}

String::~String()
{
}

String& String::operator+(const String &vector)
{
	const char* currentValueAux = value;
	const char* vectorValueAux = vector.value;
	int lengthVector = vector.length;
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

bool String::operator==(const String& vector)
{
	const char* currentValueAux = value;
	const char* vectorValueAux = vector.value;
	int lengthVector = vector.length;

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
	length = Length(value);

	return length;
}

int String::Length(const char* value)
{
	int result = 0;

	while (*value++ != 0) {
		++result;
	}

	return result;
}

void String::CopyIntoInternalValue(const char * value)
{
	int length = Length(value);

	char * copyed = (char*)malloc(length + 1);
	char* iterador = copyed;
	while (*iterador++ = *value++);

	this->value = copyed;
}


void String::Clear()
{
	value = nullptr;
	length = 0;
}
