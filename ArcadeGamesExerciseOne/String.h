#ifndef __String__
#define __String__

class String
{
public:
	const char* value;

	String(const char* value);
	String(const String& value);
	~String();

	String operator + (String vector);
	bool operator == (String vector);

	int Length();
	void Clear();
private:
	int length;
};

#endif //__String__
