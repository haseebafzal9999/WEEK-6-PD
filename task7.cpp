#include<iostream>
using namespace std;
int diff,oppo;
    string checkStudentStatus(int examHour,int examMinute,int studentHour,int studentMinute);
main(){
    int examHour,examMinute,studentHour,studentMinute;
    cout<<"Enter Exam Starting Time (hour): ";
    cin>>examHour;
    cout<<"Enter Exam Starting Time (minutes): ";
    cin>>examMinute;
    cout<<"Enter Student hour of arrival: ";
    cin>>studentHour;
    cout<<"Enter Student minutes of arrival: ";
    cin>>studentMinute;
    cout<<checkStudentStatus(examHour,examMinute,studentHour,studentMinute)<<endl;
    if(diff>30)
    {
        cout<<"Test: "<<diff<<endl;
        if(diff<60)
        cout<<(diff%60)<<" minutes before the start"<<endl;
        if(diff>60)
        cout<<(diff/60)<<":"<<(diff%60)<<" hours before the start";

        
    }
    if(diff<=30||diff<=0)
    {
        cout<<"On time";
    }
    if(diff<0)
    {
        cout<<"Test: "<<oppo<<endl;
        if(oppo>60)
        cout<<(oppo/60)<<":"<<(oppo%60)<<" hours before the start";
        if(oppo>60)
        cout<<(oppo%60)<<" minutes after the start";
    }






}
    string checkStudentStatus(int examHour,int examMinute,int studentHour,int studentMinute)
    {
        int totExamMinute,totStudentMinute;
        string result;
        totExamMinute=(examHour*60)+(examMinute);
        totStudentMinute=(studentHour*60)+(studentMinute);
        diff=totExamMinute-totStudentMinute;
        oppo=(-1)*diff;
        if(diff>0)
        {
            result="Early";
        }
        if(diff==0)
        {
            result="On time";
        }
        if(diff<0)
        {
            result="Late";
        }
        return result;
        
    }