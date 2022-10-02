#include <bits/stdc++.h>
using namespace std;
int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif


    pair<int,string> p;

    //insert
    p={1,"Ankit"};
    //or
    p=make_pair(2,"Raj");

    cout<<p.first<<" "<<p.second<<endl;
    
}