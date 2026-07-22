#pragma once

class C_BaseCSGrenade : public C_CSWeaponBase /*0x0*/  // sizeof 0x2C20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x2B65]; // offset 0x0
    bool m_bClientPredictDelete; // offset 0x2B65, size 0x1, align 1
    bool m_bRedraw; // offset 0x2B66, size 0x1, align 1
    bool m_bIsHeldByPlayer; // offset 0x2B67, size 0x1, align 1
    bool m_bPinPulled; // offset 0x2B68, size 0x1, align 1
    bool m_bJumpThrow; // offset 0x2B69, size 0x1, align 1
    bool m_bThrowAnimating; // offset 0x2B6A, size 0x1, align 1
    char _pad_2B6B[0x1]; // offset 0x2B6B
    GameTime_t m_fThrowTime; // offset 0x2B6C, size 0x4, align 255
    float32 m_flThrowStrength; // offset 0x2B70, size 0x4, align 4
    char _pad_2B74[0x7C]; // offset 0x2B74
    GameTime_t m_fDropTime; // offset 0x2BF0, size 0x4, align 255
    GameTime_t m_fPinPullTime; // offset 0x2BF4, size 0x4, align 255
    bool m_bJustPulledPin; // offset 0x2BF8, size 0x1, align 1
    char _pad_2BF9[0x3]; // offset 0x2BF9
    GameTick_t m_nNextHoldTick; // offset 0x2BFC, size 0x4, align 255
    float32 m_flNextHoldFrac; // offset 0x2C00, size 0x4, align 4
    CHandle< C_CSWeaponBase > m_hSwitchToWeaponAfterThrow; // offset 0x2C04, size 0x4, align 4
    char _pad_2C08[0x18]; // offset 0x2C08
};
