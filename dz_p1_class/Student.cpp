#include "Student.h"
#include <cstring>
#include <iostream>

void Student::setPib(Pib newPib)
{
    strcpy_s(pib.name, newPib.name);
    strcpy_s(pib.surname, newPib.surname);
    strcpy_s(pib.father, newPib.father);
}

void Student::setBirthdate(Birthdate newDate)
{
    birthdate = newDate;
}

void Student::setSchool(School newSchool)
{
    strcpy_s(school.city, newSchool.city);
    strcpy_s(school.country, newSchool.country);
    strcpy_s(school.name, newSchool.name);
}

void Student::setLocation(Location newLoc)
{
    strcpy_s(location.city, newLoc.city);
    strcpy_s(location.country, newLoc.country);
}

void Student::setPhone(const char newPhone[])
{
    strcpy_s(phone_number, newPhone);
}

void Student::setGroupNumber(int newGroup)
{
    group_number = newGroup;
}


Pib Student::getPib() { return pib; }

Birthdate Student::getBirthdate() { return birthdate; }

School Student::getSchool() { return school; }

Location Student::getLocation() { return location; }

char* Student::getPhoneNumber() { return phone_number; }

int Student::getGroupNumber() { return group_number; }


void Student::showInfo()
{
    std::cout << std::endl
        << "Name: " << pib.name << std::endl
        << "Surname: " << pib.surname << std::endl
        << "Father: " << pib.father << std::endl
        << "Date: " << birthdate.day << "/" << birthdate.month << "/" << birthdate.year << std::endl
        << "Phone number: " << "+38" << phone_number << std::endl
        << "City: " << location.city << std::endl
        << "Country: " << location.country << std::endl
        << std::endl
        << "School: " << std::endl
        << "Name: " << school.name << std::endl
        << "City: " << school.city << std::endl
        << "Country: " << school.country << std::endl;
}