#include<bits/stdc++.h>
using namespace std;

map<int,vector<int>> graph;
map<int,bool> visited;

void addEdge(int s,int d){
    graph[s].push_back(d);
}

void dfs(int s){
    visited[s] = true;
    cout<<s<<" ";
    for(auto x:graph[s]){
        if(!visited[x]){
            dfs(x);
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
    dfs(s);
}