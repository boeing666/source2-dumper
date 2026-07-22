#pragma once

class CBaseCSGrenade : public CCSWeaponBase /*0x0*/  // sizeof 0x1090, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1050]; // offset 0x0
    bool m_bRedraw; // offset 0x1050, size 0x1, align 1
    bool m_bIsHeldByPlayer; // offset 0x1051, size 0x1, align 1
    bool m_bPinPulled; // offset 0x1052, size 0x1, align 1
    bool m_bJumpThrow; // offset 0x1053, size 0x1, align 1
    bool m_bThrowAnimating; // offset 0x1054, size 0x1, align 1
    char _pad_1055[0x3]; // offset 0x1055
    GameTime_t m_fThrowTime; // offset 0x1058, size 0x4, align 255
    float32 m_flThrowStrength; // offset 0x105C, size 0x4, align 4
    GameTime_t m_fDropTime; // offset 0x1060, size 0x4, align 255
    GameTime_t m_fPinPullTime; // offset 0x1064, size 0x4, align 255
    bool m_bJustPulledPin; // offset 0x1068, size 0x1, align 1
    char _pad_1069[0x3]; // offset 0x1069
    GameTick_t m_nNextHoldTick; // offset 0x106C, size 0x4, align 255
    float32 m_flNextHoldFrac; // offset 0x1070, size 0x4, align 4
    CHandle< CCSWeaponBase > m_hSwitchToWeaponAfterThrow; // offset 0x1074, size 0x4, align 4
    char _pad_1078[0x18]; // offset 0x1078
};
