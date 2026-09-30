#pragma once

class CCitadelSoundOpvarSetOBB : public C_BaseEntity /*0x0*/  // sizeof 0x660, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x610]; // offset 0x0
    CUtlSymbolLarge m_iszStackName; // offset 0x610, size 0x8, align 8
    CUtlSymbolLarge m_iszOperatorName; // offset 0x618, size 0x8, align 8
    CUtlSymbolLarge m_iszOpvarName; // offset 0x620, size 0x8, align 8
    Vector m_vDistanceInnerMins; // offset 0x628, size 0xC, align 4
    Vector m_vDistanceInnerMaxs; // offset 0x634, size 0xC, align 4
    Vector m_vDistanceOuterMins; // offset 0x640, size 0xC, align 4
    Vector m_vDistanceOuterMaxs; // offset 0x64C, size 0xC, align 4
    int32 m_nAABBDirection; // offset 0x658, size 0x4, align 4
    char _pad_065C[0x4]; // offset 0x65C
};
