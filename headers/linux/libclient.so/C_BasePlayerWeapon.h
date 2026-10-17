#pragma once

class C_BasePlayerWeapon : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xD70, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD34]; // offset 0x0
    GameTick_t m_nNextPrimaryAttackTick; // offset 0xD34, size 0x4, align 255
    float32 m_flNextPrimaryAttackTickRatio; // offset 0xD38, size 0x4, align 4
    GameTick_t m_nNextSecondaryAttackTick; // offset 0xD3C, size 0x4, align 255
    float32 m_flNextSecondaryAttackTickRatio; // offset 0xD40, size 0x4, align 4
    int32 m_iClip1; // offset 0xD44, size 0x4, align 4
    int32 m_iClip2; // offset 0xD48, size 0x4, align 4
    int32[2] m_pReserveAmmo; // offset 0xD4C, size 0x8, align 4
    char _pad_0D54[0x1C]; // offset 0xD54
};
