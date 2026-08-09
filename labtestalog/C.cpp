#include <iostream>
using namespace std;

int N, M;
char maze[25][25];
bool visited[25][25];
bool found = false;

void dfs(int x, int y)
{
    if (x < 0 || x >= N || y < 0 || y >= M)
        return;

    if (maze[x][y] == '#' || visited[x][y])
        return;

    if (maze[x][y] == 'T')
    {
        found = true;
        return;
    }

    visited[x][y] = true;

    dfs(x - 1, y); 
    dfs(x + 1, y); 
    dfs(x, y - 1); 
    dfs(x, y + 1); 
}

int main()
{
    cin >> N >> M;

    int sx, sy;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> maze[i][j];

            if (maze[i][j] == 'S')
            {
                sx = i;
                sy = j;
            }
        }
    }

    dfs(sx, sy);

    if (found)
        cout << "Path Exists";
    else
        cout << "No Path";

    return 0;
}