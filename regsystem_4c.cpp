#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main() {
    int n;
    cin>>n;
    unordered_map<string,int> db;
    for(int i=0;i<n;i++) {
        string name;
        cin>>name;
        if (db.find(name)==db.end()){
            db[name] = 1;
            cout<<"OK"<<endl;
        } else {
            string prompt = name + to_string(db[name]);
            db[name]++;
            cout<<prompt<<endl;
        }
    }
    return 0;
}