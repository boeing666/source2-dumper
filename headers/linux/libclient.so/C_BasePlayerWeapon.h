#pragma once

class C_BasePlayerWeapon : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xC80, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC44]; // offset 0x0
    GameTick_t m_nNextPrimaryAttackTick; // offset 0xC44, size 0x4, align 255
    float32 m_flNextPrimaryAttackTickRatio; // offset 0xC48, size 0x4, align 4
    GameTick_t m_nNextSecondaryAttackTick; // offset 0xC4C, size 0x4, align 255
    float32 m_flNextSecondaryAttackTickRatio; // offset 0xC50, size 0x4, align 4
    int32 m_iClip1; // offset 0xC54, size 0x4, align 4
    int32 m_iClip2; // offset 0xC58, size 0x4, align 4
    int32[2] m_pReserveAmmo; // offset 0xC5C, size 0x8, align 4
    char _pad_0C64[0x1C]; // offset 0xC64
};
