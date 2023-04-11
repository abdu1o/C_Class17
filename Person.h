#pragma once
class Person 
{
protected:

    string _name;
    int _age;

public:

    Person(string name, int age)
    {
        this->_name = name;
        this->_age = age;
    }

    virtual void Print() const 
    {
        cout << "Name: " << _name << endl;
        cout << "Age: " << _age << endl;
    }


};

class Employee : public Person 
{
private:
    double _wage;

public:

    Employee(string name, int age, double wage) : Person(name, age)
    {
        this->_wage = wage;
    }

    void Print() const override 
    {
        Person::Print();
        cout << "Wage: " << _wage << endl;
    }


};

class General 
{
protected:

    const Person* _obj;

public:
    General(Person* obj)
    {
        this->_obj = obj;
    }

    void Print()
    {
        cout << "Person: " << endl;
        _obj->Print();


        const Employee* employee = dynamic_cast<const Employee*>(_obj);
        cout << "\nEmployee: " << endl;
        employee->Print();
    }
};
