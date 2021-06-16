#pragma once
class Contact
{
private:
	//створення змінних-членів класу
	char* name_;
	long long phone_;

public:
	//CONSTRUCTOR
	Contact(const char* name, long long phone);

	//створення функції
	void setName(const char* name);
	void setPhone(long long phone);
	const char* getName();
	int getPhone();
	void ShowPhoneBook();
	
	//DESTRUCTOR
	~Contact();
};


