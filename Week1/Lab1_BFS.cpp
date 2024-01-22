#include<bits/stdc++.h>
using namespace std;

map<int,vector<int>> graph;
map<int,bool> visited;

void addEdge(int s,int d){
    graph[s].push_back(d);
}

void bfs(int s){
    visited[s] = true;
    
    list<int> q;
    q.push_back(s);
    while(!q.empty()){
        int source = q.front();
        cout<<source<<" ";
        q.pop_front();
        
        for(auto x:graph[source]){
            if(!visited[x]){
                visited[x]=true;
                q.push_back(x);
            }
        }
    }
}

int main(){
    
    int s,d;
    cout<<"Source (Enter -1 to stop): ";
    cin>>s;
    cout<<"Destination: ";
    cin>>d;
    while(s!=-1){
        addEdge(s,d);
        cout<<"Source: ";
        cin>>s;
        cout<<"Destination: ";
        cin>>d;
    }
    cout<<"Enter source to start dfs: ";
    cin>>s;
    bfs(s);
}