

#include <iostream>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <vector>
#include <utility>
#include <iterator>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int flag;
    flag = 1;
    while (n[n.size() - 1] == '0')
    {
        n.erase(n.size() - 1);
    }

    for (int i = 0; i < n.size() / 2; i++)
    {
        if (n[i] != n[n.size() - 1 - i])
            flag = 0;
    }
    if (flag == 0)
        cout << "NO";
    else
        cout << "YES";
}
