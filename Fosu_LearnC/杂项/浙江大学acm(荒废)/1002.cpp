#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

char pic[10][10];
int ans, n;
int Judge(int row, int col)
{
    for (int i = n - 1; i >= 0; i--) //判斷所在列
    {
        if (pic[row][i] == 'a')
            return false;
        if (pic[row][i] == 'X')
            break;
    }
    for (int i = n - 1; i >= 0; i--) //判斷所在行
    {
        if (pic[i][col] == 'a')
            return false;
        if (pic[i][col] == 'X')
            break;
    }
    return true;
}
void dfs(int cur, int tot)
{
    if (cur == n * n)
    {
        ans = max(ans, tot);
        return;
    }
    else
    {
        int row = cur / n; //這里是一個很有意思的小技巧
        int col = cur % n;
        if (pic[row][col] == '.' && Judge(row, col))
        {
            pic[row][col] = 'a';
            dfs(cur + 1, tot + 1);
            pic[row][col] = '.';
        }
        dfs(cur + 1, tot);
    }
}

int main()
{
    while (scanf("%d", &n), n)
    {
        memset(pic, 0, sizeof(pic));
        for (int i = 0; i < n; i++)
            scanf("%s", pic[i]);
        ans = 0;
        dfs(0, 0);
        printf("%d\n", ans);
    }
    return 0;
}