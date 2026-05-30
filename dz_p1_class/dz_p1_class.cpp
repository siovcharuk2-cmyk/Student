#include <iostream>
#include "Student.h"
#include "Aspirant.h"

int main()
{
    //Student student;
    //std::cout << "===== Default =====\n";
    //student.showInfo();

    //std::cout << "\n===== Initialized =====\n";
    //Student student1{ { "Ivan","Ivanenko","Ivanovich" },{2, 9, 2020},{"Oxford","Odesa","England"},{"Lviv","Ukraine"},"0988971015",56};
    //student1.showInfo();
    //
    //student.setPib({ "Olexandr", "Ovcharuk", "Igorovich" });
    //student.setBirthdate({ 11, 9, 2009 });
    //student.setLocation({ "Rivne", "Ukraine" });
    //student.setPhone("0123456789");
    //student.setSchool({ "IT Step", "Cloud", "Ukraine" });
    //student.setGroupNumber(511);

    //std::cout << "\n===== Manually filled =====\n";

    //student.showInfo();

    //std::cout << "\nNumber of created Students: " << Student::getObjCount() << std::endl;


    //Aspirant aspirant{ { "Ivan","Ivanenko","Ivanovich" },{2, 9, 2020},{"Oxford","Odesa","England"},{"Lviv","Ukraine"},"0988971015",56, "Optimization of neural network models for real-time object recognition" };
    //aspirant.showInfo();

    //std::cout << "\nNumber of created Students: " << Student::getObjCount() << std::endl;

	std::cout << "===== Student 1 =====\n";
	Student student1{ { "Ivan","Ivanenko","Ivanovich" },{2, 9, 2020},{"Oxford","Odesa","England"},{"Lviv","Ukraine"},"0988971015",56 };
	student1.showInfo();
	std::cout << "===== Saved Student 1 to file =====\n";
	student1.save();

	std::cout << "\n===== Loaded Student 2 from file =====\n";
	Student student2;
	student2.load();
	student2.showInfo();
}