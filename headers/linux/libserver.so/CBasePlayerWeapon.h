#pragma once

class CBasePlayerWeapon : public CEconEntity /*0x0*/  // sizeof 0x11D0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1190]; // offset 0x0
    GameTick_t m_nNextPrimaryAttackTick; // offset 0x1190, size 0x4, align 255
    float32 m_flNextPrimaryAttackTickRatio; // offset 0x1194, size 0x4, align 4
    GameTick_t m_nNextSecondaryAttackTick; // offset 0x1198, size 0x4, align 255
    float32 m_flNextSecondaryAttackTickRatio; // offset 0x119C, size 0x4, align 4
    int32 m_iClip1; // offset 0x11A0, size 0x4, align 4
    int32 m_iClip2; // offset 0x11A4, size 0x4, align 4
    int32[2] m_pReserveAmmo; // offset 0x11A8, size 0x8, align 4
    CEntityIOOutput m_OnPlayerUse; // offset 0x11B0, size 0x18, align 255
    char _pad_11C8[0x8]; // offset 0x11C8
};
