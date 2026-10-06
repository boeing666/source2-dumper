#pragma once

class CCitadel_Ability_Baba_BenchRun : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1DA0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1C10]; // offset 0x0
    bool m_bHoldingJump; // offset 0x1C10, size 0x1, align 1
    bool m_bHeldJumpAborted; // offset 0x1C11, size 0x1, align 1
    char _pad_1C12[0x2]; // offset 0x1C12
    GameTime_t m_flHoldJumpStartTime; // offset 0x1C14, size 0x4, align 255
    GameTime_t m_flRideStartTime; // offset 0x1C18, size 0x4, align 255
    GameTime_t m_flRideEndTime; // offset 0x1C1C, size 0x4, align 255
    GameTime_t m_flEndLaunchTime; // offset 0x1C20, size 0x4, align 255
    float32 m_flLastChargeJumpFraction; // offset 0x1C24, size 0x4, align 4
    bool m_bInMelee; // offset 0x1C28, size 0x1, align 1
    bool m_bMeleeIsHeavy; // offset 0x1C29, size 0x1, align 1
    char _pad_1C2A[0x176]; // offset 0x1C2A
};
