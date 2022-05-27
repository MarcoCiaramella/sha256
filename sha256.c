#include <stdio.h>

typedef unsigned int u32;

u32 h0 = 0x6a09e667u;
u32 h1 = 0xbb67ae85u;
u32 h2 = 0x3c6ef372u;
u32 h3 = 0xa54ff53au;
u32 h4 = 0x510e527fu;
u32 h5 = 0x9b05688cu;
u32 h6 = 0x1f83d9abu;
u32 h7 = 0x5be0cd19u;

u32 k[64] = {
    0x428a2f98u, 0x71374491u, 0xb5c0fbcfu, 0xe9b5dba5u, 0x3956c25bu, 0x59f111f1u, 0x923f82a4u, 0xab1c5ed5u,
    0xd807aa98u, 0x12835b01u, 0x243185beu, 0x550c7dc3u, 0x72be5d74u, 0x80deb1feu, 0x9bdc06a7u, 0xc19bf174u,
    0xe49b69c1u, 0xefbe4786u, 0x0fc19dc6u, 0x240ca1ccu, 0x2de92c6fu, 0x4a7484aau, 0x5cb0a9dcu, 0x76f988dau,
    0x983e5152u, 0xa831c66du, 0xb00327c8u, 0xbf597fc7u, 0xc6e00bf3u, 0xd5a79147u, 0x06ca6351u, 0x14292967u,
    0x27b70a85u, 0x2e1b2138u, 0x4d2c6dfcu, 0x53380d13u, 0x650a7354u, 0x766a0abbu, 0x81c2c92eu, 0x92722c85u,
    0xa2bfe8a1u, 0xa81a664bu, 0xc24b8b70u, 0xc76c51a3u, 0xd192e819u, 0xd6990624u, 0xf40e3585u, 0x106aa070u,
    0x19a4c116u, 0x1e376c08u, 0x2748774cu, 0x34b0bcb5u, 0x391c0cb3u, 0x4ed8aa4au, 0x5b9cca4fu, 0x682e6ff3u,
    0x748f82eeu, 0x78a5636fu, 0x84c87814u, 0x8cc70208u, 0x90befffau, 0xa4506cebu, 0xbef9a3f7u, 0xc67178f2u
};

u32* sha256(u32* message, u32 len){
    u32 len_bit = len * 32;
    u32 k = 512 - (len_bit + 1 + 64) % 512;
    u32 padding = 1 + k + 64;
    printf("padding %u\n", padding);
    printf("resulting message len %u\n", len_bit + padding);
    // add bit 1
    // add k bits 0 such that the resulting message length (in bits) is congruent to 448 (mod 512)
}

void main(){
    u32 message[4] = {0,1,2,3};
    sha256(message, 4);
}
