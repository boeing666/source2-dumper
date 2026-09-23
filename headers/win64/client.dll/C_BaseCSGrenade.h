#pragma once

class C_BaseCSGrenade : public C_CSWeaponBase /*0x0*/  // sizeof 0x1FD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1F10]; // offset 0x0
    bool m_bClientPredictDelete; // offset 0x1F10, size 0x1, align 1
    bool m_bRedraw; // offset 0x1F11, size 0x1, align 1
    bool m_bIsHeldByPlayer; // offset 0x1F12, size 0x1, align 1
    bool m_bPinPulled; // offset 0x1F13, size 0x1, align 1
    bool m_bJumpThrow; // offset 0x1F14, size 0x1, align 1
    bool m_bThrowAnimating; // offset 0x1F15, size 0x1, align 1
    char _pad_1F16[0x2]; // offset 0x1F16
    GameTime_t m_fThrowTime; // offset 0x1F18, size 0x4, align 255
    char _pad_1F1C[0x4]; // offset 0x1F1C
    float32 m_flThrowStrength; // offset 0x1F20, size 0x4, align 4
    char _pad_1F24[0x74]; // offset 0x1F24
    GameTime_t m_fDropTime; // offset 0x1F98, size 0x4, align 255
    GameTime_t m_fPinPullTime; // offset 0x1F9C, size 0x4, align 255
    bool m_bJustPulledPin; // offset 0x1FA0, size 0x1, align 1
    char _pad_1FA1[0x3]; // offset 0x1FA1
    GameTick_t m_nNextHoldTick; // offset 0x1FA4, size 0x4, align 255
    float32 m_flNextHoldFrac; // offset 0x1FA8, size 0x4, align 4
    CHandle< C_CSWeaponBase > m_hSwitchToWeaponAfterThrow; // offset 0x1FAC, size 0x4, align 4
    char _pad_1FB0[0x20]; // offset 0x1FB0
};
