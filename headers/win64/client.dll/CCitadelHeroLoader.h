#pragma once

class CCitadelHeroLoader : public C_BaseEntity /*0x0*/  // sizeof 0x600, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    CUtlSymbolLarge m_hero; // offset 0x5F0, size 0x8, align 8
    int32 m_nLoadSeq; // offset 0x5F8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hOwner; // offset 0x5FC, size 0x4, align 4
};
