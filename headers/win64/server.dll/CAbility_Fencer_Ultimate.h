#pragma once

class CAbility_Fencer_Ultimate : public CCitadelBaseAbility /*0x0*/  // sizeof 0x16E0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    Vector m_vStartPosition; // offset 0xF70, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vDashDirection; // offset 0xF7C, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vecLastPosition; // offset 0xF88, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    EFencerUltState_t m_eUltState; // offset 0xF94, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_0F95[0x3]; // offset 0xF95
    GameTime_t m_flStateStartTime; // offset 0xF98, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    bool m_bHitSomeone; // offset 0xF9C, size 0x1, align 1
    char _pad_0F9D[0x3]; // offset 0xF9D
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies; // offset 0xFA0, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecHitHeroes; // offset 0xFB8, size 0x18, align 8
    GameTime_t m_flStuckTime; // offset 0xFD0, size 0x4, align 255
    ParticleIndex_t m_UltHoldVFX; // offset 0xFD4, size 0x4, align 255
    ParticleIndex_t m_DirPreviewVFX; // offset 0xFD8, size 0x4, align 255
    char _pad_0FDC[0x704]; // offset 0xFDC
};
