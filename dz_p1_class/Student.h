#pragma once
#include <cstring>

struct Pib
{
	char* name;
	char* surname;
	char* father;

	Pib(const char* n, const char* s, const char* f)
		: name{ n ? new char[strlen(n) + 1] : nullptr },
		  surname{ s ? new char[strlen(s) + 1] : nullptr },
		  father{ f ? new char[strlen(f) + 1] : nullptr }
	{
		if (name) strcpy_s(name, strlen(n) + 1, n);
		if (surname) strcpy_s(surname, strlen(s) + 1, s);
		if (father) strcpy_s(father, strlen(f) + 1, f);
	}

	Pib(const Pib& other)
		: Pib(other.name, other.surname, other.father)
	{ }

	~Pib()
	{
		delete[] name;
		delete[] surname;
		delete[] father;
	}
};

struct Birthdate
{
	short day;
	short month;
	short year;

	Birthdate(short d, short m, short y) :
		day{ d },
		month{ m },
		year{ y }
	{ }
};

struct School
{
	char* name;
	char* city;
	char* country;

	School(const char* name1, const char* city1, const char* country1)
		: name{ name1 ? new char[strlen(name1) + 1] : nullptr },
		  city{ city1 ? new char[strlen(city1) + 1] : nullptr },
		  country{ country1 ? new char[strlen(country1) + 1] : nullptr }
	{
		if (name) strcpy_s(name, strlen(name1) + 1, name1);
		if (city) strcpy_s(city, strlen(city1) + 1, city1);
		if (country) strcpy_s(country, strlen(country1) + 1, country1);
	}

	School(const School& other)
		: School(other.name, other.city, other.country) 
	{ }

	~School()
	{
		delete[] name;
		delete[] city;
		delete[] country;
	}
};

struct Location
{
	char* city;
	char* country;

	Location(const char* city1, const char* country1)
		: city{ city1 ? new char[strlen(city1) + 1] : nullptr },
		  country{ country1 ? new char[strlen(country1) + 1] : nullptr }
	{
		if (city) strcpy_s(city, strlen(city1) + 1, city1);
		if (country) strcpy_s(country, strlen(country1) + 1, country1);
	}

	Location(const Location& other)
		: Location(other.city, other.country)
	{ }

	~Location()
	{
		delete[] city;
		delete[] country;
	}
};

class Student
{
protected:
	static int objCount;

	Pib pib;
	Birthdate birthdate;
	School school;
	Location location;
	char phone_number[11];
	unsigned int group_number;

public:
	Student(const Pib& p, const Birthdate& b, const School& s, const Location& l, const char* p_n, int g_n) :
		pib{ p },
		birthdate{ b },
		school{ s },
		location{ l },
		group_number{ (unsigned int)g_n }
	{
		objCount++;
		if (p_n) strcpy_s(phone_number, 11, p_n);
		else strcpy_s(phone_number, 11, "0000000000");
	}

	Student() : Student
	{
		{nullptr, nullptr, nullptr},
		{1,1,1900},
		{nullptr, nullptr, nullptr},
		{nullptr, nullptr},
		"0000000000",
		0
	}
	{ }

	void setPib(const Pib& newPib);
	void setBirthdate(const Birthdate& newDate);
	void setSchool(const School& newSchool);
	void setLocation(const Location& newLoc);
	void setPhone(const char newPhone[]);
	void setGroupNumber(int newGroup);

	Pib getPib();
	Birthdate getBirthdate();
	School getSchool();
	Location getLocation();
	char* getPhoneNumber();
	int getGroupNumber();

	void showInfo();

	static int getObjCount();
};

