#pragma once

class C_BaseCSGrenade : public C_CSWeaponBase /*0x0*/  // sizeof 0x2E60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x2DA5]; // offset 0x0
    bool m_bClientPredictDelete; // offset 0x2DA5, size 0x1, align 1
    bool m_bRedraw; // offset 0x2DA6, size 0x1, align 1
    bool m_bIsHeldByPlayer; // offset 0x2DA7, size 0x1, align 1
    bool m_bPinPulled; // offset 0x2DA8, size 0x1, align 1
    bool m_bJumpThrow; // offset 0x2DA9, size 0x1, align 1
    bool m_bThrowAnimating; // offset 0x2DAA, size 0x1, align 1
    char _pad_2DAB[0x1]; // offset 0x2DAB
    GameTime_t m_fThrowTime; // offset 0x2DAC, size 0x4, align 255
    float32 m_flThrowStrength; // offset 0x2DB0, size 0x4, align 4
    char _pad_2DB4[0x7C]; // offset 0x2DB4
    GameTime_t m_fDropTime; // offset 0x2E30, size 0x4, align 255
    GameTime_t m_fPinPullTime; // offset 0x2E34, size 0x4, align 255
    bool m_bJustPulledPin; // offset 0x2E38, size 0x1, align 1
    char _pad_2E39[0x3]; // offset 0x2E39
    GameTick_t m_nNextHoldTick; // offset 0x2E3C, size 0x4, align 255
    float32 m_flNextHoldFrac; // offset 0x2E40, size 0x4, align 4
    CHandle< C_CSWeaponBase > m_hSwitchToWeaponAfterThrow; // offset 0x2E44, size 0x4, align 4
    char _pad_2E48[0x18]; // offset 0x2E48
};
