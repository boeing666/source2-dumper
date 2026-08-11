#pragma once

class CCitadelSoundOpvarSetOBB : public CBaseEntity /*0x0*/  // sizeof 0x4F0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CUtlSymbolLarge m_iszStackName; // offset 0x4A0, size 0x8, align 8 | MNetworkEnable
    CUtlSymbolLarge m_iszOperatorName; // offset 0x4A8, size 0x8, align 8 | MNetworkEnable
    CUtlSymbolLarge m_iszOpvarName; // offset 0x4B0, size 0x8, align 8 | MNetworkEnable
    Vector m_vDistanceInnerMins; // offset 0x4B8, size 0xC, align 4 | MNetworkEnable
    Vector m_vDistanceInnerMaxs; // offset 0x4C4, size 0xC, align 4 | MNetworkEnable
    Vector m_vDistanceOuterMins; // offset 0x4D0, size 0xC, align 4 | MNetworkEnable
    Vector m_vDistanceOuterMaxs; // offset 0x4DC, size 0xC, align 4 | MNetworkEnable
    int32 m_nAABBDirection; // offset 0x4E8, size 0x4, align 4 | MNetworkEnable
    char _pad_04EC[0x4]; // offset 0x4EC
};
