#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d, e, Ind = 0, Eng = 0, draw = 0;
        cin >> a >> b >> c >> d >> e;
        int arr[5];
        int i;
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
        arr[3] = d;
        arr[4] = e;

        for (i = 0; i < 4; i++)
        {
            if (arr[i] == 1)
                Ind++;
            else if (arr[i] == 2)
                Eng++;
            else
                draw++;
        }

        if (Ind > Eng)
            cout << "INDIA" << endl;
        else if (Eng > Ind)
            cout << "ENGLAND" << endl;
        else
            cout << "DRAW" << endl;
    }
}