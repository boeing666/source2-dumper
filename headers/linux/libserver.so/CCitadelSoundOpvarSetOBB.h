#pragma once

class CCitadelSoundOpvarSetOBB : public CBaseEntity /*0x0*/  // sizeof 0x7C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CUtlSymbolLarge m_iszStackName; // offset 0x778, size 0x8, align 8
    CUtlSymbolLarge m_iszOperatorName; // offset 0x780, size 0x8, align 8
    CUtlSymbolLarge m_iszOpvarName; // offset 0x788, size 0x8, align 8
    Vector m_vDistanceInnerMins; // offset 0x790, size 0xC, align 4
    Vector m_vDistanceInnerMaxs; // offset 0x79C, size 0xC, align 4
    Vector m_vDistanceOuterMins; // offset 0x7A8, size 0xC, align 4
    Vector m_vDistanceOuterMaxs; // offset 0x7B4, size 0xC, align 4
    int32 m_nAABBDirection; // offset 0x7C0, size 0x4, align 4
    char _pad_07C4[0x4]; // offset 0x7C4
};
