#pragma once

class CBasePlayerWeapon : public CBaseAnimGraph /*0x0*/  // sizeof 0xB20, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAE0]; // offset 0x0
    GameTick_t m_nNextPrimaryAttackTick; // offset 0xAE0, size 0x4, align 255
    float32 m_flNextPrimaryAttackTickRatio; // offset 0xAE4, size 0x4, align 4
    GameTick_t m_nNextSecondaryAttackTick; // offset 0xAE8, size 0x4, align 255
    float32 m_flNextSecondaryAttackTickRatio; // offset 0xAEC, size 0x4, align 4
    int32 m_iClip1; // offset 0xAF0, size 0x4, align 4
    int32 m_iClip2; // offset 0xAF4, size 0x4, align 4
    int32[2] m_pReserveAmmo; // offset 0xAF8, size 0x8, align 4
    CEntityIOOutput m_OnPlayerUse; // offset 0xB00, size 0x18, align 255
    char _pad_0B18[0x8]; // offset 0xB18
};
