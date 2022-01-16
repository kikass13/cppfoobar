#include <iostream>

  #define CRC24_INIT 0xB704CEL
  #define CRC24_POLY 0x1864CFBL

  typedef long crc24;
  crc24 crc24_decode(char *string, size_t len)
  {
      crc24 crc = CRC24_INIT;
      int i;
      while (len--) {
          crc ^= (*string++) << 16;
          for (i = 0; i < 8; i++) {
              crc <<= 1;
              if (crc & 0x1000000)
                  crc ^= CRC24_POLY;
          }
      }
      return crc & 0xFFFFFFL;
  }

int main(){
    std::string x("void abcd(int, int)");
    crc24 crc = crc24_decode(x.data(), x.length());
    std::cout << crc << std::endl;
    return 0;
}