#pragma once

class CBasePlayerWeapon : public CEconEntity /*0x0*/  // sizeof 0xEF0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xEB0]; // offset 0x0
    GameTick_t m_nNextPrimaryAttackTick; // offset 0xEB0, size 0x4, align 255
    float32 m_flNextPrimaryAttackTickRatio; // offset 0xEB4, size 0x4, align 4
    GameTick_t m_nNextSecondaryAttackTick; // offset 0xEB8, size 0x4, align 255
    float32 m_flNextSecondaryAttackTickRatio; // offset 0xEBC, size 0x4, align 4
    int32 m_iClip1; // offset 0xEC0, size 0x4, align 4
    int32 m_iClip2; // offset 0xEC4, size 0x4, align 4
    int32[2] m_pReserveAmmo; // offset 0xEC8, size 0x8, align 4
    CEntityIOOutput m_OnPlayerUse; // offset 0xED0, size 0x18, align 255
    char _pad_0EE8[0x8]; // offset 0xEE8
};
