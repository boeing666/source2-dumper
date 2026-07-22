#pragma once

struct FeKelagerBend2_t  // sizeof 0x18, align 0x4 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    float32[3] flWeight; // offset 0x0, size 0xC, align 4
    float32 flHeight0; // offset 0xC, size 0x4, align 4
    uint16[3] nNode; // offset 0x10, size 0x6, align 2
    uint16 nReserved; // offset 0x16, size 0x2, align 2
};
