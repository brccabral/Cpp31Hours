#include <iostream>
#include <string_view>

class Dog
{
public:
    Dog() = default;
    Dog(std::string_view name_param, std::string_view breed_param, int age_param);
    ~Dog();

public:
    std::string name;
    std::string breed;
};
Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param)
{
    name = name_param;
    breed = breed_param;
    std::cout << "Dog constructor called for " << name << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called for : " << name << std::endl;
}

void some_func(Dog dog)
{
    // when passed by value, the constructor not called, but
    // the destructor is called at the end of the function
    // be careful if the object has pointers, as the pointer will be
    // destroyed in this function and in main, causing a crash
    dog.name = "Dragon";
    std::cout << "Dog name : " << dog.name << std::endl;
}

void heap_func()
{
    Dog *p_dog = new Dog("HeapDog", "Shepherd", 2); // Heap allocation
                                                    // need to be deleted in this local space or will cause memory leak

    delete p_dog; // Causes for the destructor of Dog to be called
}

int main()
{

    Dog p_dog("Fluffy", "Shepherd", 2);
    some_func(p_dog);
    heap_func();

    std::cout << "Done!" << std::endl;
    return 0;

    /*
Dog constructor called for Fluffy
Dog name : Dragon
Dog destructor called for : Dragon
Dog constructor called for HeapDog
Dog destructor called for : HeapDog
Done!
Dog destructor called for : Fluffy
    */
}