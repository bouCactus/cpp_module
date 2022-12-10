#include <iostream>

class LivingThing {
public:
    virtual void breathe() {
        std::cout << "I'm breathing as a living thing." << std::endl;
    }
};

class Animal : virtual public  LivingThing {
public:
    void breathe() {
        std::cout << "I'm breathing as an animal." << std::endl;
    }
};

class Reptile : virtual public  LivingThing {
public:
    void breathe() {
        std::cout << "I'm breathing as a reptile." << std::endl;
    }

    void crawl() {
        std::cout << "I'm crawling as a reptile." << std::endl;
    }
};

class Snake :  public Animal,  public Reptile {
    public:
    void breathe()
    {
        //Reptile::breathe();
        std::cout << "I'm breathing as a Sanke" << std::endl;
    }
    // void crawl()
    // {
    //     std::cout << "I'm crawling as a Sanke." << std::endl;
    // }

};

int main() {
    Snake snake;
    LivingThing *p = &snake;

    p->breathe();
    //snake.breathe();
    snake.crawl();

    return 0;
}