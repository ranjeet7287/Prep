#include <bits/stdc++.h> 
using namespace std;
string leftRotate(string str, int d) {
  return str.substr(d%str.length()+str.substr(0,d%str.length()));
}

string rightRotate(string str, int d) {
    return str.substr(str.length()-d%str.length())+str.substr(0,str.length()-d%str.length());
  
}