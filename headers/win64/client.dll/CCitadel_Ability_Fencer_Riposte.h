#pragma once

class CCitadel_Ability_Fencer_Riposte : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2410, align 0x8 [vtable] (client) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecDeflectedTargets; // offset 0x16E0, size 0x18, align 8
    VectorWS m_vRiposteStartPosition; // offset 0x16F8, size 0xC, align 4
    Vector m_vDashDirection; // offset 0x1704, size 0xC, align 4
    CHandle< C_BaseEntity > m_hDashTarget; // offset 0x1710, size 0x4, align 4
    GameTime_t m_flStateStartTime; // offset 0x1714, size 0x4, align 255
    uint8 m_nCurrentRiposteState; // offset 0x1718, size 0x1, align 1
    char _pad_1719[0x3]; // offset 0x1719
    GameTime_t m_flSuccessfulRiposteTime; // offset 0x171C, size 0x4, align 255
    char _pad_1720[0xA50]; // offset 0x1720
    VectorWS m_vecLastPosition; // offset 0x2170, size 0xC, align 4
    GameTime_t m_flStuckTime; // offset 0x217C, size 0x4, align 255
    ParticleIndex_t m_nParriedFXIndex; // offset 0x2180, size 0x4, align 255
    char _pad_2184[0x28C]; // offset 0x2184
};
