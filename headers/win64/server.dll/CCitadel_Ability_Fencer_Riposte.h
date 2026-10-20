#pragma once

class CCitadel_Ability_Fencer_Riposte : public CCitadelBaseAbility /*0x0*/  // sizeof 0x2330, align 0x8 [vtable] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x14A8, size 0x4, align 4
    VectorWS m_vRiposteStartPosition; // offset 0x14AC, size 0xC, align 4
    Vector m_vDashDirection; // offset 0x14B8, size 0xC, align 4
    GameTime_t m_flStateStartTime; // offset 0x14C4, size 0x4, align 255
    uint8 m_nCurrentRiposteState; // offset 0x14C8, size 0x1, align 1
    char _pad_14C9[0x3]; // offset 0x14C9
    GameTime_t m_flSuccessfulRiposteTime; // offset 0x14CC, size 0x4, align 255
    char _pad_14D0[0xBB0]; // offset 0x14D0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies; // offset 0x2080, size 0x18, align 8
    VectorWS m_vecLastPosition; // offset 0x2098, size 0xC, align 4
    GameTime_t m_flStuckTime; // offset 0x20A4, size 0x4, align 255
    ParticleIndex_t m_nParriedFXIndex; // offset 0x20A8, size 0x4, align 255
    char _pad_20AC[0x284]; // offset 0x20AC
};
