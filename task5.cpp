#include<iostream>
using namespace std;
 float calculateFruitPrice(string fruit, string day, double quantity);
 main(){
    string fruit, day;
     double quantity;
     cout<<"Enter fruite name: ";
     cin>>fruit;
     cout<<"Enter the day: ";
     cin>>day;
     cout<<"Enter quantity: ";
     cin>>quantity;
       cout<<calculateFruitPrice( fruit,  day,  quantity);

 }
  float calculateFruitPrice(string fruit, string day, double quantity){
    double x;
    if(day=="sunday"){
        if(fruit=="banana"){
            x=2.70*quantity;
        }
         if(fruit=="apple"){
            x=1.25*quantity;
        }
         if(fruit=="orange"){
            x=0.90*quantity;
        }
         if(fruit=="grapefruit"){
            x=1.60*quantity;
        }
         if(fruit=="kiwi"){
            x=3.00*quantity;
        }
         if(fruit=="pineapple"){
            x=5.60*quantity;
        }
         if(fruit=="grapes"){
            x=4.20*quantity;
        }
    }
     else if(day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday" ||day=="staurday")

    {
         if(fruit=="banana"){
            x=2.50*quantity;
        }
         if(fruit=="apple"){
            x=1.20;
        }
         if(fruit=="orange"){
            x=0.85*quantity;
        }
         if(fruit=="grapefruit"){
            x=1.45*quantity;
        }
         if(fruit=="kiwi"){
            x=2.70*quantity;
        }
         if(fruit=="pineapple"){
            x=5.50*quantity;
        }
         if(fruit=="grapes"){
            x=3.85*quantity;
        }
    }
    else{
        cout<<"error";
    }
   
    return x;
  }