#pragma once

class CBasePlayerWeapon : public CEconEntity /*0x0*/  // sizeof 0xCD0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC90]; // offset 0x0
    GameTick_t m_nNextPrimaryAttackTick; // offset 0xC90, size 0x4, align 255
    float32 m_flNextPrimaryAttackTickRatio; // offset 0xC94, size 0x4, align 4
    GameTick_t m_nNextSecondaryAttackTick; // offset 0xC98, size 0x4, align 255
    float32 m_flNextSecondaryAttackTickRatio; // offset 0xC9C, size 0x4, align 4
    int32 m_iClip1; // offset 0xCA0, size 0x4, align 4
    int32 m_iClip2; // offset 0xCA4, size 0x4, align 4
    int32[2] m_pReserveAmmo; // offset 0xCA8, size 0x8, align 4
    CEntityIOOutput m_OnPlayerUse; // offset 0xCB0, size 0x18, align 255
    char _pad_0CC8[0x8]; // offset 0xCC8
};
