#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//1
bool g[4][4] = {};



int main() {
    bool a[V][V];
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (a[i][j]) {
                //출력하는 로직
                cout << i << "부터 " << j << "까지 경로가 있습니다.\n";
                // 해당 정점으로 부터 탐색하는 로직
                bfs(i);
                dfs(i);
            }
        }
    }
}
