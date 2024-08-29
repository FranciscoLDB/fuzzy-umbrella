#include <iostream>

class person{
    private:
        int id = 2;

    public:
        int age = 0;
        std::string name;

    person(int age, std::string name){
        this->age = age;
        this->name = name;
    }

    int get_id(){
        return this->id;
    }

    void print(){
        std::cout << "Name: " << this->name << " Age: " << this->age << std::endl;
    }

};

class student : public person{
    public:

        student(int age, std::string name) : person(age, name){}
};

int main(){
    person p1(20, "oliver");

    p1.print();
    std::cout << "id is " << p1.get_id() << std::endl;

    return 0;
}