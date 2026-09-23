#pragma once

class C_BaseCSGrenade : public C_CSWeaponBase /*0x0*/  // sizeof 0x2E50, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x2D95]; // offset 0x0
    bool m_bClientPredictDelete; // offset 0x2D95, size 0x1, align 1
    bool m_bRedraw; // offset 0x2D96, size 0x1, align 1
    bool m_bIsHeldByPlayer; // offset 0x2D97, size 0x1, align 1
    bool m_bPinPulled; // offset 0x2D98, size 0x1, align 1
    bool m_bJumpThrow; // offset 0x2D99, size 0x1, align 1
    bool m_bThrowAnimating; // offset 0x2D9A, size 0x1, align 1
    char _pad_2D9B[0x1]; // offset 0x2D9B
    GameTime_t m_fThrowTime; // offset 0x2D9C, size 0x4, align 255
    float32 m_flThrowStrength; // offset 0x2DA0, size 0x4, align 4
    char _pad_2DA4[0x7C]; // offset 0x2DA4
    GameTime_t m_fDropTime; // offset 0x2E20, size 0x4, align 255
    GameTime_t m_fPinPullTime; // offset 0x2E24, size 0x4, align 255
    bool m_bJustPulledPin; // offset 0x2E28, size 0x1, align 1
    char _pad_2E29[0x3]; // offset 0x2E29
    GameTick_t m_nNextHoldTick; // offset 0x2E2C, size 0x4, align 255
    float32 m_flNextHoldFrac; // offset 0x2E30, size 0x4, align 4
    CHandle< C_CSWeaponBase > m_hSwitchToWeaponAfterThrow; // offset 0x2E34, size 0x4, align 4
    char _pad_2E38[0x18]; // offset 0x2E38
};
