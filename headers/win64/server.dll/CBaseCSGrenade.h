#pragma once

class CBaseCSGrenade : public CCSWeaponBase /*0x0*/  // sizeof 0x12B0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1270]; // offset 0x0
    bool m_bRedraw; // offset 0x1270, size 0x1, align 1
    bool m_bIsHeldByPlayer; // offset 0x1271, size 0x1, align 1
    bool m_bPinPulled; // offset 0x1272, size 0x1, align 1
    bool m_bJumpThrow; // offset 0x1273, size 0x1, align 1
    bool m_bThrowAnimating; // offset 0x1274, size 0x1, align 1
    char _pad_1275[0x3]; // offset 0x1275
    GameTime_t m_fThrowTime; // offset 0x1278, size 0x4, align 255
    float32 m_flThrowStrength; // offset 0x127C, size 0x4, align 4
    GameTime_t m_fDropTime; // offset 0x1280, size 0x4, align 255
    GameTime_t m_fPinPullTime; // offset 0x1284, size 0x4, align 255
    bool m_bJustPulledPin; // offset 0x1288, size 0x1, align 1
    char _pad_1289[0x3]; // offset 0x1289
    GameTick_t m_nNextHoldTick; // offset 0x128C, size 0x4, align 255
    float32 m_flNextHoldFrac; // offset 0x1290, size 0x4, align 4
    CHandle< CCSWeaponBase > m_hSwitchToWeaponAfterThrow; // offset 0x1294, size 0x4, align 4
    char _pad_1298[0x18]; // offset 0x1298
};
