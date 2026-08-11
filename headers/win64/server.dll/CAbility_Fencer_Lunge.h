#pragma once

class CAbility_Fencer_Lunge : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1D08, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF74]; // offset 0x0
    uint8 m_nCurrentLungeState; // offset 0xF74, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_0F75[0x3]; // offset 0xF75
    GameTime_t m_flStateStartTime; // offset 0xF78, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    Vector m_vDashStartPos; // offset 0xF7C, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vDashDirection; // offset 0xF88, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vLookDirection; // offset 0xF94, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vStrikeDirection; // offset 0xFA0, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bStartedInAir; // offset 0xFAC, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    uint8 m_iRemainingCasts; // offset 0xFAD, size 0x1, align 1 | MNetworkEnable
    char _pad_0FAE[0x2]; // offset 0xFAE
    GameTime_t m_RecastEndTime; // offset 0xFB0, size 0x4, align 255 | MNetworkEnable
    uint8 m_eLungeDirection; // offset 0xFB4, size 0x1, align 1 | MNetworkEnable
    char _pad_0FB5[0x3]; // offset 0xFB5
    float32 m_flHeldTime; // offset 0xFB8, size 0x4, align 4
    char _pad_0FBC[0x4]; // offset 0xFBC
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies; // offset 0xFC0, size 0x18, align 8
    Vector m_vLastPosition; // offset 0xFD8, size 0xC, align 4
    GameTime_t m_flStuckTime; // offset 0xFE4, size 0x4, align 255
    char _pad_0FE8[0x4]; // offset 0xFE8
    ParticleIndex_t m_nGlintParticleIndex; // offset 0xFEC, size 0x4, align 255
    char _pad_0FF0[0x284]; // offset 0xFF0
    float32 m_flLastOuterCircleProgress; // offset 0x1274, size 0x4, align 4
    char _pad_1278[0x8]; // offset 0x1278
    int32 m_nPowerLevel; // offset 0x1280, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_1284[0xA84]; // offset 0x1284
};
