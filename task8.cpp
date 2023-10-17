#include<iostream>
using namespace std;
    int calculateVolleyballGames(string yearType,int holidays,int hometownWeekends);
main(){
    string yearType;
    int holidays,hometownWeekends,tot,leaptot;
    cout<<"Enter year type: ";
    cin>>yearType;
    cout<<"Enter number of holidays: ";
    cin>>holidays;
    cout<<"Enter number of weekends: ";
    cin>>hometownWeekends;
    tot=calculateVolleyballGames(yearType,holidays,hometownWeekends);
    if(yearType=="leap")
    {
        leaptot=(0.15)*(tot)+(tot);
        cout<<leaptot;
    }
    else{
        cout<<calculateVolleyballGames(yearType,holidays,hometownWeekends);
    }
}

    int calculateVolleyballGames(string yearType,int holidays,int hometownWeekends)
    {
        int tot,a,b,c;
        a=hometownWeekends;
        b=(48-hometownWeekends)*.75;
        c=0.666667*holidays;
        tot=a+b+c;
        return tot;
    }