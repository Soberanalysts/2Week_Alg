//DFS � ������ ������ ������ ������ ��������� �湮�ϸ� ��M�� ������ �ٽ� �湮����, �� �б⸶�� ������ ���� �ָ��ִ� ������ Ž���ϴ� �˰���


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
    cout << u << "�κ��� ���۵� �Լ��� ����Ǿ����ϴ�.\n";
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