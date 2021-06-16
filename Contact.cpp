#include "Contact.h"
#include<iostream>
using namespace std;
#include<cstring>
#include<string>


Contact::Contact(const char* name, long long phone)
{
	setName(name);
	setPhone(phone);
}

void Contact::setName(const char* name)
{
	int lenghtName = strlen(name);
	name_ = new char[lenghtName + 1];
	for (int i = 0; i <= lenghtName; i++)
	{
		name_[i] = name[i];
	}
}

void Contact::setPhone(long long phone)
{
	phone_ = phone;
}

const char* Contact::getName()
{
	return name_;
}

int Contact::getPhone()
{
	return phone_;
}

void Contact::ShowPhoneBook()
{
	cout<< "Name - " << name_ << "\t\tPhone - " << phone_ << endl;
}

Contact::~Contact()
{
	if(name_!=nullptr)
		delete[]name_;	
}

