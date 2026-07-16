#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int r,c;
char a[15][15];
bool vis[15][15];


bool batman(int x,int y){
    if(a[x][y]=='T') return true;
    vis[x][y]=1;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];

        if(nx>=0&&nx<r&&ny>=0&&ny<c&&!vis[nx][ny]&&a[nx][ny]!='#'){
            if(batman(nx,ny)) return true;
        }
    }
    return false;
}

int main() {
    cin>>r>>c;

    int sx,sy;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
            if(a[i][j]=='S'){
                sx=i;
                sy=j;
            }
        }
    }

    if(batman(sx,sy)) cout<<"YES";
    else cout<<"NO";

    return 0;
}