#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;
    char s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int aux = 0;
    while (k > 0)
    {
        int i = 0;
        bool remove = true;
        char c = 97 + aux;
        for (int i = 0; i < n && k > 0; i++)
        {
            if (s[i] == c)
            {
                s[i] = ' ';
                k--;
            }
        }
        
        aux = aux + 1;
    }

    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] != ' ')
                cout << s[i];
        }
    }
    return 0;
}