#include<iostream>
using namespace std;
 string checkPointPosition(int height, int x, int y);
 main()
 {
    int x,y,height;
    cout<<"Enter height: ";
    cin>>height;
    cout<<"Enter x coordinates: ";
    cin>>x;
    cout<<"Enter y coordinates: ";
    cin>>y;
     cout<<checkPointPosition( height,  x,  y);
 }
 string checkPointPosition(int height, int x, int y)
 {
    if(x<0 || y<0 || x>2*height || y>4*height)
    {
        return "outside";
    }
    else if(x > height && x<2*height && y>height  && y< 4*height)
    {
        return  "inside";
    }
    else{
        return "Border";
    }
 }

