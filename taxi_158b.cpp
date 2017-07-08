#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int numGroups;
    cin>>numGroups;
    int numTaxis = 1;
    int numKids[numGroups];
    for(int i=0;i<numGroups;i++){
        cin>>numKids[i];
    }
    sort(numKids, numKids + numGroups);
    int begin = 0;
    int end = numGroups-1;
    while(begin != end){
        if(numKids[begin] + numKids[end] <= 4){
            numKids[end] += numKids[begin];
            begin++;
        }else{
            end--;
            numTaxis++;
        }
    }
    cout<<numTaxis<<endl;
    return 0;
}