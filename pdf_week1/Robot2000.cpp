#include <iostream>
#include <string>
using namespace std;

int main()
{
    string t = "";
    cin >> t;
    int n = t.length();
    string s = "";
    char H = 'N';
    for (int i = 0; i < n; i++)
    {
        if (t[i] == 'N')
        {
            if (H == 'N')
            {
                s += 'F';
            }
            else if (H == 'W')
            {
                s += "RF";
                H = 'N';
            }
            else if (H == 'S')
            {
                s += "RRF";
                H = 'N';
            }
            else if (H == 'E')
            {
                s += "RRRF";
                H = 'N';
            }
        }
        else if (t[i] == 'S')
        {
            if (H == 'S')
            {
                s += 'F';
            }
            else if (H == 'E')
            {
                s += "RF";
                H = 'S';
            }
            else if (H == 'N')
            {
                s += "RRF";
                H = 'S';
            }
            else if (H == 'W')
            {
                s += "RRRF";
                H = 'S';
            }
        }
        else if (t[i] == 'E')
        {
            if (H == 'E')
            {
                s += 'F';
            }
            else if (H == 'N')
            {
                s += "RF";
                H = 'E';
            }
            else if (H == 'W')
            {
                s += "RRF";
                H = 'E';
            }
            else if (H == 'S')
            {
                s += "RRRF";
                H = 'E';
            }
        }
        else if (t[i] == 'W')
        {
            if (H == 'W')
            {
                s += 'F';
            }
            else if (H == 'S')
            {
                s += "RF";
                H = 'W';
            }
            else if (H == 'E')
            {
                s += "RRF";
                H = 'W';
            }
            else if (H == 'N')
            {
                s += "RRRF";
                H = 'W';
            }
        }
        else if (t[i] == 'Z')
        {
            s += 'Z';
            H = 'N';
        }
    }
    cout << s << endl;
}