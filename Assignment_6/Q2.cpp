#include<iostream>
using namespace std;

class employee
{ 
    private:

        int id;
        float sal;

   public:

   employee(int id=0, float sal=0)
   {
      this->id=id;
      this->sal=sal;
   }

   void acceptemployee()
   {
    cout<<"enter the employee id="<<endl;
    cin>>this->id;
    cout<<"enter the employee sal="<<endl;
    cin>>this->sal;

   }
  

   void displayemployee()
   {
    cout<<"the employee id="<<this->id<<","<<"salary of employee="<< this->sal<<endl;
   }

};

class manager: public virtual employee
{
    private:

       float bonus;

    public:

    manager(float bonus=0)
    {
      this-> bonus=bonus;
    }

     void acceptmanager()
   {
      acceptemployee();
    cout<<"enter the bonus "<<endl;
    cin>>this->bonus;
   }
  

   void displaymanager()
   {
      displayemployee();
    cout<<"the received bonus= "<<this->bonus<<endl;
   }
};

class salesman: public virtual employee
{
    private:
 
       float comm;

     public:

     salesman(float comm=0 )
     {
      this->comm=comm;
     }

     void acceptsalesman()
   {
    cout<<"enter the comm="<<endl;
    cin>>this->comm;

   }
  

   void displaysalesman()
   {
      displayemployee();
    cout<<"the received commision is="<<this->comm <<endl;
   }
};

class sales_manager:public manager,public salesman
{

     public:

 void acceptsales_manager()
   {
     acceptmanager();
     acceptsalesman();
    
   }
  

   void displaysales_manager()
   {
    displaysalesman();
    displaymanager();
   }

};


int main()
{
  manager m1;

  m1.acceptmanager();
  m1.displaymanager();
  salesman s1;
  s1.acceptsalesman();
  s1.displaysalesman();
 sales_manager sm1;
 sm1.acceptsales_manager();
 sm1.displaysales_manager();

  
     
  return 0;   
}