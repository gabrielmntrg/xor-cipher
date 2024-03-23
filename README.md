# Simple XOR Encryption in C

• **How the code works:** the program generates a random key of the same length as the message by reading from '/dev/urandom'. It then performs an XOR operation between each byte of the message and the corresponding byte of the generated key to encrypt the message. The ciphertext is printed in hexadecimal format.
  
• **What is XOR cipher:** XOR cipher is an additive cypher based on the XOR operation (also known as the exclusive disjunction) in logic. In an XOR operation, the output is true when the inputs differ. The XOR cipher employs the XOR logical operation in order to encrypt data. First, a random key is generated. Then, XOR operation is performed using the key so that an encrypted data is created. In order to decrypt, the same key should be used and XOR operation should be run again. The XOR operation uses the same key for both encryption and decryption. That is why it is known as a symmetric encryption.

![image](https://github.com/gabrielmntrg/xor-cipher/assets/130491681/60d70113-f3ac-4fa2-be59-9d44faec5e4b)
![image](https://github.com/gabrielmntrg/xor-encryption/assets/130491681/b73e6ccc-dc7d-449f-b627-f2eb9beda123)


# Time Complexity

The time complexity of the algorithm is linear, O(n), where 'n' is the length of the message. This is because the algorithm iterates over the message once to generate the key and then again to encrypt the message.

![image](https://github.com/gabrielmntrg/xor-encryption/assets/130491681/7b5e97f3-d4ed-4517-94d5-a0b73234b73b)

# Run the Code

1. Compilation: compile the source file 'Cryptographer' using any C compiler:  
```
gcc -o Cryptographer Cryptographer.c
```
2. Execution: run the compiled executable. On Windows-based systems, you can do this by executing:  
```
.\Cryptographer.exe
```
3. Output Example:  
```
Text: Secret text
Key: 64 50 40 00 64 50 40 00 08 FF 61
CipherText: 37 35 23 72 01 24 60 74 6D 87 15
```

# Sources
 
• [Wikipedia - XOR cipher](https://en.wikipedia.org/wiki/XOR_cipher)  
• [Medium - How Does XOR Cipher Work?](https://medium.com/@logsign/how-does-xor-cipher-work-xor-chipher-encryption-b7ad316209ca#:~:text=XOR%20cipher%20employs%20the%20XOR,operation%20should%20be%20run%20again.)  
• [GeeksforGeeks - XOR Cipher](https://www.geeksforgeeks.org/xor-cipher/)
