#include <bits/stdc++.h>
using namespace std;

string generateKey(string str, string key)
{
    int x = str.size();
 
    for (int i = 0; ; i++)
    {
        if (x == i)
            i = 0;
        if (key.size() == str.size())
            break;
        key.push_back(key[i]);
    }
    return key;
}


string Encryption(string plainText,string Key){
  for(int ind=0;ind<plainText.size();ind++){
    plainText[ind]=(((plainText[ind]-'A')+(Key[ind]-'A'))%26)+'A';
  }
  return plainText;
  
}

string originalText(string cipher_text, string key)
{
    string orig_text;
 
    for (int i = 0 ; i < cipher_text.size(); i++)
    {
        // converting in range 0-25
        char x = (cipher_text[i] - key[i] + 26) %26;
 
        // convert into alphabets(ASCII)
        x += 'A';
        orig_text.push_back(x);
    }
    return orig_text;
}

int main(){
    string plainText;
    cout<<"Enter the PlainText:\n";
    
    cin>>plainText;
    
    string keyWord;
    cout<<"Enter the KeyWord:\n";
    cin>>keyWord;
    
    string Key=generateKey(plainText,keyWord);
    cout<<"Encrypted Message:\n";
    string cipher_text=Encryption(plainText,Key);
    cout<<cipher_text<<endl;
    cout<<"Decrypted Message:\n";
    cout<<originalText(cipher_text,Key)<<endl;
    
    return 0;
}
