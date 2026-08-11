#pragma once

class CCitadel_Ability_TurretClone : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1490, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11F0]; // offset 0x0
    bool m_bHasTurretReady; // offset 0x11F0, size 0x1, align 1 | MNetworkEnable
    char _pad_11F1[0x3]; // offset 0x11F1
    int32 m_iCurrentSwapCount; // offset 0x11F4, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flTurretExpireTime; // offset 0x11F8, size 0x4, align 255 | MNetworkEnable
    char _pad_11FC[0x4]; // offset 0x11FC
    ShotID_t m_nLastBulletShotID; // offset 0x1200, size 0x4, align 255
    CHandle< CBaseEntity > m_pActiveTurret; // offset 0x1204, size 0x4, align 4 | MNetworkEnable
    ParticleIndex_t m_nTurretFXIndex; // offset 0x1208, size 0x4, align 255
    char _pad_120C[0x284]; // offset 0x120C
};
