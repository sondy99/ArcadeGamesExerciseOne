#ifndef __String__
#define __String__

class String
{
public:
	String();
	String(const char* value);
	String(const String& string);
	~String();

	String& operator + (const String &vector);
	bool operator == (const String& vector);

	int Length();
	void Clear();
private:
	const char* value;
	int length;

	int Length(const char* value);
	void CopyIntoInternalValue(const char* value);
};

#endif //__String__
