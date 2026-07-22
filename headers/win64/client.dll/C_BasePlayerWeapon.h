#pragma once

class C_BasePlayerWeapon : public C_EconEntity /*0x0*/  // sizeof 0x1728, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16F0]; // offset 0x0
    GameTick_t m_nNextPrimaryAttackTick; // offset 0x16F0, size 0x4, align 255
    float32 m_flNextPrimaryAttackTickRatio; // offset 0x16F4, size 0x4, align 4
    GameTick_t m_nNextSecondaryAttackTick; // offset 0x16F8, size 0x4, align 255
    float32 m_flNextSecondaryAttackTickRatio; // offset 0x16FC, size 0x4, align 4
    int32 m_iClip1; // offset 0x1700, size 0x4, align 4
    int32 m_iClip2; // offset 0x1704, size 0x4, align 4
    int32[2] m_pReserveAmmo; // offset 0x1708, size 0x8, align 4
    char _pad_1710[0x18]; // offset 0x1710
};
