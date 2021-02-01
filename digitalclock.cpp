#include <iostream>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main()
{
    int hr = 11, mn = 59, sec = 57;
    string s = "AM";
    while (1)
    {
        system("cls");
        cout << "*******************" << endl;
        cout << hr << " : " << mn << " : " << sec << " : " << s << endl;
        cout << "*******************" << endl;

        sec++;
        if (sec == 60)
        {
            mn++;
            sec = 00;
            if (mn == 60)
            {
                hr++;
                mn = 00;
                {
                    if (hr == 12)

                        s = "PM";
                }
                if (hr == 13)
                {
                    hr = 01;
                }
            }
        }
    }

    return 0;
}