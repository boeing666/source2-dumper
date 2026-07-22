#pragma once

class CAbility_Fencer_Ultimate : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1948, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    Vector m_vStartPosition; // offset 0x11D8, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vDashDirection; // offset 0x11E4, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vecLastPosition; // offset 0x11F0, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    EFencerUltState_t m_eUltState; // offset 0x11FC, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_11FD[0x3]; // offset 0x11FD
    GameTime_t m_flStateStartTime; // offset 0x1200, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    bool m_bHitSomeone; // offset 0x1204, size 0x1, align 1
    char _pad_1205[0x3]; // offset 0x1205
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitEnemies; // offset 0x1208, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitHeroes; // offset 0x1220, size 0x18, align 8
    GameTime_t m_flStuckTime; // offset 0x1238, size 0x4, align 255
    ParticleIndex_t m_UltHoldVFX; // offset 0x123C, size 0x4, align 255
    ParticleIndex_t m_DirPreviewVFX; // offset 0x1240, size 0x4, align 255
    char _pad_1244[0x704]; // offset 0x1244
};
