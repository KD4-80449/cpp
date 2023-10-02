#include <iostream>
#include <string>
using namespace std;

class date //dependancy class 
{ 
private:

    int day;
    int month;
    int year;

public:

date()
{ 
   this->day=0;
    this->month=0;
    this->year= 0; 
}

date(int day,int month ,int year)
{
    this->day=day;
    this->month=month;
    this->year=year;

}

void acceptdate()
{
  cout<<"enter the day/month/year=";
  
  cin>>this->day>>this->month>>this->year;
 
}

void displaydate()
{
 cout<<this->day<<"/" <<this->month<<"/"<<this->year<<endl;
}

 
 void is_leap_year()
{ 
  if((this->year %4==0 && this->year%100!=0) || this->year%400==0)
  cout<<"this a leap year"<<endl;

  else 
  cout<<"this is not a leap year"<<endl;

   
}

};

class person  // dependent class
{
  private:

  string name;
  string addr;
  date birth_date;
  public:

  person()
  {
   this->name="";
   this->addr="";
   

  }

  person (string name,string addr,int day,int month,int year):birth_date(day,month,year)
  {
   this->name=name;
   this->addr=addr;
   
  }
 
void acceptperson()
    {
     cout<<"name of a person="<<endl; 
     cin>>this->name;
     cout<<"enter address of a person"<<endl;
     cin>>this->addr;
     
     cout<<"enter the birth date= "<<endl;
     birth_date.acceptdate();

    }

   void displayperson()
    {
      cout<<"name="<<this->name<<endl;
      cout<<"Address="<<this->addr<<endl;
      cout<<"birth date="<<endl;
      birth_date.displaydate();
    }

    
};

class employee:public person
{
  private:

  int id;
  float sal;
  string dept;
  date joining;


  public:

  employee()
  {
    this->id=0;
    this->sal=0;
    this->dept="";
   
  }

  employee(int id,float sal,string dept,int day,int month,int year,date d1):joining(day,month,year)
 {
    this->id=id;
    this->sal=sal;
    this->dept=dept;
  

 }
  

    void acceptemployee()
    {
      person::acceptperson();
      cout<<"enter the employee id="<<endl;
      cin>> this->id;
      cout<<"enter the salary="<<endl;
      cin>>this->sal;
      cout<<"enter the department of employee="<<endl;
      cin>>this->dept;
      cout<<"enter the joining date="<<endl;
      joining.acceptdate();
      
      
    }
  
    void displayemployee()
      { 
        person::displayperson();
        cout<<"employee id="<<this->id<<endl;
        cout<<"employee salary="<<this->sal<<endl;
        cout<<"employee department="<<this->dept<<endl;
        cout<<"the joining date="<<endl;
        joining.displaydate();
        joining.is_leap_year();
      }
    
  

 };

int main ()
{
  employee e1;
  e1.acceptemployee();
  e1.displayemployee();
  //e1.is_leap_year();
  



    return 0;

}
