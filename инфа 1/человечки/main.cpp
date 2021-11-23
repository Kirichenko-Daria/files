#include <iostream>

using namespace std;

struct Person {
 int age;
 double a;
};

void InputPerson3(Person* some_person){

    cin >> some_person -> age >> some_person -> a;
}


void InputPerson2(Person* some_person){

    cin >> (*some_person).age >> (*some_person).a;
}

void InputPerson1(Person& some_person){
    cin >> some_person.age >> some_person.a;
}

int main()
{

    Person person1;
    //Person* p_person1 = &person1;
    //Person& person2 = person1;
    InputPerson3(&person1);
    cout << person1.age << " " << person1.a;
    return 0;
}
