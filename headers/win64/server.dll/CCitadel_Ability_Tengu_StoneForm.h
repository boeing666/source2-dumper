#pragma once

class CCitadel_Ability_Tengu_StoneForm : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1320, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x12F0]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0x12F0, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flLandedTime; // offset 0x12F4, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    bool m_bLanded; // offset 0x12F8, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bFalling; // offset 0x12F9, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bInStoneForm; // offset 0x12FA, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_12FB[0x1]; // offset 0x12FB
    float32 m_flStartHeight; // offset 0x12FC, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    ParticleIndex_t m_nStoneFormEffect; // offset 0x1300, size 0x4, align 255
    char _pad_1304[0x4]; // offset 0x1304
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // offset 0x1308, size 0x18, align 8
};
