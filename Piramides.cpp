#include <iostream>
#include <locale>
#include <fstream>

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
    ifstream in("U1.txt");
    ofstream out("U1rez.txt");
    int a;
    in >> a;
    while (a != 0 ){
        int dydis = pirDydis(a);
        out << dydis << endl;
        a = a - kalad(dydis);
    }
    return 0;
}
