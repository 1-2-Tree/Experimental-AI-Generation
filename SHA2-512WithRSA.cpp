#include <iostream>

#include <string>

#include <openssl/sha.h>

#include <openssl/rsa.h>

std::string encrypt(const std::string& input) {

std::string output;

std::string hash;

std::string key;

std::string iv;

std::string ciphertext;

std::string decryptedtext;

std::string error;

key = input.substr(0, 16);

iv = input.substr(16, 16);

hash = SHA2_512(key, iv);

ciphertext = AES_ENCRYPT(hash, input.substr(16, -1));

decryptedtext = AES_DECRYPT(ciphertext, key);

error = "";

if (decryptedtext.length() != input.length()) {

error = "Decrypted text is not the same length as input text.";

}

else {

output = input + "

" + decryptedtext;

}

return output;

}

int main() {

std::string input = "This is a test!";

std::string output = encrypt(input);

std::cout << output << std::endl;

return 0;

}
