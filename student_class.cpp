#include<iostream>
#include<string>
using namespace std;
class student{
private:
string name;
int roll;
float marks;
public:
void input(){
cout<<"enter your name:"<<endl;
cin>>name;
cout<<"enter your roll no."<<endl;
cin>>roll;
cout<<"enter your marks:"<<endl;
cin>>marks;
}
void display(){
cout<<"name:"<<name;
cout<<"roll no"<<roll;
cout<<"marks"<<marks;
}
};
int main(){
student s;
s.input();
s.display();
return 0;
}

 
 
