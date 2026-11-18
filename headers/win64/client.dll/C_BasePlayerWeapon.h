#pragma once

class C_BasePlayerWeapon : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xC48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    GameTick_t m_nNextPrimaryAttackTick; // offset 0xC10, size 0x4, align 255
    float32 m_flNextPrimaryAttackTickRatio; // offset 0xC14, size 0x4, align 4
    GameTick_t m_nNextSecondaryAttackTick; // offset 0xC18, size 0x4, align 255
    float32 m_flNextSecondaryAttackTickRatio; // offset 0xC1C, size 0x4, align 4
    int32 m_iClip1; // offset 0xC20, size 0x4, align 4
    int32 m_iClip2; // offset 0xC24, size 0x4, align 4
    int32[2] m_pReserveAmmo; // offset 0xC28, size 0x8, align 4
    char _pad_0C30[0x18]; // offset 0xC30
};
