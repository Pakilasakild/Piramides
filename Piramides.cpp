#include <iostream>
#include <locale>

using namespace std;
int pirDydis (int a)
{
    int is = 0, c = 0;
    for (int i = 1; is <= a; i++){
        is += i;
        c = i;
    }

    return c-1;
}
int kalad (int a)
{
    int is = 0;
    for (int i = 0; i <= a; i++){
        is += i;
    }
    return is;
}

int main(){
    int a;
    cin >> a;
    while (a != 0 ){
        int dydis = pirDydis(a);
        cout << dydis << endl;
        a = a - kalad(dydis);
    }
    return 0;
}
