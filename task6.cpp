#include <iostream>
using namespace std;
string hotel(string month, int day);
main()
{
    string month;
    int day;
    cout << "Enter the month (May, June, August,September,October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> day;
    cout << hotel(month, day);
}
string hotel(string month, int day)
{
    float appartment_price, studio_price ;

    if (month == "June" || month == "september")
    {
        appartment_price = day * 68.70;
        if (day <= 14)
        {
            studio_price = day * 75.20;
        }
        else if (day > 14)
        {
            studio_price = day * 75.20;
            studio_price = studio_price - (studio_price * 0.2);
        }
    }
    else if (month == "May" || month == "October")
    {
        appartment_price = day * 65;
        if (day < 7)
        {
            studio_price = day * 50;
        }
        else if (day >= 7 && day <= 14)
        {

            studio_price = studio_price - (studio_price * 0.05);
        }
        else
        {
            studio_price = studio_price - (studio_price * 0.3);
        }
    }

    else if (month == "July" || month == "August")
    {
        appartment_price = day * 77;
        studio_price = day * 76;
    }
    if (day > 14)
    {
        appartment_price = appartment_price - (appartment_price * 0.1);
    }
    return "Apartment: " + to_string(appartment_price) + "$.\n" + "Studio: " + to_string(studio_price) + "$.";
}
