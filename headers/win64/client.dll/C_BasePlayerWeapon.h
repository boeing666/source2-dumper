#pragma once

class C_BasePlayerWeapon : public C_EconEntity /*0x0*/  // sizeof 0x1950, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1918]; // offset 0x0
    GameTick_t m_nNextPrimaryAttackTick; // offset 0x1918, size 0x4, align 255
    float32 m_flNextPrimaryAttackTickRatio; // offset 0x191C, size 0x4, align 4
    GameTick_t m_nNextSecondaryAttackTick; // offset 0x1920, size 0x4, align 255
    float32 m_flNextSecondaryAttackTickRatio; // offset 0x1924, size 0x4, align 4
    int32 m_iClip1; // offset 0x1928, size 0x4, align 4
    int32 m_iClip2; // offset 0x192C, size 0x4, align 4
    int32[2] m_pReserveAmmo; // offset 0x1930, size 0x8, align 4
    char _pad_1938[0x18]; // offset 0x1938
};
