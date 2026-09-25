#pragma once

class C_BaseCSGrenade : public C_CSWeaponBase /*0x0*/  // sizeof 0x1FE0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1F20]; // offset 0x0
    bool m_bClientPredictDelete; // offset 0x1F20, size 0x1, align 1
    bool m_bRedraw; // offset 0x1F21, size 0x1, align 1
    bool m_bIsHeldByPlayer; // offset 0x1F22, size 0x1, align 1
    bool m_bPinPulled; // offset 0x1F23, size 0x1, align 1
    bool m_bJumpThrow; // offset 0x1F24, size 0x1, align 1
    bool m_bThrowAnimating; // offset 0x1F25, size 0x1, align 1
    char _pad_1F26[0x2]; // offset 0x1F26
    GameTime_t m_fThrowTime; // offset 0x1F28, size 0x4, align 255
    char _pad_1F2C[0x4]; // offset 0x1F2C
    float32 m_flThrowStrength; // offset 0x1F30, size 0x4, align 4
    char _pad_1F34[0x74]; // offset 0x1F34
    GameTime_t m_fDropTime; // offset 0x1FA8, size 0x4, align 255
    GameTime_t m_fPinPullTime; // offset 0x1FAC, size 0x4, align 255
    bool m_bJustPulledPin; // offset 0x1FB0, size 0x1, align 1
    char _pad_1FB1[0x3]; // offset 0x1FB1
    GameTick_t m_nNextHoldTick; // offset 0x1FB4, size 0x4, align 255
    float32 m_flNextHoldFrac; // offset 0x1FB8, size 0x4, align 4
    CHandle< C_CSWeaponBase > m_hSwitchToWeaponAfterThrow; // offset 0x1FBC, size 0x4, align 4
    char _pad_1FC0[0x20]; // offset 0x1FC0
};
