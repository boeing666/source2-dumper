#pragma once

class CBaseCSGrenade : public CCSWeaponBase /*0x0*/  // sizeof 0x12C0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1280]; // offset 0x0
    bool m_bRedraw; // offset 0x1280, size 0x1, align 1
    bool m_bIsHeldByPlayer; // offset 0x1281, size 0x1, align 1
    bool m_bPinPulled; // offset 0x1282, size 0x1, align 1
    bool m_bJumpThrow; // offset 0x1283, size 0x1, align 1
    bool m_bThrowAnimating; // offset 0x1284, size 0x1, align 1
    char _pad_1285[0x3]; // offset 0x1285
    GameTime_t m_fThrowTime; // offset 0x1288, size 0x4, align 255
    float32 m_flThrowStrength; // offset 0x128C, size 0x4, align 4
    GameTime_t m_fDropTime; // offset 0x1290, size 0x4, align 255
    GameTime_t m_fPinPullTime; // offset 0x1294, size 0x4, align 255
    bool m_bJustPulledPin; // offset 0x1298, size 0x1, align 1
    char _pad_1299[0x3]; // offset 0x1299
    GameTick_t m_nNextHoldTick; // offset 0x129C, size 0x4, align 255
    float32 m_flNextHoldFrac; // offset 0x12A0, size 0x4, align 4
    CHandle< CCSWeaponBase > m_hSwitchToWeaponAfterThrow; // offset 0x12A4, size 0x4, align 4
    char _pad_12A8[0x18]; // offset 0x12A8
};
