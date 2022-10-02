#include <bits/stdc++.h>
using namespace std;
int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif

    stack<string>books;
    books.push("Ramayana");
    books.push("Mahabharata");
    books.push("Vedas");
    books.push("Ram");

    while(!books.empty()){
    	cout<<books.top()<<" ";
    	books.pop();
    }

}