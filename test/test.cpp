#include<iostream>

class Animal{
    public:
    int _a; 
    Animal():_a(1){};
    void makeSound(void)
    {
        std::cout << "animal sound" << std::endl; 
    }
};
class Cow: virtual public Animal{
    public:
   // int a;
    Cow(){
        // _a = 2;
    }
    void makeSound(void)
    {
        std::cout << "cow sound" << std::endl;
    }
};

class Cat: virtual public Animal{
    public:
   // int a;
   Cat(){
    // _a = 3;
   }
   void makeSound(void)
    {
        std::cout << "Cat sound" << std::endl;
    }
};

class Dog: public Cat, public Cow{
    public:
    // void makeSound(void)
    // {
    //     std::cout << "Dog sound" << _a << std::endl;
    // }
    
};

int main()
{
    Dog dog;

    dog.makeSound();
    return (0);

}