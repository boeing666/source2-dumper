#pragma once

class CCitadel_Ability_Nano_Pounce_Instant : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1E30, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1DC0]; // offset 0x0
    bool m_bActive; // offset 0x1DC0, size 0x1, align 1
    char _pad_1DC1[0x3]; // offset 0x1DC1
    CHandle< C_BaseEntity > m_hCurrentTarget; // offset 0x1DC4, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLastCastTarget; // offset 0x1DC8, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1DCC, size 0xC, align 4
    VectorWS m_vDeparturePosition; // offset 0x1DD8, size 0xC, align 4
    char _pad_1DE4[0x4]; // offset 0x1DE4
    CCitadelAutoScaledTime m_flDepartureTime; // offset 0x1DE8, size 0x18, align 255
    CCitadelAutoScaledTime m_flArrivalTime; // offset 0x1E00, size 0x18, align 255
    VectorWS m_vLastKnownSafePos; // offset 0x1E18, size 0xC, align 4
    bool m_bStartedPhase01; // offset 0x1E24, size 0x1, align 1
    bool m_bStartedPhase02; // offset 0x1E25, size 0x1, align 1
    bool m_bIsFirstCastCompleted; // offset 0x1E26, size 0x1, align 1
    char _pad_1E27[0x1]; // offset 0x1E27
    GameTime_t m_tDoubleCastWindow; // offset 0x1E28, size 0x4, align 255
    char _pad_1E2C[0x4]; // offset 0x1E2C
};
