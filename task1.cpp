#include<iostream>
using namespace std;
string decideActivity(string tem, string hum);

main()
{
   string tem,hum;
   cout<<"Enter temperature(warm or cold): ";
   cin>>tem;
   cout<<"Enter humidity (dry or warm): ";
   cin>>hum;
   cout<<decideActivity(tem,  hum);
}
string decideActivity(string tem, string hum)
{
    string x;
    if(tem == "warm")
    {
        if(hum == "dry")
        {
            x="Play tennis ";
        }
        if(hum == "humid")
        {
            x="swim";
        }
    }
    if(tem == "cold")
    {
       if(hum == "dry")
       {
        x="Play basketball";
       }
       if(hum=="humid")
       {
        x="Watch tv";
       }
    }
    return x;
}
