#pragma once

class CAbility_Synth_PlasmaFlux : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1930, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14D0]; // offset 0x0
    bool m_bTeleported; // offset 0x14D0, size 0x1, align 1
    char _pad_14D1[0x7]; // offset 0x14D1
    CUtlVector< CHandle< CBaseEntity > > m_vecUniqueHitList; // offset 0x14D8, size 0x18, align 8
    VectorWS m_vLastValidTeleportPosition; // offset 0x14F0, size 0xC, align 4
    GameTime_t m_flProjectileLaunchTime; // offset 0x14FC, size 0x4, align 255
    GameTime_t m_flProjectileExpireTime; // offset 0x1500, size 0x4, align 255
    CHandle< CBaseEntity > m_hActiveProjectile; // offset 0x1504, size 0x4, align 4
    char _pad_1508[0x428]; // offset 0x1508
};
