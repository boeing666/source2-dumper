#pragma once

class CCitadel_Ability_Fencer_Riposte : public CCitadelBaseAbility /*0x0*/  // sizeof 0x21D8, align 0x8 [vtable] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecDeflectedTargets; // offset 0x14A8, size 0x18, align 8
    VectorWS m_vRiposteStartPosition; // offset 0x14C0, size 0xC, align 4
    Vector m_vDashDirection; // offset 0x14CC, size 0xC, align 4
    CHandle< CBaseEntity > m_hDashTarget; // offset 0x14D8, size 0x4, align 4
    GameTime_t m_flStateStartTime; // offset 0x14DC, size 0x4, align 255
    uint8 m_nCurrentRiposteState; // offset 0x14E0, size 0x1, align 1
    char _pad_14E1[0x3]; // offset 0x14E1
    GameTime_t m_flSuccessfulRiposteTime; // offset 0x14E4, size 0x4, align 255
    char _pad_14E8[0xA50]; // offset 0x14E8
    VectorWS m_vecLastPosition; // offset 0x1F38, size 0xC, align 4
    GameTime_t m_flStuckTime; // offset 0x1F44, size 0x4, align 255
    ParticleIndex_t m_nParriedFXIndex; // offset 0x1F48, size 0x4, align 255
    char _pad_1F4C[0x28C]; // offset 0x1F4C
};
