#include<iostream>
using namespace std;
class student{
  int age;
  int roll;
  public:
  student(int a, int r){
    roll=r;
    age=a;
  }
  student(){};
  void display()
  {
    cout<<roll;
    cout<<endl<<age;
  }
  void operator << (student x){
    student temp;
    temp.age=age+x.age;
    temp.roll=roll-x.roll;
    cout<<temp.roll;
    cout<<endl<<temp.age;
    cout<<endl;
  }
};
int main(){
    student raj(19,51);
    student ajeet(23,4);
    raj<<ajeet;

}