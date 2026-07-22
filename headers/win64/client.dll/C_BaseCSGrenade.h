#pragma once

class C_BaseCSGrenade : public C_CSWeaponBase /*0x0*/  // sizeof 0x1DA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1CE0]; // offset 0x0
    bool m_bClientPredictDelete; // offset 0x1CE0, size 0x1, align 1
    bool m_bRedraw; // offset 0x1CE1, size 0x1, align 1
    bool m_bIsHeldByPlayer; // offset 0x1CE2, size 0x1, align 1
    bool m_bPinPulled; // offset 0x1CE3, size 0x1, align 1
    bool m_bJumpThrow; // offset 0x1CE4, size 0x1, align 1
    bool m_bThrowAnimating; // offset 0x1CE5, size 0x1, align 1
    char _pad_1CE6[0x2]; // offset 0x1CE6
    GameTime_t m_fThrowTime; // offset 0x1CE8, size 0x4, align 255
    char _pad_1CEC[0x4]; // offset 0x1CEC
    float32 m_flThrowStrength; // offset 0x1CF0, size 0x4, align 4
    char _pad_1CF4[0x74]; // offset 0x1CF4
    GameTime_t m_fDropTime; // offset 0x1D68, size 0x4, align 255
    GameTime_t m_fPinPullTime; // offset 0x1D6C, size 0x4, align 255
    bool m_bJustPulledPin; // offset 0x1D70, size 0x1, align 1
    char _pad_1D71[0x3]; // offset 0x1D71
    GameTick_t m_nNextHoldTick; // offset 0x1D74, size 0x4, align 255
    float32 m_flNextHoldFrac; // offset 0x1D78, size 0x4, align 4
    CHandle< C_CSWeaponBase > m_hSwitchToWeaponAfterThrow; // offset 0x1D7C, size 0x4, align 4
    char _pad_1D80[0x20]; // offset 0x1D80
};
