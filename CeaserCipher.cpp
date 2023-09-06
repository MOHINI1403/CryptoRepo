#include <bits/stdc++.h>
using namespace std;

string Encryption(string plainText,int Key){
  
  for(int ind=0;ind<plainText.size();ind++){
    int pos=(int)plainText[ind]-'A';
    plainText[ind]=(char)((pos+Key)%(26)+'A');
      
  }
  return plainText;
  
  
  
}
string Decryption(string cipherText,int Key){
  for(int ind=0;ind<cipherText.size();ind++){
    int pos=(int)cipherText[ind]-'A';
    cipherText[ind]=(char)((pos-Key)%26+'A');
  }
  return cipherText;
}
int main(){
    /*Ceaser Cipher*/
    string plainText;
    cout<<"Enter the PlainText:\n";
    cin>>plainText;
    int Key;
    cout<<"Enter the Key:\n";
    cin>>Key;
    
    
    string cipherText=Encryption(plainText,Key);
    cout<<"Cipher Text: "<<cipherText<<endl;
    cout<<"Decrypted Msg: "<<Decryption(cipherText,Key)<<endl;
    
    
    
    return 0;
}
