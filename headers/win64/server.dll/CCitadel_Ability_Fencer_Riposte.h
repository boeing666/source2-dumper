#pragma once

class CCitadel_Ability_Fencer_Riposte : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1848, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0xF70, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vRiposteStartPosition; // offset 0xF74, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vDashDirection; // offset 0xF80, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flStateStartTime; // offset 0xF8C, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    uint8 m_nCurrentRiposteState; // offset 0xF90, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_0F91[0x3]; // offset 0xF91
    GameTime_t m_flSuccessfulRiposteTime; // offset 0xF94, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_0F98[0x880]; // offset 0xF98
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies; // offset 0x1818, size 0x18, align 8
    Vector m_vecLastPosition; // offset 0x1830, size 0xC, align 4
    GameTime_t m_flStuckTime; // offset 0x183C, size 0x4, align 255
    ParticleIndex_t m_nParriedFXIndex; // offset 0x1840, size 0x4, align 255
    char _pad_1844[0x4]; // offset 0x1844
};
