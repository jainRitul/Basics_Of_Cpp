#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

class MonoalphabeticCipher {
public:
    MonoalphabeticCipher(const std::string &key) {
        generateKeyMaps(key);
    }

    std::string encrypt(const std::string &plaintext) {
        std::string ciphertext;
        for (char c : plaintext) {
            if (islower(c)) {
                ciphertext += encryptionMap[c];
            } else if (isupper(c)) {
                ciphertext += toupper(encryptionMap[tolower(c)]);
            } else {
                ciphertext += c;
            }
        }
        return ciphertext;
    }

    std::string decrypt(const std::string &ciphertext) {
        std::string plaintext;
        for (char c : ciphertext) {
            if (islower(c)) {
                plaintext += decryptionMap[c];
            } else if (isupper(c)) {
                plaintext += toupper(decryptionMap[tolower(c)]);
            } else {
                plaintext += c;
            }
        }
        return plaintext;
    }

private:
    std::unordered_map<char, char> encryptionMap;
    std::unordered_map<char, char> decryptionMap;

    void generateKeyMaps(const std::string &key) {
        std::string alphabet = "abcdefghijklmnopqrstuvwxyz";

        for (size_t i = 0; i < alphabet.length(); ++i) {
            encryptionMap[alphabet[i]] = key[i];
            decryptionMap[key[i]] = alphabet[i];
        }
    }
};

int main() {
    std::string key = "qwertyuiopasdfghjklzxcvbnm"; // 26-letter permutation of the alphabet
    MonoalphabeticCipher cipher(key);

    std::string plaintext;
    std::cout << "Enter plaintext: ";
    std::getline(std::cin, plaintext);

    std::string encryptedText = cipher.encrypt(plaintext);
    std::cout << "Encrypted text: " << encryptedText << std::endl;

    std::string decryptedText = cipher.decrypt(encryptedText);
    std::cout << "Decrypted text: " << decryptedText << std::endl;

    return 0;
}
