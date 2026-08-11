#pragma once

class CCitadel_Ability_Nano_Pounce_Instant : public CCitadelBaseAbility /*0x0*/  // sizeof 0x14E0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1470]; // offset 0x0
    bool m_bActive; // offset 0x1470, size 0x1, align 1 | MNetworkEnable
    char _pad_1471[0x3]; // offset 0x1471
    CHandle< CBaseEntity > m_hCurrentTarget; // offset 0x1474, size 0x4, align 4 | MNetworkEnable
    CHandle< CBaseEntity > m_hLastCastTarget; // offset 0x1478, size 0x4, align 4 | MNetworkEnable
    Vector m_vStartPosition; // offset 0x147C, size 0xC, align 4 | MNetworkEnable
    Vector m_vDeparturePosition; // offset 0x1488, size 0xC, align 4 | MNetworkEnable
    char _pad_1494[0x4]; // offset 0x1494
    CCitadelAutoScaledTime m_flDepartureTime; // offset 0x1498, size 0x18, align 255 | MNetworkEnable
    CCitadelAutoScaledTime m_flArrivalTime; // offset 0x14B0, size 0x18, align 255 | MNetworkEnable
    Vector m_vLastKnownSafePos; // offset 0x14C8, size 0xC, align 4
    bool m_bStartedPhase01; // offset 0x14D4, size 0x1, align 1
    bool m_bStartedPhase02; // offset 0x14D5, size 0x1, align 1
    bool m_bIsFirstCastCompleted; // offset 0x14D6, size 0x1, align 1 | MNetworkEnable
    char _pad_14D7[0x1]; // offset 0x14D7
    GameTime_t m_tDoubleCastWindow; // offset 0x14D8, size 0x4, align 255 | MNetworkEnable
    ParticleIndex_t m_CastStartParticle; // offset 0x14DC, size 0x4, align 255
};
