/*
Jack is always excited about sunday. It is favourite day, when he gets to play all day. And goes to cycling with his friends. 

So every time when the months starts he counts the number of sundays he will get to enjoy. Considering the month can start with any day, be it Sunday, Monday…. Or so on.

Count the number of Sunday jack will get within n number of days.

 Example 1:

Input 

mon-> input String denoting the start of the month.

13  -> input integer denoting the number of days from the start of the month.

Output :

2    -> number of days within 13 days.

Explanation:

The month start with mon(Monday). So the upcoming sunday will arrive in next 6 days. And then next Sunday in next 7 days and so on.

Now total number of days are 13. It means 6 days to first sunday and then remaining 7 days will end up in another sunday. Total 2 sundays may fall within 13 days.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string day;
    int n,neu,result;
    cout<<"Enter the starting day of the month (String value) ";
    cin>>day;
    cout<<"Enter the no of days in a month ";
    cin>> n;
    if(n==0){
        return 0;
    }
    else{

    unordered_map<string, int> week;

    week["sun"] = 0;
    week["mon"] = 6;
    week["tue"] = 5;
    week["wed"] = 4;
    week["thu"] = 3;
    week["fri"] = 2;
    week["sat"] = 1;

    int rest= n-week[day];

    int daysToSunday = week[day];

    if (daysToSunday >= n) {
        cout << 0;
        return 0;
    }

    if (day == "sun")
    neu = (rest - 1) / 7;
    else
    neu = rest / 7;


     result =1+neu;
     cout<<result;
    }
    return 0;
}