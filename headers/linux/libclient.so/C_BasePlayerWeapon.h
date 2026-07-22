#pragma once

class C_BasePlayerWeapon : public C_EconEntity /*0x0*/  // sizeof 0x25B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x2580]; // offset 0x0
    GameTick_t m_nNextPrimaryAttackTick; // offset 0x2580, size 0x4, align 255
    float32 m_flNextPrimaryAttackTickRatio; // offset 0x2584, size 0x4, align 4
    GameTick_t m_nNextSecondaryAttackTick; // offset 0x2588, size 0x4, align 255
    float32 m_flNextSecondaryAttackTickRatio; // offset 0x258C, size 0x4, align 4
    int32 m_iClip1; // offset 0x2590, size 0x4, align 4
    int32 m_iClip2; // offset 0x2594, size 0x4, align 4
    int32[2] m_pReserveAmmo; // offset 0x2598, size 0x8, align 4
    char _pad_25A0[0x18]; // offset 0x25A0
};
