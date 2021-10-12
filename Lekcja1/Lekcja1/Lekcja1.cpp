#include <iostream>

using namespace std;

int a, b, c, d, e;

void getValues() 
{
    cout << "proszę podaj pierwszą liczbe:";
    cin >> a;
    cout << "proszę podaj drugą liczbę:";
    cin >> b;
    cout << "proszę podaj trzecią liczbę:";
    cin >> c;
}
int getMax()
{
    int max=INT_MIN;

    if ((a > b) && (a > c))
    {
        max = a;
    }
    else if ((b > a) && (b > c))
    {
        max = b;
    }
    else if ((c > b) && (c > a))
    {
        max = c;
    }
    return max; 
}

int main()
{
    setlocale(LC_ALL, "");
    int max=0;
 
    getValues(); //pobieram wartości od użytkownika 
    max=getMax(); //Wyświetlam użytkownikowi największą liczbę

    cout << "największa jest liczba " << max << "" << endl;
  
    //max4 teraz


    getValues();
    
    cout << "proszę podaj czwartą liczbę:";
    cin >> d;

    max=getMax();

    max = (d > max) ? d : max;

    cout << "największa jest liczba: " << max << "" << endl;
     
    // max 5 


    getValues();
    cout << "proszę podaj czwartą liczbę:";
    cin >> d;
    cout << "proszę podaj piątą liczbę:";
    cin >> e;
    
    max = getMax();
    max = ((d > max) && (d > e)) ? d : ((e > max) && (e > d)) ? e : max;

    
    cout << "największa jest liczba: " << max << "" << endl;

    return 0;
}