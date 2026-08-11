#pragma once

class CCitadelSoundOpvarSetOBB : public CBaseEntity /*0x0*/  // sizeof 0x4E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    CUtlSymbolLarge m_iszStackName; // offset 0x498, size 0x8, align 8
    CUtlSymbolLarge m_iszOperatorName; // offset 0x4A0, size 0x8, align 8
    CUtlSymbolLarge m_iszOpvarName; // offset 0x4A8, size 0x8, align 8
    Vector m_vDistanceInnerMins; // offset 0x4B0, size 0xC, align 4
    Vector m_vDistanceInnerMaxs; // offset 0x4BC, size 0xC, align 4
    Vector m_vDistanceOuterMins; // offset 0x4C8, size 0xC, align 4
    Vector m_vDistanceOuterMaxs; // offset 0x4D4, size 0xC, align 4
    int32 m_nAABBDirection; // offset 0x4E0, size 0x4, align 4
    char _pad_04E4[0x4]; // offset 0x4E4
};
