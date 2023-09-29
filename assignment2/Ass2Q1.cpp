#include<iostream>
using namespace std;
namespace Nstudent 
{
   class student 
   {
    private:
     int roll_no; //data members
     string name;
     int marks;


public:  // member function
 
 void initStudent()
 {
   this->roll_no= 1;
   this->name="mayuri";
   this->marks=30;

 }
   void acceptStudentFromConsole()
   {
cout<<"enter the details of student="<<endl;
cin>> this->roll_no>>this->name>>this->marks;

   }
 void PrintStudentOnConsole()
 {
  cout<<"student enteries="<< this->roll_no <<" , " << this->name <<"  , " << this->marks <<" , "<<endl;
 }
  
};
   
 }




enum Emenu
{
   EXIT,
   INITIAL_VALUES,
   ACCEPT_INPUT,
   DISPLAY_DETAILS
};


Emenu menu ()
{
  int choice;
  cout<<"-----------------------------"<<endl;
  cout<< "0.exit"<< endl;
  cout<<" 1.display initialise values"<<endl;
  cout<< "2.accept user input for student"<< endl;
  cout<< "3. display student details"<<endl;
  cout<< "enter the choice"<<endl;
  cin>>choice;
  cout<<"------------------------------"<<endl;
  return Emenu (choice);

}

int main ()
{
 

Nstudent::student s1;
  Emenu choice;
  while(( choice= menu () )!=0)
  {
   switch (choice)
   {

   case  INITIAL_VALUES:
   s1.initStudent();
   break;

   case ACCEPT_INPUT :
   s1.acceptStudentFromConsole();
   break;

   case DISPLAY_DETAILS:
   s1.PrintStudentOnConsole();
   break;

   default:
   cout<<"wrong choice entered...."<<endl;
   break;

   }
  }
cout<<"thank you"<<endl;
   return 0;
}