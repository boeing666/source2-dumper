#pragma once

class CCitadel_Ability_Nano_Pounce : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1E28, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1DB8]; // offset 0x0
    bool m_bActive; // offset 0x1DB8, size 0x1, align 1
    char _pad_1DB9[0x3]; // offset 0x1DB9
    CHandle< C_BaseEntity > m_hCurrentTarget; // offset 0x1DBC, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLastCastTarget; // offset 0x1DC0, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1DC4, size 0xC, align 4
    VectorWS m_vDeparturePosition; // offset 0x1DD0, size 0xC, align 4
    char _pad_1DDC[0x4]; // offset 0x1DDC
    CCitadelAutoScaledTime m_flDepartureTime; // offset 0x1DE0, size 0x18, align 255
    CCitadelAutoScaledTime m_flArrivalTime; // offset 0x1DF8, size 0x18, align 255
    VectorWS m_vLastKnownSafePos; // offset 0x1E10, size 0xC, align 4
    bool m_bStartedPhase01; // offset 0x1E1C, size 0x1, align 1
    bool m_bStartedPhase02; // offset 0x1E1D, size 0x1, align 1
    bool m_bIsFirstCastCompleted; // offset 0x1E1E, size 0x1, align 1
    char _pad_1E1F[0x1]; // offset 0x1E1F
    GameTime_t m_tDoubleCastWindow; // offset 0x1E20, size 0x4, align 255
    char _pad_1E24[0x4]; // offset 0x1E24
};
