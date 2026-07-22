#pragma once

class CAbility_Fencer_Lunge : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1F70, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11DC]; // offset 0x0
    uint8 m_nCurrentLungeState; // offset 0x11DC, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_11DD[0x3]; // offset 0x11DD
    GameTime_t m_flStateStartTime; // offset 0x11E0, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    Vector m_vDashStartPos; // offset 0x11E4, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vDashDirection; // offset 0x11F0, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vLookDirection; // offset 0x11FC, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vStrikeDirection; // offset 0x1208, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bStartedInAir; // offset 0x1214, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    uint8 m_iRemainingCasts; // offset 0x1215, size 0x1, align 1 | MNetworkEnable
    char _pad_1216[0x2]; // offset 0x1216
    GameTime_t m_RecastEndTime; // offset 0x1218, size 0x4, align 255 | MNetworkEnable
    uint8 m_eLungeDirection; // offset 0x121C, size 0x1, align 1 | MNetworkEnable
    char _pad_121D[0x3]; // offset 0x121D
    float32 m_flHeldTime; // offset 0x1220, size 0x4, align 4
    char _pad_1224[0x4]; // offset 0x1224
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitEnemies; // offset 0x1228, size 0x18, align 8
    Vector m_vLastPosition; // offset 0x1240, size 0xC, align 4
    GameTime_t m_flStuckTime; // offset 0x124C, size 0x4, align 255
    char _pad_1250[0x4]; // offset 0x1250
    ParticleIndex_t m_nGlintParticleIndex; // offset 0x1254, size 0x4, align 255
    char _pad_1258[0x284]; // offset 0x1258
    float32 m_flLastOuterCircleProgress; // offset 0x14DC, size 0x4, align 4
    char _pad_14E0[0x8]; // offset 0x14E0
    int32 m_nPowerLevel; // offset 0x14E8, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_14EC[0xA84]; // offset 0x14EC
};
