#include <iostream>

using std:: cout;

template <typename T, typename U>

auto max(T a, U b){
    return a > b ? a : b;
}

struct student{
    int id;
    std::string name;
};
struct x{
};

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};

class person{
    public:
        int age;
        std::string name;

    person(int agr, std::string name){
        this->age = age;
        this->name = name;
    }

};

int main(){
    cout << "max is " << max(5, 9.202) << std::endl;
    student s1;
    s1.id = 1;
    s1.name = "John";
    cout << "Student id: " << s1.id << " name: " << s1.name << std::endl;
    cout << "sizeof(student): " << sizeof(student) << std::endl;
    cout << "sizeof(s1): " << sizeof(s1) << std::endl;
    cout << "sizeof(s1.id): " << sizeof(s1.id) << std::endl;
    cout << "sizeof(s1.name): " << sizeof(s1.name) << std::endl;
    cout << "sizeof(s1 isolate): " << sizeof(s1) - (sizeof(int) + sizeof(std::string)) << std::endl;
    x xa;
    cout << "sizeof(x): " << sizeof(xa) << std::endl;

    return 0;
}
