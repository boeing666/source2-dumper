#pragma once

class CAbility_Synth_PlasmaFlux : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1518, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x1200]; // offset 0x0
    bool m_bTeleported; // offset 0x1200, size 0x1, align 1
    char _pad_1201[0x3]; // offset 0x1201
    GameTime_t m_flProjectileLaunchTime; // offset 0x1204, size 0x4, align 255
    GameTime_t m_flProjectileExpireTime; // offset 0x1208, size 0x4, align 255
    CHandle< C_BaseEntity > m_hActiveProjectile; // offset 0x120C, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_1210[0x308]; // offset 0x1210
};
