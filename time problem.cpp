//write a program to take inputs of hour,minute,and second from two object
//and add both the object and  the resultant time is store in another object of same class?
#include<iostream>
using namespace std;
class time
{
    int hr,se,min,z;
    int total;
    public:
        void set()
        {
            cout<<"enter the time"<<endl;
            cout<<"hours=";
            cin>>hr;
            cout<<"min=";
            cin>>min;
            cout<<"second=";
            cin>>se;
            cout<<hr<<":"<<min<<":"<<se<<endl;
        }
friend int data(time &,time &,time &);
};
        int data(time &x,time &y,time &z)
    {
        int h,m,s;
        z.hr=x.hr+y.hr;
        z.min=x.min+y.min;
        z.se=x.se+y.se;
        cout<<"***----total time------****"<<endl;
  cout<<"total"<<z.hr<<":"<<z.min<<":"<<z.se<<endl;//if we want to see toatl time
        if(z.se>60)
     {
        z.min=z.min+z.se/60;
        z.se=z.se%60;
    }
        if(z.min>60)
    {
   
        z.hr=z.hr+z.min/60;
        z.min=z.min%60;
        }
          cout<<"***----final(resultant)time------****"<<endl;
    cout<<"final="<<z.hr<<":"<<z.min<<":"<<z.se;

        return(0);
}
int main()
{
    time t1,t2,t3;
    t1.set();
    t2.set();
    data(t1,t2,t3);
    return(0);
}

/*****----output of this program-----*
enter the time
hours=1
min=120
second=22
1:120:22
enter the time
hours=3
min=4
second=4
3:4:4
***----total time------****
total4:124:26
***----final(resultant)time------****
final=6:4:26*/