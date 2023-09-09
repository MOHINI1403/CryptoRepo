# CryptoRepo
## Types Of Ciphers
&nbsp;
## Ceaser Cipher:
  * Encryption: E(P)=(P+K)mod(26)  P=>PlainText;
  * Decryption:D(C)=(C-K)mod(26) C=>CipherText;

    Points:
      1.Symmetirc Encryption Cipher Techniques
      2.Only 26 possible plainText CipherText combinations are possible
      3.Fixed Key
      4.Subsitution Cipher
## PlayFair Cipher:
  * Encryption Algorithm :The PlayFair Cipher Encryption Algorithm has two Steps:

  ### 1:Generate the Key Square(5*5):
  * The key square is a 5×5 grid of alphabets that acts as the key for encrypting the plaintext. Each of the 25 alphabets must be unique and one letter of the alphabet (usually J) is omitted from the table (as the table can hold only 25 alphabets). If the plaintext contains J, then it is replaced by I. 
&nbsp;
    
  * The initial alphabets in the key square are the unique alphabets of the key in the order in which they appear followed by the remaining letters of the alphabet in order. 

  ### 2.Algorithm to encrypt the plain text:
  * The plaintext is split into pairs of two letters (digraphs). If there is an odd number of letters, a Z is added to the last letter.
 ### Rules For Encryption:
   1.If Both The Digraphs Character Lies in The Same Column:
     Take the letter below each one (going back to the top if at the bottom).
     
     > Diagraph: "me"
     > Encrypted Text: cl
     > Encryption: 
        m -> c
        e -> l
  2.If Both The Digraphs Character Lies in the Same Row:
    Take the letter from left to Right and if on the righmost corner move back to the leftmost Position

    > Diagraph: "st"
    > Encrypted Text: tl
    > Encryption: 
      s -> t
      t -> l
  3.If neither of the above rules is true: Form a rectangle with the two letters and take the letters on the horizontal opposite corner of the rectangle.

  ![alt text](https://media.geeksforgeeks.org/wp-content/uploads/20190818175431/encryption-of-me.png)
  &nbsp;
  ![alt text](https://media.geeksforgeeks.org/wp-content/uploads/20190818175435/encryption-of-st.png)
  &nbsp;
  ![alt text](https://media.geeksforgeeks.org/wp-content/uploads/20190818175433/encryption-of-nt.png)
  &nbsp;
  ![alt text](https://media.geeksforgeeks.org/wp-content/uploads/20190818175428/encryption-of-instruments.png)

  * Decryption Algorithm:
    Decrypting the Playfair cipher is as simple as doing the same process in reverse. The receiver has the same key and can create the same key table, and then decrypt any messages made using that key.

    ### Rules For Decryption:
      * If both the letters are in the same column: Take the letter above each one (going back to the bottom if at the top).
      * If both the letters are in the same row: Take the letter to the left of each one (going back to the rightmost if at the leftmost position).
      * If neither of the above rules is true: Form a rectangle with the two letters and take the letters on the horizontal opposite corner of the rectangle.

  ![alt text](https://media.geeksforgeeks.org/wp-content/uploads/20190818175428/encryption-of-instruments.png)
## Affine Cipher
  ### Encryption:
   * E(x)=(ax+b)mod(n):
   * Here a and b are the key values and n here is 26 . For the Affine Cipher to be performed a and n should be co-prime
  ### Decryption:
  * D(c)=a^-1(c-b)mod(n)
  * here a and b are same key values n here is 26.a^-1 is the mulitplicative inverse of a and n



![alt text](https://media.geeksforgeeks.org/wp-content/uploads/affin-cipher.png)


## AutoKey Cipher
 This Cipher is Polyalphabetic Subsitution Cipher which is closely related to Vigenere Cipher but uses differnt method to generate their key

    Plaintext = "HELLO"
    Autokey = N
    Ciphertext = "ULPWZ"


Given plain text is : H E L L O
Key is              : N H E L L

Let's encrypt:

Plain Text(P)       : H   E   L   L   O
Corresponding Number: 7   4   11  11  14     
Key(K)              : N   H   E   L   L
Corresponding Number: 13  7   4   11  11      
                    ---------------------
Applying the formula: 20  11  15  22  25  

Corresponding 
Letters are         : U    L   P   W   Z

Hence Ciphertext is: ULPWZ

Let's decrypt:

Cipher Text(C)      : U   L   P   W   Z
Key(K)              : N   H   E   L   L
                    ---------------------
Applying the formula: H   E   L   L   O

Hence Plaintext is: HELLO 


## Vernam Cipher :
Hilbert Vernam
### Encryption Method:
  * Assign the number to each character in the key and the plain Text
  * Perform XOR operation on every key plain text character pair and obatin the resultant value
  * If the resultant value is less than 26 replace the character correspoding to that value as it is else subtract the obtained number from 26 and then convert it into the desired character
  * This reuslts in the formation of a Cipher Text


       PlainText : O A K
                 : 14 0 10
       Key       : S O N
                 : 18 14 13

    Corresponding to every character perform XOR operation :

         XOR of O^S=2=>C
         XOR of A^O=14=>O
         XOR of K^N=7=>H
    Cipher Text: COH

### Decryption Method:
  * During Decryption the Key and Cipher Text both are provided to the user the user is only supposed to perform the subtraction of cipherText with the Given Key
    


  
  
    
 
        
