#pragma once

class IAI_Motor  // sizeof 0x10, align 0xFF [vtable abstract] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CHandle< CAI_BaseNPC > m_hOwner; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
};
