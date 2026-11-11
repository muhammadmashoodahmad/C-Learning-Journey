
#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog says: Bark!" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat says: Meow!" << endl;
    }
};

class Cow : public Animal {
public:
    void sound() override {
        cout << "Cow says: Moo!" << endl;
    }
};

int main() {
    Dog d1;
    Cat c1;
    Cow cow1;

    Animal* ptr;

    ptr = &d1;
    ptr->sound();

    ptr = &c1;
    ptr->sound();

    ptr = &cow1;
    ptr->sound();

    return 0;
}
