#pragma once

struct Pib
{
	char name[20];
	char surname[30];
	char father[25];
};

struct Birthdate
{
	short day;
	short month;
	short year;
};

struct School
{
	char name[64];
	char city[32];
	char country[32];
};

struct Location
{
	char city[32];
	char country[32];
};

class Student
{
private:
	Pib pib;
	Birthdate birthdate;
	School school;
	Location location;
	char phone_number[11];
	int group_number;

public:
	void setPib(Pib newPib);
	void setBirthdate(Birthdate newDate);
	void setSchool(School newSchool);
	void setLocation(Location newLoc);
	void setPhone(const char newPhone[]);
	void setGroupNumber(int newGroup);

	Pib getPib();
	Birthdate getBirthdate();
	School getSchool();
	Location getLocation();
	char* getPhoneNumber();
	int getGroupNumber();

	void showInfo();
};

