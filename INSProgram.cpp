#include <iostream>
#include <string>

std::string encryption(const std::string& p, int k) {
    std::string x;
    for (size_t i = 0; i < p.length(); ++i) {
        if ('a' <= p[i] && p[i] <= 'z') {  // Lowercase letters
            int offset = 'a';
            char c = (p[i] - offset + k) % 26 + offset;
            x.push_back(c);
        } else if ('A' <= p[i] && p[i] <= 'Z') {  // Uppercase letters
            int offset = 'A';
            char c = (p[i] - offset + k) % 26 + offset;
            x.push_back(c);
        } else {
            x.push_back(p[i]);  // Non-alphabetical characters
        }
    }
    return x;
}

std::string decryption(const std::string& x, int k) {
    std::string y;
    for (size_t i = 0; i < x.length(); ++i) {
        if ('a' <= x[i] && x[i] <= 'z') {  // Lowercase letters
            int offset = 'a';
            char p = (x[i] - offset - k + 26) % 26 + offset;
            y.push_back(p);
        } else if ('A' <= x[i] && x[i] <= 'Z') {  // Uppercase letters
            int offset = 'A';
            char p = (x[i] - offset - k + 26) % 26 + offset;
            y.push_back(p);
        } else {
            y.push_back(x[i]);  // Non-alphabetical characters
        }
    }
    return y;
}

int main() {
    std::string p;
    int k;
    std::cout << "Enter the text to encrypt: ";
    std::getline(std::cin, p);
    std::cout << "Enter the shift key: ";
    std::cin >> k;

    std::string encrypted_text = encryption(p, k);
    std::cout << "Encrypted: " << encrypted_text << std::endl;
    std::cout << "Decrypted: " << decryption(encrypted_text, k) << std::endl;

    return 0;
}


