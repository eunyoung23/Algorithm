//
//  DFS.cpp
//  CodingTest_w
//
//  Created by 이은영 on 2021/01/19.
//
/*
#include <bits/stdc++.h>

using namespace std;

bool visited[9];
vector<int> graph[9];

void dfs(int x){
    visited[x]=true;
    cout<<x<<" ";
    for(int i=0; i<graph[x].size(); i++){
        int y=graph[x][i];
        if(!visited[y]) dfs(y);
    }
}


int main(){
    //노드 1에 연결된 노드 정보 저장
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[1].push_back(8);
    
    graph[2].push_back(1);
    graph[2].push_back(7);
    
    graph[3].push_back(1);
    graph[3].push_back(4);
    graph[3].push_back(5);
    
    graph[4].push_back(3);
    graph[4].push_back(5);
    
    graph[5].push_back(3);
    graph[5].push_back(4);
    
    graph[6].push_back(7);
    
    graph[7].push_back(2);
    graph[7].push_back(6);
    graph[7].push_back(8);
    
    graph[8].push_back(1);
    graph[8].push_back(7);
    
    dfs(1);
    
    return 0;
}
 */
