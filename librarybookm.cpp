#include<iostream>
std::class LibrayBook
{
private:
string title;
string author;
float issued_date;
float return_date;
public:
void LibraryBook::get_data()
{
title="OOPS";
author="xyz";
issued_date= 3.4;
return_date= 14.4;
}
void LibraryBook::display_data()
{
std::cout<<"Title of book:"<<title<<std::endl;
std::cout<<"Author of book:"<<author<<std::endl;
std::cout<<"Issued Date:"<<issued_date<<std::endl;
std::cout<<"Return Date:"<<return_date;
}
};
int main()
{
LibrayBook a;
a.get_data();
a.display_data();
return 0;
}
  
