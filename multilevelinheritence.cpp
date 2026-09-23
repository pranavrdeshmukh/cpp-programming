#include<iostream>
using namespace std;
class Student{
public:
string sname;
int roll;
int marks[4];
int total=0;
};
class Sgetdata:public Student{
public:
void getdata(){
cout<<"enter student name:"<<endl;
cin>>sname;
cout<<"enter roll no:"<<endl;
cin>>roll;
cout<<"enter 4 subject mark"<<endl;
for(int i=0;i<4;i++){
cin>>marks[i];
total=total+marks[i];
}
}
};
class Meta:public Sgetdata{
public:
void display(){
cout<<"name="<<sname<<endl;
cout<<"roll no.="<<roll<<endl;
cout<<"total marks="<<total<<endl;
}
};
int main(){
Meta s;
s.getdata();
s.display();
return 0;
}
