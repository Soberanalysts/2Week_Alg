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
                //����ϴ� ����
                cout << i << "���� " << j << "���� ��ΰ� �ֽ��ϴ�.\n";
                // �ش� �������� ���� Ž���ϴ� ����
                bfs(i);
                dfs(i);
            }
        }
    }
}
