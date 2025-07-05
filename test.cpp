#include <bits/stdc++.h>
using namespace std;
int isEven(int a)
{
    return (a%2==0);
}
int main()
{
    char b[3][3] = {}; 
    memset(b,'.',sizeof(b));
    int cnt = 0;
    int res = 100;
    char m[2] = {'O','X'};
    while(1)
    {
        if(9 == cnt)
        {
            cout<<"Tie!"<<'\n';
            break;
        }
        for(int i = 0; i < 3; ++i)
        {
            for(int j = 0; j < 3; ++j)
            {
                cout<<b[i][j]<<' ';
            }
            cout<<'\n';
        }
        int x,y;
        cout<<m[isEven(cnt)]<<" next move (type in the coordinate): "; cin>>x>>y;
        if(b[x][y] == 'X' or b[x][y] == 'O' or x > 2 or y > 2)
        {
            cout<<"Invalid move"<<'\n'; 
        }
        else
        {
            b[x][y] = m[isEven(cnt)];
            //middle square case
            if (x == 1 and y == 1) 
            {
                //vertical check
                if(b[x-1][y] == m[isEven(cnt)] and b[x+1][y] == m[isEven(cnt)])
                {
                    res = isEven(cnt);
                    break;
                }
                //horizontal check
                if(b[x][y-1] == m[isEven(cnt)] and b[x][y+1] == m[isEven(cnt)]) 
                {
                    res = isEven(cnt);
                    break;
                }
                //diagonal check
                if(b[x-1][y-1] == m[isEven(cnt)] and b[x+1][y+1] == m[isEven(cnt)])
                {
                    res = isEven(cnt);
                    break;
                }
                //antidiagonal check
                if(b[x-1][y+1] == m[isEven(cnt)] and b[x+1][y-1] == m[isEven(cnt)]) 
                {
                    res = isEven(cnt);
                    break;
                }
            }
            //middle row case
            if(x == 1 and y != 1)
            {
                //first column
                if(y == 0)
                {
                    //vertical check
                    if(b[x-1][y] == m[isEven(cnt)] and b[x+1][y] == m[isEven(cnt)])
                    {
                        res = isEven(cnt);
                        break;
                    }
                    //horizontal check
                    if(b[x][y+1] == m[isEven(cnt)] and b[x][y+2] == m[isEven(cnt)])
                    {
                        res = isEven(cnt);
                        break;
                    }
                }
                //last column
                if(y == 2)
                {
                    //vertical check
                    if(b[x-1][y] == m[isEven(cnt)] and b[x+1][y] == m[isEven(cnt)])
                    {
                        res = isEven(cnt);
                        break;
                    }
                    //horizontal check
                    if(b[x][y-1] == m[isEven(cnt)] and b[x][y-2] == m[isEven(cnt)])
                    {
                        res = isEven(cnt);
                        break;
                    }
                }
            }
            //middle column case
            if(y == 1 and x != 1)
            {
                //first row
                if(x == 0)
                {
                    //horizontal check
                    if(b[x][y-1] == m[isEven(cnt)] and b[x][y+1] == m[isEven(cnt)])
                    {
                        res = isEven(cnt);
                        break;
                    }
                    //vertical check
                    if(b[x+1][y] == m[isEven(cnt)] and b[x+2][y] == m[isEven(cnt)])
                    {
                        res = isEven(cnt);
                        break;
                    }
                }
                //last row
                if(x == 2)
                {
                    //horizontal check
                    if(b[x][y-1] == m[isEven(cnt)] and b[x][y+1] == m[isEven(cnt)])
                    {
                        res = isEven(cnt);
                        break;
                    }
                    //vertical check
                    if(b[x-1][y] == m[isEven(cnt)] and b[x-2][y] == m[isEven(cnt)])
                    {
                        res = isEven(cnt);
                        break;
                    }
                }
            }
            //first corner
            if(x == 0 and y == 0)
            {
                //vertical check
                if(b[x+1][y] == m[isEven(cnt)] and b[x+2][y] == m[isEven(cnt)]) 
                {
                    res = isEven(cnt);
                    break;
                }
                //horizontal check
                if(b[x][y+1] == m[isEven(cnt)] and b[x][y+2] == m[isEven(cnt)]) 
                {
                    res = isEven(cnt);
                    break;
                }
                //diagonal check
                if(b[x+1][y+1] == m[isEven(cnt)] and b[x+2][y+2] == m[isEven(cnt)]) 
                {
                    res = isEven(cnt);
                    break;
                }
            }
            //last corner
            if(x == 2 and y == 2)
            {
                //vertical check
                if(b[x-1][y] == m[isEven(cnt)] and b[x-2][y] == m[isEven(cnt)]) 
                {
                    res = isEven(cnt);
                    break;
                }
                //horizontal check
                if(b[x][y-1] == m[isEven(cnt)] and b[x][y-2] == m[isEven(cnt)]) 
                {
                    res = isEven(cnt);
                    break;
                }
                //diagonal check
                if(b[x-1][y-1] == m[isEven(cnt)] and b[x-2][y-2] == m[isEven(cnt)]) 
                {
                    res = isEven(cnt);
                    break;
                }
            }
            //second corner
            if(x == 0 and y == 2)
            {
                //vertical check 
                if(b[x+1][y] == m[isEven(cnt)] and b[x+2][y] == m[isEven(cnt)])
                {
                    res = isEven(cnt);
                    break;
                }
                //horizontal check 
                if(b[x][y-1] == m[isEven(cnt)] and b[x][y-2] == m[isEven(cnt)]) 
                {
                    res = isEven(cnt);
                    break;
                }
                //antidiagonal check
                if(b[x+1][y-1] == m[isEven(cnt)] and b[x+2][y-2] == m[isEven(cnt)]) 
                {
                    res = isEven(cnt);
                    break;
                }
            }
            //third corner
            if(x == 2 and y == 0)
            {
                //vertical check 
                if(b[x-1][y] == m[isEven(cnt)] and b[x-2][y] == m[isEven(cnt)])
                {
                    res = isEven(cnt);
                    break;
                }
                //horizontal check 
                if(b[x][y+1] == m[isEven(cnt)] and b[x][y+2] == m[isEven(cnt)]) 
                {
                    res = isEven(cnt);
                    break;
                }
                //antidiagonal check
                if(b[x-1][y+1] == m[isEven(cnt)] and b[x-2][y+2] == m[isEven(cnt)]) 
                {
                    res = isEven(cnt);
                    break;
                }
            }
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
    if(res != 100)
    cout<<m[res]<<" win";
    return 0;
}