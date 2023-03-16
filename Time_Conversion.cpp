#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    string hour = s.substr(0, 2);
    int hr = stoi(hour);
    string minutes = s.substr(3, 2);
    string seconds = s.substr(6, 2);
    string abbreviations = s.substr(8, 2);
    
    if(hr == 12 && abbreviations == "AM")
    {
        hour = "00";
    }
    else if(hr < 12 && abbreviations == "PM")
    {
        hr = hr + 12;
        hour = to_string(hr);
    }
    
    return hour+":"+minutes+":"+seconds;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
