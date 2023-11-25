// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    float b;
    cin >> a >> b;
    
    if ((a%5==0) && (b-a-0.5>=0))
    {
        cout<< b-a-0.5 << endl;
    }
    else
    {
        cout<< b << endl;
    }

    return 0;
}
