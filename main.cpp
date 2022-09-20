#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;



int main()
{
    srand(time(0));
    bool daviklis;
    daviklis = rand()%2;
    bool langas;
    langas = rand()%2;
    int x = 1;
    int L = 5;

    int C;
    C = rand()%73-30;
    cout << C << endl;
    while (x>0) {

        Sleep(1000);

        if (langas&&langas!=L) {
                L = 1;
        cout << "langas yra atidarytas" << endl;
    }
    else if (langas!=L) {
            L = 0;
        cout << "langas yra uzdarytas" << endl;
    }
     daviklis = rand()%2;

        if (daviklis)
        {
            langas = 0;
        }
        else if (daviklis==0&&C>20) {

            langas = 1;
        }
    }
    return 0;
}
