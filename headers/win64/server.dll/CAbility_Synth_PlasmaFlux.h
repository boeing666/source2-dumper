#pragma once

class CAbility_Synth_PlasmaFlux : public CCitadelBaseAbility /*0x0*/  // sizeof 0x12D8, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF98]; // offset 0x0
    bool m_bTeleported; // offset 0xF98, size 0x1, align 1
    char _pad_0F99[0x7]; // offset 0xF99
    CUtlVector< CHandle< CBaseEntity > > m_vecUniqueHitList; // offset 0xFA0, size 0x18, align 8
    Vector m_vLastValidTeleportPosition; // offset 0xFB8, size 0xC, align 4
    GameTime_t m_flProjectileLaunchTime; // offset 0xFC4, size 0x4, align 255
    GameTime_t m_flProjectileExpireTime; // offset 0xFC8, size 0x4, align 255
    CHandle< CBaseEntity > m_hActiveProjectile; // offset 0xFCC, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_0FD0[0x308]; // offset 0xFD0
};
