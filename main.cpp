#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,e,g,h,j,k,m,n,r,p,ano;
    cout << "\n###PROGRAMA QUE VERIFICA QUAL O DOMINGO DE PASCOA###";
    cout << "\n Digite o ano:\n";
    cin >> ano;
    a = ano%19;
    b = ano/100;
    c = ano%100;
    d = b/4;
    cout <<d;
    e = b%4;
    g = ((8*b)+13)/25;
    h = ((19*a) + b - d - g - 15) % 30;
    j = c/4;
    k = c%4;
    m = (a + (11*h))/319;
    r = ((2*e) + (2*j) - k - h + m + 32) % 7;
    n = (h - m + r + 90) / 25;
    p = (h - m + r + n + 19)% 32;

    cout << "\nO domingo de Pascoa do ano informado: dia "<<p<<" do mes "<<n <<"  ";
}

