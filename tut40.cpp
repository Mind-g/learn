#include <iostream>
using namespace std;
// class student
// {
// protected:
//     int roll_number;

// public:
//     void set_roll_number(int);
//     void get_roll_number(void);
// };

// void student ::set_roll_number(int r)
// {
//     roll_number = r ;
// }

// void student ::get_roll_number()
// {
//     cout << "The roll number is " << roll_number << endl;
// }

// class exam : public student
// {
// protected:
//     float maths;
//     float physics;

// public:
//     void set_marks(float, float);
//     void get_marks(void);
// };

// void exam ::set_marks(float m1, float m2)
// {
//     maths = m1;
//     physics = m2;
// }

// void exam ::get_marks()
// {
//     cout << "The marks obtained in maths are: " << maths << endl;
//     cout << "The marks obtained in physics are: " << physics << endl;
// }

// class result : public exam
// {
//     float percentage;

// public:
//     void display_results()
//     {
//         get_roll_number();
//         get_marks();
//         cout << "Your result is: " << (maths + physics )/ 2 << "%" << endl;
//     }
// };

class base1{
    protected:
       int base1int;
       public:
       void set_base1int(int a){
        base1int = a;
       }
};
class base2{
    protected:
       int base2int;
       public:
       void set_base2int(int a){
        base2int = a;
       }
};
class base3{
    protected:
       int base3int;
       public:
       void set_base3int(int a){
        base3int = a;
       }
};

class derived : public base1, public base2 , public base3{
    public:
    void show(){
        cout<<"The value of base1 is "<<base1int<<endl;
        cout<<"The value of base2 is "<<base2int<<endl;
        cout<<"The value of base3 is "<<base3int<<endl;
        cout<<"The sum of these values is  "<<(base1int + base2int + base3int)<<endl;
    }
};


int main()
{   derived harry;
harry.set_base1int(25);
harry.set_base2int(5);
harry.set_base3int(10);
harry.show();
    
    
    
    //  result harry;
    // harry.set_roll_number(420);
    // harry.set_marks(94.0,90.0);
    // harry.display_results();

    return 0;
}