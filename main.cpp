#include <iostream>

using namespace std;

int a,b,c,m;

int main()
{

    cout<< "Podaj 3 liczby rozdzielone spacja" << endl;
    cin>>a>>b>>c;

    m=a;
    if (b>m) m=b;
    if (c>m) m=c;

    cout<<"Najwieksza liczba to: "<<m;


   /* if ((a>=b) && (a>=c))
        cout<<"Najwieksza liczba jest"<<a;

    else if ((b>=a) && (b>=c))
        cout<<"Najwieksza liczba jest"<<b;

    else if ((c>=a) && (c>=b))
        cout<<"Najwieksza liczba jest"<<c;

*/
    return 0;
}
