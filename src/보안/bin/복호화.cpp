

// AES SubBytes 변환 함수
void SubBytes(std::vector<uint8_t>& state) {
    // 여기에 SubBytes 변환 로직을 구현합니다.
    // 실제로는 S-Box 테이블을 사용해야 합니다.
    // 여기서는 예시로 상수 값을 사용합니다.
    for (size_t i = 0; i < state.size(); i++) {
        state[i] = state[i] ^ 0x05; // 예시: 0x05를 XOR 연산합니다.
    }
}

// AES CBC 모드 복호화 함수
std::vector<uint8_t> AESDecryptCBC(const std::vector<uint8_t>& ciphertext, const std::vector<uint8_t>& key, const std::vector<uint8_t>& iv) {
    // 여기에 AES 복호화를 구현합니다.
    // 실제로는 AES 라이브러리를 사용해야 합니다.
    // 여기서는 예시로 SubBytes 함수만 사용합니다.

    std::vector<uint8_t> plaintext;
    std::vector<uint8_t> previousCipherBlock = iv;

    for (size_t i = 0; i < ciphertext.size(); i += 16) {
        std::vector<uint8_t> block(ciphertext.begin() + i, ciphertext.begin() + i + 16);

        // 여기에서 AES 라이브러리를 사용하여 역 SubBytes, 라운드키, 역 MixColumns를 적용해야 합니다.
        // 여기서는 예시로 SubBytes만 사용합니다.

        for (size_t j = 0; j < 16; j++) {
            block[j] = block[j] ^ previousCipherBlock[j];
        }
        plaintext.insert(plaintext.end(), block.begin(), block.end());
        previousCipherBlock = ciphertext.begin() + i;
    }

    return plaintext;
}

int main() {
    std::vector<uint8_t> key = {0x2b, 0x7e, 0x15, 0x16, 0x28, 0xae, 0xd2, 0xa6, 0xab, 0xf7, 0x97, 0xe2, 0xf4, 0x3c, 0x8e, 0x27};
    std::vector<uint8_t> iv = {0x32, 0x88, 0x31, 0xe0, 0x43, 0x5a, 0x31, 0x37, 0xf6, 0x30, 0x98, 0x07, 0xa8, 0x8d, 0xa2, 0x34};
    std::string ciphertextHex = "4a16b4f6b46da7a6915e03d5a8d2c2dd";

    // 16진수 문자열을 바이트 벡터로 변환
    std::vector<uint8_t> ciphertext;
    for (size_t i = 0; i < ciphertextHex.size(); i += 2) {
        uint8_t byte = std::stoul(ciphertextHex.substr(i, 2), nullptr, 16);
        ciphertext.push_back(byte);
    }

    std::vector<uint8_t> plaintext = AESDecryptCBC(ciphertext, key, iv);

    std::cout << "Plaintext: ";
    for (uint8_t byte : plaintext) {
        std::cout << byte;
    }
    std::cout << std::endl;

    return 0;
}
