#pragma once

class CCitadelSoundOpvarSetOBB : public C_BaseEntity /*0x0*/  // sizeof 0x658, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x608]; // offset 0x0
    CUtlSymbolLarge m_iszStackName; // offset 0x608, size 0x8, align 8 | MNetworkEnable
    CUtlSymbolLarge m_iszOperatorName; // offset 0x610, size 0x8, align 8 | MNetworkEnable
    CUtlSymbolLarge m_iszOpvarName; // offset 0x618, size 0x8, align 8 | MNetworkEnable
    Vector m_vDistanceInnerMins; // offset 0x620, size 0xC, align 4 | MNetworkEnable
    Vector m_vDistanceInnerMaxs; // offset 0x62C, size 0xC, align 4 | MNetworkEnable
    Vector m_vDistanceOuterMins; // offset 0x638, size 0xC, align 4 | MNetworkEnable
    Vector m_vDistanceOuterMaxs; // offset 0x644, size 0xC, align 4 | MNetworkEnable
    int32 m_nAABBDirection; // offset 0x650, size 0x4, align 4 | MNetworkEnable
    char _pad_0654[0x4]; // offset 0x654
};
