#include <iostream>
#include <string>
using namespace std;
#include "Person.h"
#include "Animal.h"

int main()
{
    //Task 1-------------------------------------------
    Person person("Fibi", 30);
    Employee employee("Monika", 31, 12500.5);

    General obj(&employee), obj2(&person);
    obj.Print();
    cout << endl;
    obj2.Print();
    //-------------------------------------------------


    //Task 2-------------------------------------------
    cout << endl;
    cout << endl;
    Animal* gen_ptr = new Dog();
    Dog* dog_ptr = reinterpret_cast<Dog*>(gen_ptr);

    dog_ptr->makeSound();
    //-------------------------------------------------
}

