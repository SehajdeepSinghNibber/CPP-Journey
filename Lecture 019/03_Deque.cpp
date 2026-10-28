#include <bits/stdc++.h>
using namespace std;

int main(){
    
    deque<int> d;

    d.push_back(98);
    d.push_front(12);
    d.push_front(32);
    d.push_front(22);
    d.push_front(72);
    d.push_front(26);
    d.push_front(39);
    d.push_front(92);

    for(int i:d){
        cout<<i<<endl;
    }

    d.pop_back();

    for(int i:d){
        cout<<i<<endl;
    }

    d.pop_front();

    for(int i:d){
        cout<<i<<endl;
    }

    cout<<"Element at index 0: "<<d.at(0)<<endl;
    cout<<"First Element->"<<d.front()<<endl;
    cout<<"Last Element->"<<d.back()<<endl;

    cout<<"Empty or not: "<<d.empty()<<endl;

     cout<<"before erase"<<endl;
    cout<<d.size()<<endl;

    d.erase(d.begin(),d.end()-1);

    cout<<"after erase"<<endl;    
    cout<<d.size()<<endl;

    return 0;
}