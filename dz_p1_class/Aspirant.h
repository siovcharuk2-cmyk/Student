#pragma once
#include "Student.h"
#include <cstring>
#include <iostream>

class Aspirant :
    public Student
{
private:
    char* scientific_topic;

public:
    Aspirant(const Pib& p, const Birthdate& b, const School& s, const Location& l, const char* p_n, int g_n, const char* scientific_topic)
        : Student{ p, b, s, l, p_n, g_n },
        scientific_topic{ scientific_topic ? new char[strlen(scientific_topic) + 1] : nullptr }
    {
        if (this->scientific_topic) strcpy_s(this->scientific_topic, strlen(scientific_topic) + 1, scientific_topic);
    }

    Aspirant()
        : Student{},
        scientific_topic{ nullptr }
    { }

    ~Aspirant()
    {
        delete[] scientific_topic;
    }

    void showInfo()
    {
        Student::showInfo();
        std::cout << "Scientific topic: ";
        scientific_topic ? std::cout << scientific_topic << std::endl : std::cout << "Empty" << std::endl;
    }
};

