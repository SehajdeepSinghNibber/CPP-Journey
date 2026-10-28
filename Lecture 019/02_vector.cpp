#include <bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> v;
    cout<<"size: "<<v.capacity()<<endl;;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);

    int size = v.capacity();

    int i = 0;

    while(i<size){
        cout<<v[i]<<endl;
        i++;
    }

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    cout<<"Element at index 0: "<<v.at(0)<<endl;
    cout<<"First Element->"<<v.front()<<endl;
    cout<<"Last Element->"<<v.back()<<endl;

    cout<<"before pop"<<endl;

    for(int i:v){
        cout<<i<<" ";
    }

    cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;

    for(int i:v){
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<"before clear"<<endl;
    cout<<v.size()<<endl;

    v.clear();

    cout<<"after clear"<<endl;    
    cout<<v.size()<<endl;

    vector<int> a(5,1); // 5 elements all 1

    for(int i:a){
        cout<<i<<" ";
    }

    cout<<endl;

    vector<int> newVector(a); // copied a in newVector

    for(int i:newVector){
        cout<<i<<" ";
    }

    return 0;
}