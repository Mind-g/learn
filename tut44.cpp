#include <iostream>

using namespace std;
// class complex;

// class calculator
// {
// public:
//     int add(int a, int b)
//     {
//         return (a + b);
//     }

//     int sumrealcomplex(complex, complex);
//     int sumcompcomplex(complex, complex);
// };

// class complex
// {
//     int a, b;

// public:
//     void setnumber(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }

// friend complex sumcomplex(complex o1, complex o2);
// individual declaration of friend
// friend int calculator::sumrealcomplex(complex o1, complex o2);

// declaring entire class friend
//     friend class calculator;
//     void printnumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };

// // complex sumcomplex(complex o1, complex o2)
// // {
// //     complex o3;
// //     o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
// //     return o3;
// // }
// int calculator::sumrealcomplex(complex o1, complex o2)
// {
//     return (o1.a + o2.a);
// }

// int calculator::sumcompcomplex(complex o1, complex o2)
// {
//     return (o1.b + o2.b);
// }

// class y;
// class x
// {
//     int data;

// public:
//     void setvalue(int value)
//     {
//         data = value;
//     }
//     friend void add(x, y);
// };

// class y
// {
//     int num;

// public:
//     void setvalue(int value)
//     {
//         num = value;
//     }
//     friend void add(x, y);
// };
// void add(x o1, y o2)
// {
//     cout << "Summing data of x and y objects gives me " << o1.data + o2.num;
// }
// class c2;
// class c1
// {
// private:
//     int val1;
//     friend void exchange(c1 &, c2 &);

// public:
//     void intdata(int a)
//     {
//         val1 = a;
//     }
//     void display(void)
//     {
//         cout << val1 << endl;
//     }
// };

// class c2
// {
// private:
//     int val2;
//     friend void exchange(c1 &, c2 &);

// public:
//     void intdata(int a)
//     {
//         val2 = a;
//     }
//     void display(void)
//     {
//         cout << val2 << endl;
//     }
// };

// void exchange(c1 &x, c2 &y)
// {
//     int tmp = x.val1;
//     x.val1 = y.val2;
//     y.val2 = tmp;
// }

// class complex
// {
//     int a, b;

// public:
//     complex(int, int);

//     void printnumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };

// complex::complex(int x, int y)
// {
//     a = x;
//     b = y;
// }

// class point{
//     int x,y;

//     public:
//     point(int a, int b){
//         x =a;
//         y = b;
//     }
//     void displaypoint(){
//         cout<<"the point is ("<<x<<","<<y<<")"<<endl;
//     }
// };

// class complex
// {
//     int a, b;

// public:
//     complex()
//     {
//         a = 0;
//         b = 0;
//     }
//     complex(int x, int y)
//     {
//         a = x;
//         b = y;
//     }

//     complex(int x)
//     {
//         a = x;
//         b = 0;
//     }
//     void printnumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };


// class simple{
//     int d1;
//     int d2;
//     public:
//          simple(int a , int b=9){
//             d1 = a;
//             d2 = b;
//          }
//          void printn(){
//             cout<<"The value of your data is "<<d1<<" and "<<d2<<endl;
//          }
// };

// class abc{
//         int a;
//         int b;
//         public:
//               abc(int x =45, int y = 56){
//                 a = x;
//                 b = y;
//               }
//               void pri(){
//                 cout<<a<<"  "<<b<<endl;
//               }
// };

// class bankdeposit{
//     int principal;
//     int years;
//     float interestrate;
//     float returnvalue;
//     public:
//           bankdeposit(){}
//           bankdeposit(int p, int y, float r);
//         bankdeposit(int p, int y , int r);
//          void show();
           
          
// };

// bankdeposit ::bankdeposit(int p, int y, float r){
//     principal = p;
//             years = y;
//             interestrate = r;
//             returnvalue = principal;
//             for (int i = 0; i < y; i++)
//             {
//                 returnvalue = returnvalue * (1+interestrate);
//             }

// }

// bankdeposit::bankdeposit(int p, int y, int r){
//      principal = p;
//             years = y;
//             interestrate = r/100;
//             returnvalue = principal;
//             for (int i = 0; i < y; i++)
//             {
//                 returnvalue = returnvalue * (1+returnvalue);
//             }

// }
// void bankdeposit:: show(){
//      cout<<endl<<"Principal amount was "<<principal<<
//      " return values after "<<years
//      <<" years is "<<returnvalue<<endl;

// }





int main()
{        

    // bankdeposit bd1,bd2,bd3;
    
    // int p,y;
    // float r;
    // int R;
    // cout<<"Enter the value of p,y and r"<<endl;
    // cin>>p>>y>>r;
    // bd1 = bankdeposit(p,y,r);
    // bd1.show();

    // cout<<"Enter the value of p,y and R"<<endl;
    // cin>>p>>y>>R;
    // bd2 = bankdeposit(p,y,R);
    // bd2.show();
    

    // abc jk(0);
    // jk.pri();
    // simple s(1);
    // s.printn();
    // complex c1(4, 6);
    // c1.printnumber();
    // complex c2(5);
    // c2.printnumber();
    // complex c3;
    // c3.printnumber();

    // point p(1,1);
    // p.displaypoint();
    // point q(4,6);
    // q.displaypoint();
    // complex c(4, 6);
    // c.printnumber();
    // complex d = complex(5, 7);
    // d.printnumber();

    // complex c1, c2, sum;
    // c1.setnumber(1, 4);
    // c2.setnumber(5, 8);
    // c1.printnumber();
    // c2.printnumber();

    // sum = sumcomplex(c1, c2);
    // sum.printnumber();

    // complex o1, o2;
    // o1.setnumber(1, 4);
    // o2.setnumber(5, 7);
    // calculator calc;
    // int res = calc.sumrealcomplex(o1, o2);
    // cout << "The sum of real part of o1 and o2 is " << res << endl;
    // int resc = calc.sumcompcomplex(o1, o2);
    // cout << "The sum of real part of o1 and o2 is " << resc << endl;
    // x a1;
    // a1.setvalue(3);

    // y b1;
    // b1.setvalue(5);
    // add(a1, b1);
    // c1 oc1;
    // c2 oc2;

    // oc1.intdata(34);
    // oc2.intdata(67);
    // exchange(oc1, oc2);

    // cout << "The value of c1 after exchanging becomes: ";

    // oc1.display();
    // cout << "The value of c2 after exchanging becomes: ";
    // oc2.display();

    return 0;
}