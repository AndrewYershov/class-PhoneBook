#pragma once
class Contact
{
private:
	//��������� ������-����� �����
	char* name_;
	long long phone_;

public:
	//CONSTRUCTOR
	Contact(const char* name, long long phone);

	//��������� �������
	void setName(const char* name);
	void setPhone(long long phone);
	const char* getName();
	int getPhone();
	void ShowPhoneBook();
	
	//DESTRUCTOR
	~Contact();
};


