#include <iostream>
using namespace std;
string findZodiacSign(int day, string month);
main()
{
    int day;
    string month;
    cout << "Enter the day of birth: ";
    cin >> day;
    cout << "Enter the month of birth(e.g.,January, February): ";
    cin >> month;
    cout << findZodiacSign(day, month);
}
string findZodiacSign(int day, string month)
{
    string x;
    if (month == "March" && day >= 21 || month == "April" && day <= 19)
    {
        x = "Aries";
    }
    if (month == "April" && day >= 20 || month == "May" && day <= 20)
    {
        x = "Taurus";
    }
    if (month == "May" && day >= 21 || month == "June" && day <= 20)
    {
        x = "Gemini";
    }
    if (month == "June" && day >= 21 || month == "July" && day <= 22)
    {
        x = "Cancer";
    }
    if (month == "July" && day >= 23 || month == "August" && day <= 22)
    {
        x = "Leo";
    }
    if (month == "August" && day >= 23 || month == "September" && day <= 22)
    {
        x = "Virgo";
    }
    if (month == "September" && day >= 23 || month == "October" && day <= 22)
    {
        x = "Libra";
    }
    if (month == "October" && day >= 23 || month == "November" && day <= 21)
    {
        x = "Scorpio";
    }
    if (month == "November" && day >= 22 || month == "December" && day <= 21)
    {
        x = "Sagittarius";
    }
    if (month == "December" && day >= 22 || month == "January" && day <= 19)
    {
        x = "Capricorn";
    }
    if (month == "January" && day >= 20 || month == "February" && day <= 18)
    {
        x = "Aquarius";
    }
    return x;
}
