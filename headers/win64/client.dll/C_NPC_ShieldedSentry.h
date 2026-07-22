#pragma once

class C_NPC_ShieldedSentry : public C_NPC_SimpleAnimatingAI /*0x0*/  // sizeof 0xEB8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xCB8]; // offset 0x0
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0xCB8, size 0x1E8, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    char _pad_0EA0[0x4]; // offset 0xEA0
    float32 m_flAttackRange; // offset 0xEA4, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_flAimPitch; // offset 0xEA8, size 0x4, align 4 | MNetworkEnable MNotSaved
    bool m_bHasRecentlyAttacked; // offset 0xEAC, size 0x1, align 1 | MNetworkEnable MNotSaved
    char _pad_0EAD[0x3]; // offset 0xEAD
    float32 m_flLifeTime; // offset 0xEB0, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flSpawnTime; // offset 0xEB4, size 0x4, align 255 | MNetworkEnable
};
