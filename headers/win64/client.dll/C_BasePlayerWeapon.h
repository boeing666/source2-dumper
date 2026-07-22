#pragma once

class C_BasePlayerWeapon : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xAF8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xAC0]; // offset 0x0
    GameTick_t m_nNextPrimaryAttackTick; // offset 0xAC0, size 0x4, align 255
    float32 m_flNextPrimaryAttackTickRatio; // offset 0xAC4, size 0x4, align 4
    GameTick_t m_nNextSecondaryAttackTick; // offset 0xAC8, size 0x4, align 255
    float32 m_flNextSecondaryAttackTickRatio; // offset 0xACC, size 0x4, align 4
    int32 m_iClip1; // offset 0xAD0, size 0x4, align 4
    int32 m_iClip2; // offset 0xAD4, size 0x4, align 4
    int32[2] m_pReserveAmmo; // offset 0xAD8, size 0x8, align 4
    char _pad_0AE0[0x18]; // offset 0xAE0
};
