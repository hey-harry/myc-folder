// A programm for the entry of 5 students rollno,name and marks...
// ***************** kashit duhan ***************************

#include<iostream>
using namespace std;
// making a class named as student..
class student
{
private:
  int rollno;
  char name[10];
  int marks;
public:
  void getdata();
};

// defining the member function
  void student :: getdata()
  {
    cout<<"enter the rollno";
    cin>>rollno;

    cout<<"enter the name";
    cin>>name;

    cout<<"enter the marks";
    cin>>marks;
  }
  int main()
  { const int size=5;
    student a[size];
    for(int i=0;i<size;i++)
{
    cout<<"details of student "<<i+1<<endl;
    a[i].getdata();
}
  return 0;
  }
