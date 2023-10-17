#include<iostream>
using namespace std;
    float due(char type,char time,float min);
main(){
    char type,time;
    float min;
    cout<<"Enter the service code (R/r for regular, P/p for premium): ";
    cin>>type;
    if(type=='p'||type=='P'||type=='r'||type=='R')
    {
    if(type=='p'||type=='P')
    {
    cout<<"Enter time of the call (D/d for day, N/n for night): ";
    cin>>time;
    }
    
    cout<<"Enter the number of minutes uses: ";
    cin>>min;
    if(type=='p'||type=='P')
    {
        cout<<"Service Type: Premium"<<endl;
    }
    if(type=='r'||type=='R')
    {
        cout<<"Service Type: Regular"<<endl;
    }
    cout<<"Total Minutes Used: "<<min<<" minutes"<<endl;
    cout<<"Amount Due: $"<<due(type,time,min);
    }
    else
    {
        cout<<"error";
    }


}

    float due(char type,char time,float min)
    {
        float chrges,tot;
        if((type=='r'||type=='R'))
        {
            if(min<=50)
            {
                tot=10.00;
            }
            if(min>50)
            {
                tot=(10.00)+((min-50)*(0.20));
            }
            return tot;
        }

            if(type=='p'||type=='P')
        {
                if(time=='d'||time=='D')
                {
                    if(min<=75)
                    {
                        tot=25;
                    }
                    if(min>75)
                    {
                        tot=(25)+((min-75)*(0.10));
                    }
                }
                if(time=='N'||time=='n')
                {
                   if(min<=100)
                   {
                    tot=25;
                   } 
                   if(min>100)
                   {
                    tot=(25.00)+((min-100)*0.05);
                   }
                }
                return tot;
        }
        





    }