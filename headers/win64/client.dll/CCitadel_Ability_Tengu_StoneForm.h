#pragma once

class CCitadel_Ability_Tengu_StoneForm : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1578, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1560]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0x1560, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flLandedTime; // offset 0x1564, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    bool m_bLanded; // offset 0x1568, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bFalling; // offset 0x1569, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bInStoneForm; // offset 0x156A, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_156B[0x1]; // offset 0x156B
    float32 m_flStartHeight; // offset 0x156C, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    ParticleIndex_t m_nStoneFormEffect; // offset 0x1570, size 0x4, align 255
    char _pad_1574[0x4]; // offset 0x1574
};
