#pragma once

class CCitadel_Ability_Fencer_Riposte : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1AB0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x11D8, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vRiposteStartPosition; // offset 0x11DC, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vDashDirection; // offset 0x11E8, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flStateStartTime; // offset 0x11F4, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    uint8 m_nCurrentRiposteState; // offset 0x11F8, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_11F9[0x3]; // offset 0x11F9
    GameTime_t m_flSuccessfulRiposteTime; // offset 0x11FC, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_1200[0x880]; // offset 0x1200
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitEnemies; // offset 0x1A80, size 0x18, align 8
    Vector m_vecLastPosition; // offset 0x1A98, size 0xC, align 4
    GameTime_t m_flStuckTime; // offset 0x1AA4, size 0x4, align 255
    ParticleIndex_t m_nParriedFXIndex; // offset 0x1AA8, size 0x4, align 255
    char _pad_1AAC[0x4]; // offset 0x1AAC
};
