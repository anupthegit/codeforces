#include<iostream>
using namespace std;

long long int cDist(int curr, int prev, int n){
    return (curr >= prev ? 0 : n) + (curr - prev);
}

int main(){
    int m, n;
    cin>>n>>m;
    int tasks[m];
    long long int totalTime = 0;
    int prev = 1;
    for(int i=0;i<m;i++){
        cin>>tasks[i];
        totalTime += cDist(tasks[i], prev, n);
        prev = tasks[i];
    }
    cout<<totalTime<<endl;
    return 0;
}