#pragma once

class CNPC_ShieldedSentry : public CNPC_SimpleAnimatingAI /*0x0*/  // sizeof 0xCA0, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0xC10, size 0x20, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    float32 m_flAttackRange; // offset 0xC30, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_flAimPitch; // offset 0xC34, size 0x4, align 4 | MNetworkEnable MNotSaved
    bool m_bHasRecentlyAttacked; // offset 0xC38, size 0x1, align 1 | MNetworkEnable MNotSaved
    char _pad_0C39[0x3]; // offset 0xC39
    float32 m_flLifeTime; // offset 0xC3C, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flSpawnTime; // offset 0xC40, size 0x4, align 255 | MNetworkEnable
    float32 m_flAttackCone; // offset 0xC44, size 0x4, align 4
    float32 m_flTrackingSpeed; // offset 0xC48, size 0x4, align 4
    float32 m_flDeployTime; // offset 0xC4C, size 0x4, align 4
    float32 m_flAttackDelay; // offset 0xC50, size 0x4, align 4
    char _pad_0C54[0x4C]; // offset 0xC54
};
