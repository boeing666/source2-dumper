#pragma once

class CCitadel_Ability_Fencer_Riposte : public CCitadelBaseAbility /*0x0*/  // sizeof 0x2328, align 0x8 [vtable] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x14A0, size 0x4, align 4
    VectorWS m_vRiposteStartPosition; // offset 0x14A4, size 0xC, align 4
    Vector m_vDashDirection; // offset 0x14B0, size 0xC, align 4
    GameTime_t m_flStateStartTime; // offset 0x14BC, size 0x4, align 255
    uint8 m_nCurrentRiposteState; // offset 0x14C0, size 0x1, align 1
    char _pad_14C1[0x3]; // offset 0x14C1
    GameTime_t m_flSuccessfulRiposteTime; // offset 0x14C4, size 0x4, align 255
    char _pad_14C8[0xBB0]; // offset 0x14C8
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies; // offset 0x2078, size 0x18, align 8
    VectorWS m_vecLastPosition; // offset 0x2090, size 0xC, align 4
    GameTime_t m_flStuckTime; // offset 0x209C, size 0x4, align 255
    ParticleIndex_t m_nParriedFXIndex; // offset 0x20A0, size 0x4, align 255
    char _pad_20A4[0x284]; // offset 0x20A4
};
