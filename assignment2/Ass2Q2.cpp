#include<iostream>
#include<string>
using namespace std;

class Address
{ 
    private:

    string building;
    string street;
    string city;
    int pin;

    public:

    Address()
    {
        this->building=" ";
        this->street=" ";
        this->city=" ";
        this->pin=0;
    }

      Address(string building ,string street,string city, int pin)
    {
        this->building=building;
        this->street=street;
        this->city=city;
        this->pin=pin;
    }

    void setbuilding (string building)
    {
        this->building=building;
    }

    string getbuilding ()
    {
        return this->building;
    }

 void accept()
 {
 cout<< "enter the address =";
 cin>>this->building>>this->street>>this->city>>this->pin;
 }
 void display()
 {
 
 cout<< "building" << "=" <<this->building<<","<<"street"<<"="<<this->street<<","<<"city"<<"="<<this->city <<"," <<"pin"<<"="<< this->pin<<endl;
 }


};

int main()
{   
   Address a1;
   a1.accept();
   a1.display();

   a1.setbuilding("bu");
   a1.getbuilding();


   Address a2("b9","singhgadroad","pune",411210);
   a2.display();
   

    return 0;
}