#pragma once

class CCitadel_Ability_TurretClone : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x16F8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1458]; // offset 0x0
    bool m_bHasTurretReady; // offset 0x1458, size 0x1, align 1 | MNetworkEnable
    char _pad_1459[0x3]; // offset 0x1459
    int32 m_iCurrentSwapCount; // offset 0x145C, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flTurretExpireTime; // offset 0x1460, size 0x4, align 255 | MNetworkEnable
    char _pad_1464[0x4]; // offset 0x1464
    ShotID_t m_nLastBulletShotID; // offset 0x1468, size 0x4, align 255
    CHandle< C_BaseEntity > m_pActiveTurret; // offset 0x146C, size 0x4, align 4 | MNetworkEnable
    ParticleIndex_t m_nTurretFXIndex; // offset 0x1470, size 0x4, align 255
    char _pad_1474[0x284]; // offset 0x1474
};
