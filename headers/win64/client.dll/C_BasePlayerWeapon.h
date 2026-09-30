#pragma once

class C_BasePlayerWeapon : public CBaseAnimGraph /*0x0*/  // sizeof 0xDD8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDA0]; // offset 0x0
    GameTick_t m_nNextPrimaryAttackTick; // offset 0xDA0, size 0x4, align 255
    float32 m_flNextPrimaryAttackTickRatio; // offset 0xDA4, size 0x4, align 4
    GameTick_t m_nNextSecondaryAttackTick; // offset 0xDA8, size 0x4, align 255
    float32 m_flNextSecondaryAttackTickRatio; // offset 0xDAC, size 0x4, align 4
    int32 m_iClip1; // offset 0xDB0, size 0x4, align 4
    int32 m_iClip2; // offset 0xDB4, size 0x4, align 4
    int32[2] m_pReserveAmmo; // offset 0xDB8, size 0x8, align 4
    char _pad_0DC0[0x18]; // offset 0xDC0
};
