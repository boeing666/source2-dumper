#pragma once

class CNPC_Boss_Tier2 : public CAI_CitadelNPC /*0x0*/  // sizeof 0x1950, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x17E0]; // offset 0x0
    Vector m_vecStartingPosition; // offset 0x17E0, size 0xC, align 4 | MNotSaved
    int32 m_iLane; // offset 0x17EC, size 0x4, align 4 | MNetworkEnable
    char _pad_17F0[0x8]; // offset 0x17F0
    CHandle< CBaseEntity > m_hTargetedEnemy; // offset 0x17F8, size 0x4, align 4 | MNetworkEnable MNotSaved
    GameTime_t m_flFadeOutStart; // offset 0x17FC, size 0x4, align 255 | MNetworkEnable MNotSaved
    GameTime_t m_flFadeOutEnd; // offset 0x1800, size 0x4, align 255 | MNetworkEnable MNotSaved
    GameTime_t m_flLastWeakpointHitTime; // offset 0x1804, size 0x4, align 255 | MNetworkEnable MNotSaved
    char _pad_1808[0x4C]; // offset 0x1808
    VectorWS m_vecElectricBeamLookTarget; // offset 0x1854, size 0xC, align 4 | MNetworkEnable MNetworkEncoder
    int32 m_nElectricBeamCasts; // offset 0x1860, size 0x4, align 4 | MNetworkEnable
    char _pad_1864[0xC]; // offset 0x1864
    CEntityIOOutput m_eventOnBossKilled; // offset 0x1870, size 0x18, align 255
    char _pad_1888[0x8]; // offset 0x1888
    CUtlSymbolLarge m_strBossEntityName; // offset 0x1890, size 0x8, align 8
    char _pad_1898[0xB8]; // offset 0x1898
};
