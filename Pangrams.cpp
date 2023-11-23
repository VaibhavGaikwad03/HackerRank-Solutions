#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s)
{
    int i, j, count;
    string str = "abcdefghijklmnopqrstuvwxyz";

    for (i = 0; i < str.length(); i++)
    {
        count = 0;

        for (j = 0; j < s.length(); j++)
        {
            if (str[i] == s[j] || str[i] - 32 == s[j])
                count++;
        }

        if (count == 0)
            return "not pangram";
    }
    return "pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
