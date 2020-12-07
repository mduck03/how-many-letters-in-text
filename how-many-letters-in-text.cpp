#include <iostream>
using namespace std;
int main()
{
    char text[100000];
    cout << "type text : ";
    cin >> text;
    char test;
    cout << "letter are you looking for:";
    cin >> test;
    int end=0;
    for (int i = 0; i < 10000; i++)
    {
        if (text[i] == test) {
            end++;
        }
    }
    cout << '"' << test << '"' << " appeared " << end << " times\n";
    cout <<"type enything to stop program";
    cin >> test;
}
