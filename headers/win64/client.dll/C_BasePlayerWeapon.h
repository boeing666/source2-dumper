#pragma once

class C_BasePlayerWeapon : public CBaseAnimGraph /*0x0*/  // sizeof 0xE30, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDF8]; // offset 0x0
    GameTick_t m_nNextPrimaryAttackTick; // offset 0xDF8, size 0x4, align 255
    float32 m_flNextPrimaryAttackTickRatio; // offset 0xDFC, size 0x4, align 4
    GameTick_t m_nNextSecondaryAttackTick; // offset 0xE00, size 0x4, align 255
    float32 m_flNextSecondaryAttackTickRatio; // offset 0xE04, size 0x4, align 4
    int32 m_iClip1; // offset 0xE08, size 0x4, align 4
    int32 m_iClip2; // offset 0xE0C, size 0x4, align 4
    int32[2] m_pReserveAmmo; // offset 0xE10, size 0x8, align 4
    char _pad_0E18[0x18]; // offset 0xE18
};
