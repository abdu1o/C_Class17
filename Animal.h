#pragma once
class Animal
{
public:

    virtual void makeSound() const
    {
        cout << "sound...." << endl;
    }
};

class Dog : public Animal
{
public:

    void makeSound() const override
    {
        cout << "GAW! " << endl;
    }


};
