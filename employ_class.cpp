#include<iostream>
#include<string>
using namespace std;
class Employ{
private:
string eid;
string ename;
float esalary;
char edep;
public:
void input(){
cout<<"enter your id:"<<endl;
cin>>eid;
cout<<"enter your name:"<<endl;
cin>>ename;
cout<<"enter your salary."<<endl;
cin>>esalary;
cout<<"enter your department:"<<endl;
cin>>edep;
}
void display(){
cout<<"id:"<<eid<<endl;
cout<<"name"<<ename<<endl;
cout<<"salary"<<esalary<<endl;
cout<<"department"<<edep<<endl;
}
};
int main(){
Employ e;
e.input();
e.display();
return 0;
}

