#pragma once

class C_BasePlayerWeapon : public C_EconEntity /*0x0*/  // sizeof 0x27E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x27A8]; // offset 0x0
    GameTick_t m_nNextPrimaryAttackTick; // offset 0x27A8, size 0x4, align 255
    float32 m_flNextPrimaryAttackTickRatio; // offset 0x27AC, size 0x4, align 4
    GameTick_t m_nNextSecondaryAttackTick; // offset 0x27B0, size 0x4, align 255
    float32 m_flNextSecondaryAttackTickRatio; // offset 0x27B4, size 0x4, align 4
    int32 m_iClip1; // offset 0x27B8, size 0x4, align 4
    int32 m_iClip2; // offset 0x27BC, size 0x4, align 4
    int32[2] m_pReserveAmmo; // offset 0x27C0, size 0x8, align 4
    char _pad_27C8[0x18]; // offset 0x27C8
};
