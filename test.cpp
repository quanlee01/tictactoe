#include <bits/stdc++.h>
using namespace std;
int isEven(int a)
{
    return (a%2==0);
}
int main()
{
    char b[3][3] = {}; 
    memset(b,'0',sizeof(b));
    bool end = false;
    int cnt = 0;
    char m[2] = {'O','X'};
    while(!end)
    {
        if(9 == cnt) end = ~end;
        for(int i = 0; i < 3; ++i)
        {
            for(int j = 0; j < 3; ++j)
            {
                cout<<b[i][j]<<' ';
            }
            cout<<'\n';
        }
        int x,y;
        cout<<"Your next move (type in the coordinate): "; cin>>x>>y;
        if(b[x][y] == 'X' or b[x][y] == 'O' or x > 2 or y > 2)
        {
            cout<<"Invalid move"<<'\n'; 
        }
        else
        {
            b[x][y] = m[isEven(cnt)];
            if()
            cnt++;
        }
        cout<<'\n';
    }
    for(int i = 0; i < 3; ++i)
        {
            for(int j = 0; j < 3; ++j)
            {
                cout<<b[i][j]<<' ';
            }
            cout<<'\n';
        }
    return 0;
}