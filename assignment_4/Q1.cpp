#include<iostream>
using namespace std;

class Time
{
    private:  // data  member

    int h;
    int m;
    int s;

    public:  // member functions

     Time()
     {

     }

Time(int h,int m, int s)
        {
            this->h=h;
            this->m=m;
            this->s=s;
        }


    void sethour(int h)
    {
       this->h=h;
    }
    
    void setmin(int m)
    {
       this->m=m;
    }

    void setsec(int s)
    {
       this->s=s;
    }


    int gethour()
    {
        return this->h;
    
    }

     int getmin()
    {
        return this->m;
    
    }
     int getsec()
    {
        return this->s;
    
    }


   void accepttime()
    {
        cout<<"enter the hour"<<endl;
        cin>>this->h;
        cout<<"enter the minute"<<endl;
        cin>>this->m;
        cout<<"enter the second"<<endl;
        cin>>this->s;
    }

     void displaytime()

    {
        cout<<"hour="<<this->h<<endl;
        cout<<"min="<<this->m<<endl;
        cout<<"sec="<<this->s<<endl;

    }


};

int main()
{
   Time **arr=new Time*[5]; //dynamic objects

 // dynamic memory allocation for objects
     for(int i=0; i<5; i++)
     {
        arr[i]=new Time();
     }


 
   for (int i=0; i<5;i++)
   {

    // cout<<"enter the values for index"<< i<<"="<<endl;
    arr[i]->accepttime();

   }

 // displaying the objects
    for (int i=0; i<5;i++)
   {
    cout<<"enter the values for index["<< i<<"]="<<endl;
    arr[i]->displaytime();

   }

    /// deallocating the objects memory

     for (int i=0; i<5;i++)
     delete arr[i];

     delete [] arr;
    return 0;
}