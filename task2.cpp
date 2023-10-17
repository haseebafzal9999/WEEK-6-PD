#include<iostream>
using namespace std;
float calculateAverage(float marksEnglish, float marksMaths, float
marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);
main()
{
    string name;
    float marksEnglish,  marksMaths, marksChemistry,  marksSocialScience,  marksBiology;
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter marks for English: ";
    cin>>marksEnglish;
    cout<<"Enter marks for Maths: ";
    cin>>marksMaths;
    cout<<"Enter marks for Chemistry: ";
    cin>>marksChemistry;
    cout<<"Enter marks for Social Science: ";
    cin>>marksSocialScience;
    cout<<"Enter marks for Biology: ";
    cin>>marksBiology;
    cout<<name<<endl;
    float average = calculateAverage( marksEnglish,  marksMaths, marksChemistry, marksSocialScience,  marksBiology);
    cout<< calculateGrade (average)<<endl;
    cout<<average;
    
}
float calculateAverage(float marksEnglish, float marksMaths, float
marksChemistry, float marksSocialScience, float marksBiology)
{
    float totalMarks=marksEnglish+marksMaths+marksChemistry+marksSocialScience + marksBiology;
    float average=(totalMarks/500)*100;
    return average;
}
string calculateGrade(float average)
{
    string x;

    if(average <= 100 && average>=90  )
    {
        x="A+";
    }
    else if(average>=80 &&average<90 )
    {
        x="A";
    }
    else if(average>=70 && average<80){
        x="B+";
    }
    else if(average>=60 && average<70){
        x="B";
    }
    else if(average>=50 && average<60){
        x="C";
    }
    else if(average>=40 && average<=50){
        x="D";
    }
    else if(average < 40 ){
        x="F";
    }
    return x;
}


