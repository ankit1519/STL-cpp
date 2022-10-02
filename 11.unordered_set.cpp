
//unordered
//O(1)
#include <bits/stdc++.h>
using namespace std;

void print(unordered_set<int> &us){
   for(auto it:us){
   	  cout<<it<<" ";
   }
   cout<<endl<<endl;
}

void printit(unordered_set<int>us){
	unordered_set<int>::iterator it;
   for(it=us.begin();it!=us.end();it++){
      cout<<(*it)<<" ";
   }
   cout<<endl<<endl;
}


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif

    unordered_set<int>us;
    int x;
    cin>>x;
    int val;
    while(x--){
    	cin>>val;
    	us.insert(val);  //O(1)
    }
    print(us);



//s.find()   O(1)


    auto it=us.find(34);
    auto itr=us.find(1000);
    if(it!=us.end()){
      cout<<(*it)<<endl;
    }else{
      cout<<"Not there"<<endl<<endl;
      cout<<(*itr)<<endl;
    }
    if(itr!=us.end()){
      cout<<(*itr)<<endl;
    }else{
      cout<<"Not there"<<endl<<endl;
    }


    //erase -- take iterator or direct value  O(1)
    us.erase(34);
    printit(us);
}