#pragma once

class CCitadelSoundOpvarSetOBB : public CBaseEntity /*0x0*/  // sizeof 0x4F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CUtlSymbolLarge m_iszStackName; // offset 0x4A8, size 0x8, align 8
    CUtlSymbolLarge m_iszOperatorName; // offset 0x4B0, size 0x8, align 8
    CUtlSymbolLarge m_iszOpvarName; // offset 0x4B8, size 0x8, align 8
    Vector m_vDistanceInnerMins; // offset 0x4C0, size 0xC, align 4
    Vector m_vDistanceInnerMaxs; // offset 0x4CC, size 0xC, align 4
    Vector m_vDistanceOuterMins; // offset 0x4D8, size 0xC, align 4
    Vector m_vDistanceOuterMaxs; // offset 0x4E4, size 0xC, align 4
    int32 m_nAABBDirection; // offset 0x4F0, size 0x4, align 4
    char _pad_04F4[0x4]; // offset 0x4F4
};
