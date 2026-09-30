#include<iostream>
using namespace std;
class unary{
private:
int n;
public:
unary(int x){
n=x;
}
void preopr(){
++n;
}
void postopr(){
n++;
}
void display(){
cout<<"your number increment:"<<n<<endl;
}
};
int main(){
unary obj(10);
obj.display();
obj.postopr();
obj.preopr();
obj.display();
return 0;
}

