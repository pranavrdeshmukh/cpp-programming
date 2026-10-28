#include<iostream>
#include<string>
class LibrayBook
{
private:
    std::string title;
    std::string author;
    float issued_date;
    float return_date;

public:
    void get_data()
    {
        std::cout<<"Title of the book:"<<std::endl;
        std::cin>>title;
        std::cout<<"Author of the bok:"<<std::endl;
        std::cin>>author;
        std::cout<<"Issued date:"<<std::endl;
        std::cin>>issued_date;
        std::cout<<"Return date:"<<std::endl;
        std::cin>>return_date;
    }

    void display_data()
    {
        std::cout << "Title of book:" << title << std::endl;
        std::cout << "Author of book:" << author << std::endl;
        std::cout << "Issued Date:" << issued_date << std::endl;
        std::cout << "Return Date:" << return_date;
    }
};

int main()
{
    LibrayBook a;
    a.get_data();
    a.display_data();
    return 0;
}
