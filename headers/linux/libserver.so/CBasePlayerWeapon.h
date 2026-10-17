#pragma once

class CBasePlayerWeapon : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xB88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB50]; // offset 0x0
    GameTick_t m_nNextPrimaryAttackTick; // offset 0xB50, size 0x4, align 255
    float32 m_flNextPrimaryAttackTickRatio; // offset 0xB54, size 0x4, align 4
    GameTick_t m_nNextSecondaryAttackTick; // offset 0xB58, size 0x4, align 255
    float32 m_flNextSecondaryAttackTickRatio; // offset 0xB5C, size 0x4, align 4
    int32 m_iClip1; // offset 0xB60, size 0x4, align 4
    int32 m_iClip2; // offset 0xB64, size 0x4, align 4
    int32[2] m_pReserveAmmo; // offset 0xB68, size 0x8, align 4
    CEntityIOOutput m_OnPlayerUse; // offset 0xB70, size 0x18, align 255
};
