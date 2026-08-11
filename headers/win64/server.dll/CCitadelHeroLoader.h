#pragma once

class CCitadelHeroLoader : public CBaseEntity /*0x0*/  // sizeof 0x4B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CUtlSymbolLarge m_hero; // offset 0x4A0, size 0x8, align 8
    int32 m_nLoadSeq; // offset 0x4A8, size 0x4, align 4
    CHandle< CBaseEntity > m_hOwner; // offset 0x4AC, size 0x4, align 4
};
