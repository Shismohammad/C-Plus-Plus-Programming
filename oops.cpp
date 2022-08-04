#include<iostream>
using namespace std;

class student
{  
    float marks;

    public:
    string name;
    unsigned int rollnumber;

    void setmarks(float m) // setter function
    {
        marks = m;
    }

    void getmarks()
    {   
        cout<<"Marks : ";
        cout<<marks<<endl;
    }
     
};

int main(void)
{
    student s1;
    s1.name = "rohit";
    s1.rollnumber = 32;
    s1.setmarks(56);

    s1.getmarks();
    return 0;
}