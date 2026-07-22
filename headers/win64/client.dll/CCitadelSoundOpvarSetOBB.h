#pragma once

class CCitadelSoundOpvarSetOBB : public C_BaseEntity /*0x0*/  // sizeof 0x668, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x618]; // offset 0x0
    CUtlSymbolLarge m_iszStackName; // offset 0x618, size 0x8, align 8
    CUtlSymbolLarge m_iszOperatorName; // offset 0x620, size 0x8, align 8
    CUtlSymbolLarge m_iszOpvarName; // offset 0x628, size 0x8, align 8
    Vector m_vDistanceInnerMins; // offset 0x630, size 0xC, align 4
    Vector m_vDistanceInnerMaxs; // offset 0x63C, size 0xC, align 4
    Vector m_vDistanceOuterMins; // offset 0x648, size 0xC, align 4
    Vector m_vDistanceOuterMaxs; // offset 0x654, size 0xC, align 4
    int32 m_nAABBDirection; // offset 0x660, size 0x4, align 4
    char _pad_0664[0x4]; // offset 0x664
};
