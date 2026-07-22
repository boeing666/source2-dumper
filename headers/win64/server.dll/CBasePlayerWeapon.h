#pragma once

class CBasePlayerWeapon : public CBaseAnimatingActivity /*0x0*/  // sizeof 0x7D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x798]; // offset 0x0
    GameTick_t m_nNextPrimaryAttackTick; // offset 0x798, size 0x4, align 255
    float32 m_flNextPrimaryAttackTickRatio; // offset 0x79C, size 0x4, align 4
    GameTick_t m_nNextSecondaryAttackTick; // offset 0x7A0, size 0x4, align 255
    float32 m_flNextSecondaryAttackTickRatio; // offset 0x7A4, size 0x4, align 4
    int32 m_iClip1; // offset 0x7A8, size 0x4, align 4
    int32 m_iClip2; // offset 0x7AC, size 0x4, align 4
    int32[2] m_pReserveAmmo; // offset 0x7B0, size 0x8, align 4
    CEntityIOOutput m_OnPlayerUse; // offset 0x7B8, size 0x18, align 255
};
