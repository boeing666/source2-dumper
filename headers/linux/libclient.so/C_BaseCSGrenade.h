#pragma once

class C_BaseCSGrenade : public C_CSWeaponBase /*0x0*/  // sizeof 0x2EA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x2DE5]; // offset 0x0
    bool m_bClientPredictDelete; // offset 0x2DE5, size 0x1, align 1
    bool m_bRedraw; // offset 0x2DE6, size 0x1, align 1
    bool m_bIsHeldByPlayer; // offset 0x2DE7, size 0x1, align 1
    bool m_bPinPulled; // offset 0x2DE8, size 0x1, align 1
    bool m_bJumpThrow; // offset 0x2DE9, size 0x1, align 1
    bool m_bThrowAnimating; // offset 0x2DEA, size 0x1, align 1
    char _pad_2DEB[0x1]; // offset 0x2DEB
    GameTime_t m_fThrowTime; // offset 0x2DEC, size 0x4, align 255
    float32 m_flThrowStrength; // offset 0x2DF0, size 0x4, align 4
    char _pad_2DF4[0x7C]; // offset 0x2DF4
    GameTime_t m_fDropTime; // offset 0x2E70, size 0x4, align 255
    GameTime_t m_fPinPullTime; // offset 0x2E74, size 0x4, align 255
    bool m_bJustPulledPin; // offset 0x2E78, size 0x1, align 1
    char _pad_2E79[0x3]; // offset 0x2E79
    GameTick_t m_nNextHoldTick; // offset 0x2E7C, size 0x4, align 255
    float32 m_flNextHoldFrac; // offset 0x2E80, size 0x4, align 4
    CHandle< C_CSWeaponBase > m_hSwitchToWeaponAfterThrow; // offset 0x2E84, size 0x4, align 4
    char _pad_2E88[0x18]; // offset 0x2E88
};
