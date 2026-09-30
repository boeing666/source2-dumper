#pragma once

class CCitadel_Ability_Fencer_Riposte : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2560, align 0x8 [vtable] (client) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x16D8, size 0x4, align 4
    VectorWS m_vRiposteStartPosition; // offset 0x16DC, size 0xC, align 4
    Vector m_vDashDirection; // offset 0x16E8, size 0xC, align 4
    GameTime_t m_flStateStartTime; // offset 0x16F4, size 0x4, align 255
    uint8 m_nCurrentRiposteState; // offset 0x16F8, size 0x1, align 1
    char _pad_16F9[0x3]; // offset 0x16F9
    GameTime_t m_flSuccessfulRiposteTime; // offset 0x16FC, size 0x4, align 255
    char _pad_1700[0xBB0]; // offset 0x1700
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitEnemies; // offset 0x22B0, size 0x18, align 8
    VectorWS m_vecLastPosition; // offset 0x22C8, size 0xC, align 4
    GameTime_t m_flStuckTime; // offset 0x22D4, size 0x4, align 255
    ParticleIndex_t m_nParriedFXIndex; // offset 0x22D8, size 0x4, align 255
    char _pad_22DC[0x284]; // offset 0x22DC
};
