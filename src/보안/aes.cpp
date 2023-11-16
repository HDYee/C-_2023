#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <cstdint>

// AES 라운드 상수 정의
const uint8_t Rcon[10] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x1B, 0x36};

// S-Box (SubBytes 변환에 사용)
const uint8_t Sbox[256] = {
    // ... S-Box 값들 (생략) ...
};

// 역 S-Box (Inverse SubBytes 변환에 사용)
const uint8_t iSbox[256] = {
    // ... 역 S-Box 값들 (생략) ...
};

// AES 암호화 함수
void AESEncrypt(const uint8_t* input, const uint8_t* key, uint8_t* output) {
    // AES 암호화 구현 (라운드 키 스케줄링, SubBytes, ShiftRows, MixColumns)
    // 실제로는 AES 라이브러리 사용을 추천
}

// AES 복호화 함수
void AESDecrypt(const uint8_t* input, const uint8_t* key, uint8_t* output) {
    // AES 복호화 구현 (라운드 키 스케줄링, 역 MixColumns, 역 ShiftRows, 역 SubBytes)
    // 실제로는 AES 라이브러리 사용을 추천
}

// AES CBC 모드 암호화
std::vector<uint8_t> AESEncryptCBC(const std::vector<uint8_t>& plaintext, const std::vector<uint8_t>& key, const std::vector<uint8_t>& iv) {
    // CBC 모드 암호화 구현
    // 실제로는 암호화 모드를 사용하는 것이 안전하며 효율적
    std::vector<uint8_t> ciphertext;
    std::vector<uint8_t> previousCipherBlock = iv;

    for (size_t i = 0; i < plaintext.size(); i += 16) {
        std::vector<uint8_t> block(plaintext.begin() + i, plaintext.begin() + i + 16);

        // 평문 블록과 이전 암호문 블록 XOR 연산
        for (size_t j = 0; j < 16; j++) {
            block[j] ^= previousCipherBlock[j];
        }

        // AES 암호화
        AESEncrypt(block.data(), key.data(), block.data());

        // 암호문 블록을 결과에 추가
        ciphertext.insert(ciphertext.end(), block.begin(), block.end());

        // 이전 암호문 블록 업데이트
        previousCipherBlock = block;
    }

    return ciphertext;
}

// AES CBC 모드 복호화
std::vector<uint8_t> AESDecryptCBC(const std::vector<uint8_t>& ciphertext, const std::vector<uint8_t>& key, const std::vector<uint8_t>& iv) {
    // CBC 모드 복호화 구현
    // 실제로는 암호화 모드를 사용하는 것이 안전하며 효율적
    std::vector<uint8_t> plaintext;
    std::vector<uint8_t> previousCipherBlock = iv;

    for (size_t i = 0; i < ciphertext.size(); i += 16) {
        std::vector<uint8_t> block(ciphertext.begin() + i, ciphertext.begin() + i + 16);

        // 암호문 블록 저장
        std::vector<uint8_t> temp = block;

        // AES 복호화
        AESDecrypt(block.data(), key.data(), block.data());

        // 평문 블록과 이전 암호문 블록 XOR 연산
        for (size_t j = 0; j < 16; j++) {
            block[j] ^= previousCipherBlock[j];
        }

        // 평문 블록을 결과에 추가
        plaintext.insert(plaintext.end(), block.begin(), block.end());

        // 이전 암호문 블록 업데이트
        previousCipherBlock = temp;
    }

    return plaintext;
}

int main() {
    std::vector<uint8_t> key = {0x2b, 0x7e, 0x15, 0x16, 0x28, 0xae, 0xd2, 0xa6, 0xab, 0xf7, 0x97, 0xe2, 0xf4, 0x3c, 0x8e, 0x27};
    std::vector<uint8_t> iv = {0x32, 0x88, 0x31, 0xe0, 0x43, 0x5a, 0x31, 0x37, 0xf6, 0x30, 0x98, 0x07, 0xa8, 0x8d, 0xa2, 0x34};
    std::string plaintext = "This is a simple AES CBC example.";

    // 평문을 바이트 벡터로 변환
    std::vector<uint8_t> plaintextBytes(plaintext.begin(), plaintext.end());

    // 암호화
    std::vector<uint8_t> ciphertext = AESEncryptCBC(plaintextBytes, key, iv);

    // 복호화
    std::vector<uint8_t> decryptedTextBytes = AESDecryptCBC(ciphertext, key, iv);

    // 복호화된 평문을 문자열로 변환
    std::string decryptedText(decryptedTextBytes.begin(), decryptedTextBytes.end());

    std::cout << "Plaintext: " << plaintext << std::endl;
    std::cout << "Ciphertext: ";
    for (uint8_t byte : ciphertext) {
        printf("%02x", byte);
    }
    std::cout << std::endl;
    std::cout << "Decrypted
