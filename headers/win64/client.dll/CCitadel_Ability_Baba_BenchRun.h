#pragma once

class CCitadel_Ability_Baba_BenchRun : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1FE0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1E50]; // offset 0x0
    bool m_bHoldingJump; // offset 0x1E50, size 0x1, align 1
    bool m_bHeldJumpAborted; // offset 0x1E51, size 0x1, align 1
    char _pad_1E52[0x2]; // offset 0x1E52
    GameTime_t m_flHoldJumpStartTime; // offset 0x1E54, size 0x4, align 255
    GameTime_t m_flRideStartTime; // offset 0x1E58, size 0x4, align 255
    GameTime_t m_flRideEndTime; // offset 0x1E5C, size 0x4, align 255
    GameTime_t m_flEndLaunchTime; // offset 0x1E60, size 0x4, align 255
    float32 m_flLastChargeJumpFraction; // offset 0x1E64, size 0x4, align 4
    bool m_bInMelee; // offset 0x1E68, size 0x1, align 1
    bool m_bMeleeIsHeavy; // offset 0x1E69, size 0x1, align 1
    char _pad_1E6A[0x176]; // offset 0x1E6A
};
