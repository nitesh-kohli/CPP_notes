#include<iostream>
#include<bitset>
#include<bits/stdc++.h>
// bitset is an array of bools but each boolean value
// is not stored in a separate byte instead, bitset optimizes the
// space such that each boolean value takes 1-bit space only,
// so space taken by bitset is less than that of an array of bool or vector of bool. 

using namespace std;

int main(){
    bitset<4> tera;
    //cout<<tera;

    bitset<8> octa(10);
    // cout<<octa; 

    bitset<4> bitform(string("1000"));
    //cout<<bitform;

   for(int i = 0; i < octa.size(); i++){
        cout<<octa[i]<<"_";
   }
    
    cout<<endl<<endl;
    return 0;
}