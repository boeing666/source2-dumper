#pragma once

class CAbility_Synth_PlasmaFlux : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1B38, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1700]; // offset 0x0
    bool m_bTeleported; // offset 0x1700, size 0x1, align 1
    char _pad_1701[0x3]; // offset 0x1701
    GameTime_t m_flProjectileLaunchTime; // offset 0x1704, size 0x4, align 255
    GameTime_t m_flProjectileExpireTime; // offset 0x1708, size 0x4, align 255
    CHandle< C_BaseEntity > m_hActiveProjectile; // offset 0x170C, size 0x4, align 4
    char _pad_1710[0x428]; // offset 0x1710
};
