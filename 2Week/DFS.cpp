//DFS 어떤 노드부터 시작해 인접한 노드들을 재귀적으로 방문하며 방묺나 정점은 다시 방문안함, 각 분기마다 가능한 가장 멀리있는 노드까지 탐색하는 알고리즘


#include<iostream>
#include<bits/stdc++.h>

using namespace std;

const int n = 6;
vector<int> adj[n];
int visited[n];

void dfs(int u) {
    visited[u] = 1;
    cout << u << "\n";
    for (int v : adj[u]) {
        if (visited[v] == 0) {
            dfs(v);
        }
    }
    cout << u << "로부터 시작된 함수가 종료되었습니다.\n";
    return;
}

int main() {
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[4].push_back(2);
    adj[2].push_back(5);
    dfs(1);
}
//
//void D_F_S(int u, int adj)
//{
//    if 
//}