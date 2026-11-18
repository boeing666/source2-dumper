#pragma once

class CBasePlayerWeapon : public CBaseAnimatingActivity /*0x0*/  // sizeof 0x910, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8D8]; // offset 0x0
    GameTick_t m_nNextPrimaryAttackTick; // offset 0x8D8, size 0x4, align 255
    float32 m_flNextPrimaryAttackTickRatio; // offset 0x8DC, size 0x4, align 4
    GameTick_t m_nNextSecondaryAttackTick; // offset 0x8E0, size 0x4, align 255
    float32 m_flNextSecondaryAttackTickRatio; // offset 0x8E4, size 0x4, align 4
    int32 m_iClip1; // offset 0x8E8, size 0x4, align 4
    int32 m_iClip2; // offset 0x8EC, size 0x4, align 4
    int32[2] m_pReserveAmmo; // offset 0x8F0, size 0x8, align 4
    CEntityIOOutput m_OnPlayerUse; // offset 0x8F8, size 0x18, align 255
};
