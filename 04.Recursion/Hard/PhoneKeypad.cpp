#include<bits/stdc++.h>
using namespace std;
string getString(int d){
    if(d==2){
        return "abc";
    }
    if(d==3){
        return "def";
    }
    if(d==4){
        return "ghi";
    }
    if(d==5){
        return "jkl";
    }
    if(d==6){
        return "mno";
    }
    if(d==7){
        return "pqrs";
    }
    if(d==8){
        return "tuv";
    }
    if(d==9){
        return "wxyz";
    }
    return "";
}
int keypad(int num, string output[])
{
    if(num==0){
        output[0]="";
        return 1;
    }
    int lastdigit=num%10;
    int smallNumber=num/10;
    int smallOutputSize=keypad(smallNumber,output);
    string option=getString(lastdigit);
    // Copy
    for(int i=0;i<option.length()-1;i++){
        for(int j=0;j<smallOutputSize;j++){
            output[j+(i+1)*smallOutputSize]=output[j];
        }
    }
    // adding to last 
    int k=0;
    for(int i=0;i<option.length();i++){
        for(int j=0;j<smallOutputSize;j++){
            output[k]=output[k]+output[i];
            k++;
        }
    }
    return smallOutputSize*option.length();
}



// print
void print(int num,string output){
    if(num==0){
        cout<<output<<endl;
        return;
    }
    string s[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string input=s[num%10];
    int i=0;
    while(i<input.size()){
        print(num/10,input[i]+output);
        i++;
    }
}

void printKeypad(int num){
    string output="";
    print(num,output);
}