#pragma once

class CBaseCSGrenade : public CCSWeaponBase /*0x0*/  // sizeof 0x1580, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1545]; // offset 0x0
    bool m_bRedraw; // offset 0x1545, size 0x1, align 1
    bool m_bIsHeldByPlayer; // offset 0x1546, size 0x1, align 1
    bool m_bPinPulled; // offset 0x1547, size 0x1, align 1
    bool m_bJumpThrow; // offset 0x1548, size 0x1, align 1
    bool m_bThrowAnimating; // offset 0x1549, size 0x1, align 1
    char _pad_154A[0x2]; // offset 0x154A
    GameTime_t m_fThrowTime; // offset 0x154C, size 0x4, align 255
    float32 m_flThrowStrength; // offset 0x1550, size 0x4, align 4
    GameTime_t m_fDropTime; // offset 0x1554, size 0x4, align 255
    GameTime_t m_fPinPullTime; // offset 0x1558, size 0x4, align 255
    bool m_bJustPulledPin; // offset 0x155C, size 0x1, align 1
    char _pad_155D[0x3]; // offset 0x155D
    GameTick_t m_nNextHoldTick; // offset 0x1560, size 0x4, align 255
    float32 m_flNextHoldFrac; // offset 0x1564, size 0x4, align 4
    CHandle< CCSWeaponBase > m_hSwitchToWeaponAfterThrow; // offset 0x1568, size 0x4, align 4
    char _pad_156C[0x14]; // offset 0x156C
};
