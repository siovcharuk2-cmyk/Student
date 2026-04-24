#include <iostream>
#include "Student.h"

int main()
{
    Student student;
    std::cout << "===== Default =====\n";
    student.showInfo();

    std::cout << "\n===== Initialized =====\n";
    Student student1{ { "Ivan","Ivanenko","Ivanovich" },{2, 9, 2020},{"Oxford","Odesa","England"},{"Lviv","Ukraine"},"0988971015",56};
    student1.showInfo();
    
    student.setPib({ "Olexandr", "Ovcharuk", "Igorovich" });
    student.setBirthdate({ 11, 9, 2009 });
    student.setLocation({ "Rivne", "Ukraine" });
    student.setPhone("0123456789");
    student.setSchool({ "IT Step", "Cloud", "Ukraine" });
    student.setGroupNumber(511);

    std::cout << "\n===== Manually filled =====\n";

    student.showInfo();
}