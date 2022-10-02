//set
//stores unique value
//ordered --print in sorted order

#include <bits/stdc++.h>
using namespace std;

void print( set<int> &s){
   for(auto it:s){
   	  cout<<it<<" ";
   }
   cout<<endl<<endl;
}

void printit(set<int>s){
	set<int>::iterator it;
   for(it=s.begin();it!=s.end();it++){
      cout<<(*it)<<" ";
   }
   cout<<endl<<endl;
}


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif

    set<int>s;
    int x;
    cin>>x;
    int val;
    while(x--){
    	cin>>val;
    	s.insert(val);  //O(log(n))
    }
    print(s);



//s.find()   O(log n)


    auto it=s.find(34);
    auto itr=s.find(1000);
    if(it!=s.end()){
      cout<<(*it)<<endl;
    }else{
      cout<<"Not there"<<endl<<endl;
      cout<<(*itr)<<endl;
    }
    if(itr!=s.end()){
      cout<<(*itr)<<endl;
    }else{
      cout<<"Not there"<<endl<<endl;
    }


    //erase -- take iterator or direct value
    s.erase(34);
    printit(s);
}