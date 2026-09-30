#pragma once

class CInfoHeroTestingPoint : public CPointEntity /*0x0*/  // sizeof 0x4C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    int32 m_ePointType; // offset 0x4B0, size 0x4, align 4
    char _pad_04B4[0x4]; // offset 0x4B4
    CUtlSymbolLarge m_sMoveTarget; // offset 0x4B8, size 0x8, align 8
    HeroID_t m_HeroID; // offset 0x4C0, size 0x4, align 255
    char _pad_04C4[0x4]; // offset 0x4C4
};
