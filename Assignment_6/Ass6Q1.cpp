#include <iostream>
#include <string>
using namespace std;

class date  //dependancy class
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

int get_day()
{
  return  this->day;
}

void set_day(int)
{
    this->day=day;
}

int get_month()
{
  return this->month;  
}

void set_month(int)
{
this->month=month;
}

int get_year()
{
    return this->year;
}
 void set_year(int)
 {
    this->year=year;

 }

void displaydate()
{
 cout<<"enter the day"<<"/"<<"month"<<"/"<<"year"<endl;

}

void acceptdate()
{
 cout<<"enter the day"<<"/"<<"month"<<"/"<<"year"<endl;

 cin>>day>>month>>year;
}


void is_leap_year()
{ 
  
  if((year%4==0 && year%100!=0) || year%400)
  cout<<"the given year is leap year"<<endl;

else
  cout<<"the given year is not a leap year"<<endl;

}

};

class person  // dependent class
{
  private:

  string name;
  string addr;
  date birth_birth;

  public:

  person()
  {
   this->name="";
   this->addr="";
   this->birth_date=0;

  }

  person (string,string,date)
  {
    this->name=name;
   this->addr=addr;
   this->birth_date=date;
  }
 
 string get_name()
 {
 return this->name;
 }


 void set_name(string)
 {
   this->name=name;

 }
string get_addr()
{
 return this->addr;

}

void set_addr(string)
{
  this->addr=addr;
}

date get_birth_date()
{
  return this->birth_date;

}


void set_birth_date(int)
{
  this->birth_date;

}

void acceptperson()
{
 cout<<"enter the name"<<endl;
 cin>>this->name;
 cout<<"enter the address"<<endl;
 cin>>this->addr;
 cout<<"enter the birth_date"<<endl;
 birth_date.acceptdate();
}

void displayperson()
{
 cout<<"name of person ="<<this->name<<endl;
  cout<<"address of person ="<<this->addr<<endl;
  cout<<"birth_date of person ="<<endl;
  birth_date.acceptdate();
 
}


};

class employee // dependent class
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

  employee(string,string,date,int,float,string,int day,int month, int year):joining(day,month,year)
 {
    this->id=id;
    this->sal=sal;
    this->dept=dept;
  

 }
  
  int get_id()
  {
  return this->id;
  }

  void setid(int)
  { 
    this->id=id;
  }

  float get_sal()
  {
    return this->sal;
  }

  void set_sal(int)
  {
    this->sal=sal;
  }

string get_dept()
{
  return this->dept=dept; 
}
 void set_dept(string)
 {
   this->dept=dept;
 }
  
  date get_joining()
  {
   return this->joining;
  }
  
  void set_joining(date)
  {
    this->joining=joining;
  }

 
 void acceptemployee()
 {
    cout<<"enter the employee id"<<endl; 
    cin>> this->id;
    cout<<"enter the employee sal"<<endl; 
    cin>> this->sal;
    cout<<"enter the employee dept"<<endl; 
    cin>> this->dept;
    cout<<"enter the joining_date"<<endl;
    joining.acceptdate();

 }

  void displayemployee()
  {
    cout<<"the employee id"<<endl; 
    cout<<"the employee sal"<<endl;
    cout<<"the employee dept"<<endl;
    joining.displaydate();
    
  }

};

int main()
{
   person p1;
   employee e1;
   return 0;

}
