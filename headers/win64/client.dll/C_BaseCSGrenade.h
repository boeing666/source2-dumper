#pragma once

class C_BaseCSGrenade : public C_CSWeaponBase /*0x0*/  // sizeof 0x2020, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1F60]; // offset 0x0
    bool m_bClientPredictDelete; // offset 0x1F60, size 0x1, align 1
    bool m_bRedraw; // offset 0x1F61, size 0x1, align 1
    bool m_bIsHeldByPlayer; // offset 0x1F62, size 0x1, align 1
    bool m_bPinPulled; // offset 0x1F63, size 0x1, align 1
    bool m_bJumpThrow; // offset 0x1F64, size 0x1, align 1
    bool m_bThrowAnimating; // offset 0x1F65, size 0x1, align 1
    char _pad_1F66[0x2]; // offset 0x1F66
    GameTime_t m_fThrowTime; // offset 0x1F68, size 0x4, align 255
    char _pad_1F6C[0x4]; // offset 0x1F6C
    float32 m_flThrowStrength; // offset 0x1F70, size 0x4, align 4
    char _pad_1F74[0x74]; // offset 0x1F74
    GameTime_t m_fDropTime; // offset 0x1FE8, size 0x4, align 255
    GameTime_t m_fPinPullTime; // offset 0x1FEC, size 0x4, align 255
    bool m_bJustPulledPin; // offset 0x1FF0, size 0x1, align 1
    char _pad_1FF1[0x3]; // offset 0x1FF1
    GameTick_t m_nNextHoldTick; // offset 0x1FF4, size 0x4, align 255
    float32 m_flNextHoldFrac; // offset 0x1FF8, size 0x4, align 4
    CHandle< C_CSWeaponBase > m_hSwitchToWeaponAfterThrow; // offset 0x1FFC, size 0x4, align 4
    char _pad_2000[0x20]; // offset 0x2000
};
