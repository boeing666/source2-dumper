#pragma once

class CBaseCSGrenade : public CCSWeaponBase /*0x0*/  // sizeof 0x1350, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1315]; // offset 0x0
    bool m_bRedraw; // offset 0x1315, size 0x1, align 1
    bool m_bIsHeldByPlayer; // offset 0x1316, size 0x1, align 1
    bool m_bPinPulled; // offset 0x1317, size 0x1, align 1
    bool m_bJumpThrow; // offset 0x1318, size 0x1, align 1
    bool m_bThrowAnimating; // offset 0x1319, size 0x1, align 1
    char _pad_131A[0x2]; // offset 0x131A
    GameTime_t m_fThrowTime; // offset 0x131C, size 0x4, align 255
    float32 m_flThrowStrength; // offset 0x1320, size 0x4, align 4
    GameTime_t m_fDropTime; // offset 0x1324, size 0x4, align 255
    GameTime_t m_fPinPullTime; // offset 0x1328, size 0x4, align 255
    bool m_bJustPulledPin; // offset 0x132C, size 0x1, align 1
    char _pad_132D[0x3]; // offset 0x132D
    GameTick_t m_nNextHoldTick; // offset 0x1330, size 0x4, align 255
    float32 m_flNextHoldFrac; // offset 0x1334, size 0x4, align 4
    CHandle< CCSWeaponBase > m_hSwitchToWeaponAfterThrow; // offset 0x1338, size 0x4, align 4
    char _pad_133C[0x14]; // offset 0x133C
};
