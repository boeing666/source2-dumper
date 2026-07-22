#pragma once

class CCitadelSoundOpvarSetOBB : public C_BaseEntity /*0x0*/  // sizeof 0x7E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CUtlSymbolLarge m_iszStackName; // offset 0x798, size 0x8, align 8
    CUtlSymbolLarge m_iszOperatorName; // offset 0x7A0, size 0x8, align 8
    CUtlSymbolLarge m_iszOpvarName; // offset 0x7A8, size 0x8, align 8
    Vector m_vDistanceInnerMins; // offset 0x7B0, size 0xC, align 4
    Vector m_vDistanceInnerMaxs; // offset 0x7BC, size 0xC, align 4
    Vector m_vDistanceOuterMins; // offset 0x7C8, size 0xC, align 4
    Vector m_vDistanceOuterMaxs; // offset 0x7D4, size 0xC, align 4
    int32 m_nAABBDirection; // offset 0x7E0, size 0x4, align 4
    char _pad_07E4[0x4]; // offset 0x7E4
};
