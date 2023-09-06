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



  
  
    
 
        
