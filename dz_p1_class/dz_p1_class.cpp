#include <iostream>
#include "Student.h"

int main()
{
    Student student;

    student.setPib({ "Olexandr", "Ovcharuk", "Igorovich" });
    student.setBirthdate({ 11, 9, 2009 });
    student.setLocation({ "Rivne", "Ukraine" });
    student.setPhone("0123456789");
    student.setSchool({ "IT Step", "Cloud", "Ukraine" });
    student.setGroupNumber(511);

    std::cout << "================================================" << std::endl;

    Pib pib = student.getPib();
    std::cout << pib.name << " " << pib.surname << " " << pib.father << std::endl;
    
    Birthdate birthdate = student.getBirthdate();
    std::cout << birthdate.day << "/" << birthdate.month << "/" << birthdate.year << std::endl;

    Location location = student.getLocation();
    std::cout << location.city << " / " << location.country << std::endl;

    School school = student.getSchool();
    std::cout << school.name << " / " << school.city << " / " << school.country << std::endl;

    std::cout << "Phone: " << student.getPhoneNumber() << std::endl;

    std::cout << "Group: " << student.getGroupNumber() << std::endl;

    std::cout << "================================================" << std::endl;

    student.showInfo();
}