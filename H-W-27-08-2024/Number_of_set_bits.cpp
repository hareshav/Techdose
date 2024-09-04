#include<bits/stdc++.h>

using namespace std;

int findset(int num){
    int count=0;
    while(num)
    {
        count += (num & 1);
        num >>= 1;
    }
    return count;
}
int main()
{
    int inp;
    cin >> inp;
    cout << findset(inp);

}
