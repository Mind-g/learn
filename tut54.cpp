#include <iostream>
using namespace std;

class shopitem{
    int id;
    float price;
    public:
    void setdata(int a, float b){
        id = a;
        price = b;
    }
    void getdata(void){
        cout<<"Code of this item is "<<id<<endl;
        cout<<"Price of this item is "<<price<<endl;
    }
};

// class A
// {
//     int a;

// public:
//     A & setdata(int a)
//     {
//         this->a = a;
//         return *this;
//     }

//     void getdata(void)
//     {
//         cout << "The value of a is " << a << endl;
//     }
// };

// class baseclass
// {
// public:
//     int var_base;
//     void display(void)
//     {
//         cout << "1.  displaying base class variable var_base " << var_base << endl;
//     }
// };

// class derivedclass : public baseclass
// {
// public:
//     int var_derived;
//     void display(void)
//     {
//         cout << "2.  displaying base class variable var_base " << var_base << endl;
//         cout << "2.  displaying derived class variable var_derived " << var_derived << endl;
//     }
// };

// class cwh
// {
// protected:
//     string title;
//     float rating;

// public:
//     cwh(string s, float r)
//     {
//         title = s;
//         rating = r;
//     }
//     virtual void display(void) = 0;
// };

//  class cwh_video : public cwh
// {
//     float video_length;

// public:
//     cwh_video(string s, float r, float vl) : cwh(s, r)
//     {
//         video_length = vl;
//     }
//     void display(void)
//     {
//         cout << "This is an amazing video with title " << title << endl;
//         cout << "Ratings: " << rating << endl;
//         cout << "length of this video is: " << video_length << " Minutes" << endl;
//     }
// };

// class cwh_text : public cwh
// {
//     int words;

// public:
//     cwh_text(string s, float r, int wc) : cwh(s, r)
//     {
//         words = wc;
//     }

//     void display(void)
//     {
//         cout << "This is an amazing text tutorial with title " << title << endl;
//         cout << "Ratings: " << rating << endl;
//         cout << "No of words in the text " << words << " words" << endl;
//     }
// };

int main()
{
    // string title;
    // float rating, vlen;
    // int words;

    // title = "C++ Tutorial";
    // vlen = 4.56;
    // rating = 4.89;
    // cwh_video cplus_video(title, rating, vlen);

    // title = "C++ Tutorial text";
    // words = 433;
    // rating = 4.19;
    // cwh_text cplus_text(title, rating, words);

    // cwh *tuts[2];
    // tuts[0] = &cplus_video;
    // tuts[1] = &cplus_text;

    // tuts[0]->display();
    // tuts[1]->display();

    // baseclass *base_class_pointer;
    // baseclass obj_base;
    // derivedclass obj_derived;
    // base_class_pointer = &obj_derived;

    // base_class_pointer->var_base = 34;
    // base_class_pointer->display();

    // base_class_pointer->var_base = 3400;
    // base_class_pointer->display();

    // derivedclass *derived_class_pointer;
    // derived_class_pointer = &obj_derived;
    // derived_class_pointer->var_base = 9448;
    // derived_class_pointer->var_derived = 98;
    // derived_class_pointer->display();

    // A a;
    // a.setdata(4).getdata();

    // int size = 3;
    // shopitem *ptr = new shopitem[size];
    // shopitem *ptrtemp = ptr;
    // int p,i;
    // float q;
    // for ( i = 0; i < size; i++)
    // {
    //     cout<<"Enter id and price of item"<<i+1<<endl;
    //     cin>>p>>q;
    //     ptr->setdata(p,q);
    //     ptr ++;
    // }

    // for ( i = 0; i < size; i++)
    // {
    //     cout<<"Item number: "<<i+1<<endl;
    //     ptrtemp->getdata();
    //     ptrtemp ++;
    // }

    return 0;
}