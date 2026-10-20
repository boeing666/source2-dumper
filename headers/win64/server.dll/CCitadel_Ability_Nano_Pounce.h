#pragma once

class CCitadel_Ability_Nano_Pounce : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1BF8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1B88]; // offset 0x0
    bool m_bActive; // offset 0x1B88, size 0x1, align 1
    char _pad_1B89[0x3]; // offset 0x1B89
    CHandle< CBaseEntity > m_hCurrentTarget; // offset 0x1B8C, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastCastTarget; // offset 0x1B90, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1B94, size 0xC, align 4
    VectorWS m_vDeparturePosition; // offset 0x1BA0, size 0xC, align 4
    char _pad_1BAC[0x4]; // offset 0x1BAC
    CCitadelAutoScaledTime m_flDepartureTime; // offset 0x1BB0, size 0x18, align 255
    CCitadelAutoScaledTime m_flArrivalTime; // offset 0x1BC8, size 0x18, align 255
    VectorWS m_vLastKnownSafePos; // offset 0x1BE0, size 0xC, align 4
    bool m_bStartedPhase01; // offset 0x1BEC, size 0x1, align 1
    bool m_bStartedPhase02; // offset 0x1BED, size 0x1, align 1
    bool m_bIsFirstCastCompleted; // offset 0x1BEE, size 0x1, align 1
    char _pad_1BEF[0x1]; // offset 0x1BEF
    GameTime_t m_tDoubleCastWindow; // offset 0x1BF0, size 0x4, align 255
    ParticleIndex_t m_CastStartParticle; // offset 0x1BF4, size 0x4, align 255
};
