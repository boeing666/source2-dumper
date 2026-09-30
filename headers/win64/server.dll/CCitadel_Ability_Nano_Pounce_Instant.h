#pragma once

class CCitadel_Ability_Nano_Pounce_Instant : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1BF0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1B80]; // offset 0x0
    bool m_bActive; // offset 0x1B80, size 0x1, align 1
    char _pad_1B81[0x3]; // offset 0x1B81
    CHandle< CBaseEntity > m_hCurrentTarget; // offset 0x1B84, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastCastTarget; // offset 0x1B88, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1B8C, size 0xC, align 4
    VectorWS m_vDeparturePosition; // offset 0x1B98, size 0xC, align 4
    char _pad_1BA4[0x4]; // offset 0x1BA4
    CCitadelAutoScaledTime m_flDepartureTime; // offset 0x1BA8, size 0x18, align 255
    CCitadelAutoScaledTime m_flArrivalTime; // offset 0x1BC0, size 0x18, align 255
    VectorWS m_vLastKnownSafePos; // offset 0x1BD8, size 0xC, align 4
    bool m_bStartedPhase01; // offset 0x1BE4, size 0x1, align 1
    bool m_bStartedPhase02; // offset 0x1BE5, size 0x1, align 1
    bool m_bIsFirstCastCompleted; // offset 0x1BE6, size 0x1, align 1
    char _pad_1BE7[0x1]; // offset 0x1BE7
    GameTime_t m_tDoubleCastWindow; // offset 0x1BE8, size 0x4, align 255
    ParticleIndex_t m_CastStartParticle; // offset 0x1BEC, size 0x4, align 255
};
