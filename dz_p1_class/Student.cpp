#include "Student.h"
#include <cstring>
#include <iostream>

void Student::setPib(const Pib& newPib)
{
    delete[] pib.name;
    delete[] pib.surname;
    delete[] pib.father;

    if (newPib.name)
    {
        pib.name = new char[strlen(newPib.name) + 1];
        strcpy_s(pib.name, strlen(newPib.name) + 1, newPib.name);
    }
    else pib.name = nullptr;

    if (newPib.surname)
    {
        pib.surname = new char[strlen(newPib.surname) + 1];
        strcpy_s(pib.surname, strlen(newPib.surname) + 1, newPib.surname);
    }
    else pib.surname = nullptr;

    if (newPib.father)
    {
        pib.father = new char[strlen(newPib.father) + 1];
        strcpy_s(pib.father, strlen(newPib.father) + 1, newPib.father);
    }
    else pib.father = nullptr;
}

void Student::setBirthdate(const Birthdate& newDate)
{
    birthdate = newDate;
}

void Student::setSchool(const School& newSchool)
{
    delete[] school.name;
    delete[] school.city;
    delete[] school.country;

    if (newSchool.name)
    {
        school.name = new char[strlen(newSchool.name) + 1];
        strcpy_s(school.name, strlen(newSchool.name) + 1, newSchool.name);
    }
    else school.name = nullptr;

    if (newSchool.city)
    {
        school.city = new char[strlen(newSchool.city) + 1];
        strcpy_s(school.city, strlen(newSchool.city) + 1, newSchool.city);
    }
    else school.city = nullptr;

    if (newSchool.country)
    {
        school.country = new char[strlen(newSchool.country) + 1];
        strcpy_s(school.country, strlen(newSchool.country) + 1, newSchool.country);
    }
    else school.country = nullptr;
}

void Student::setLocation(const Location& newLoc)
{
    delete[] location.city;
    delete[] location.country;

    if (newLoc.city)
    {
        location.city = new char[strlen(newLoc.city) + 1];
        strcpy_s(location.city, strlen(newLoc.city) + 1, newLoc.city);
    }
    else location.city = nullptr;

    if (newLoc.country)
    {
        location.country = new char[strlen(newLoc.country) + 1];
        strcpy_s(location.country, strlen(newLoc.country) + 1, newLoc.country);
    }
    else location.country = nullptr;
}

void Student::setPhone(const char newPhone[])
{
    if (newPhone) strcpy_s(phone_number, 11, newPhone);
}

void Student::setGroupNumber(int newGroup)
{
    if (newGroup > 0) group_number = newGroup;
    else group_number = 0;
}


Pib Student::getPib() { return pib; }

Birthdate Student::getBirthdate() { return birthdate; }

School Student::getSchool() { return school; }

Location Student::getLocation() { return location; }

char* Student::getPhoneNumber() { return phone_number; }

int Student::getGroupNumber() { return group_number; }


void Student::showInfo()
{
    std::cout << "Name: ";
    pib.name ? std::cout << pib.name << std::endl : std::cout << "Empty" << std::endl;

    std::cout << "Surname: ";
    pib.surname ? std::cout << pib.surname << std::endl : std::cout << "Empty" << std::endl;

    std::cout << "Father: ";
    pib.father ? std::cout << pib.father << std::endl : std::cout << "Empty" << std::endl;

    std::cout << "Date: " << birthdate.day << "/" << birthdate.month << "/" << birthdate.year << std::endl;

    std::cout << "Phone number: +38";
    phone_number ? std::cout << phone_number << std::endl : std::cout << "Empty" << std::endl;

    std::cout << "City: ";
    location.city ? std::cout << location.city << std::endl : std::cout << "Empty" << std::endl;

    std::cout << "Country: ";
    location.country ? std::cout << location.country << std::endl : std::cout << "Empty" << std::endl;

    std::cout << "\nSchool:" << std::endl;

    std::cout << "Name: ";
    school.name ? std::cout << school.name << std::endl : std::cout << "Empty" << std::endl;

    std::cout << "City: ";
    school.city ? std::cout << school.city << std::endl : std::cout << "Empty" << std::endl;

    std::cout << "Country: ";
    school.country ? std::cout << school.country << std::endl : std::cout << "Empty" << std::endl;
}