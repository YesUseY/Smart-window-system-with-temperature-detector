#include <iostream>
#include <time.h>

using namespace std;



int main()
{
    srand(time(0));
    int daviklis;
    daviklis = rand()%2;
    bool lempute;
    lempute = rand()%2;
    if (daviklis>0&&lempute) {
        cout << "lempute dega" << endl;
    }
    else if (daviklis==0&&lempute) {
        cout << "lempute automatiskai buvo isjungta" << endl;
    }
    else if (daviklis>0&&lempute==0) {
        cout << "reikia ijungti lempute" << endl;
    }
    else {
        cout << "nieko nera namie" << endl;
    }
    return 0;
}
