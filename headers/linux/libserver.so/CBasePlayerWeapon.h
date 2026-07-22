#pragma once

class CBasePlayerWeapon : public CEconEntity /*0x0*/  // sizeof 0xFB0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    GameTick_t m_nNextPrimaryAttackTick; // offset 0xF70, size 0x4, align 255
    float32 m_flNextPrimaryAttackTickRatio; // offset 0xF74, size 0x4, align 4
    GameTick_t m_nNextSecondaryAttackTick; // offset 0xF78, size 0x4, align 255
    float32 m_flNextSecondaryAttackTickRatio; // offset 0xF7C, size 0x4, align 4
    int32 m_iClip1; // offset 0xF80, size 0x4, align 4
    int32 m_iClip2; // offset 0xF84, size 0x4, align 4
    int32[2] m_pReserveAmmo; // offset 0xF88, size 0x8, align 4
    CEntityIOOutput m_OnPlayerUse; // offset 0xF90, size 0x18, align 255
    char _pad_0FA8[0x8]; // offset 0xFA8
};
