#pragma once

class CBasePlayerWeapon : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xAA8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA70]; // offset 0x0
    GameTick_t m_nNextPrimaryAttackTick; // offset 0xA70, size 0x4, align 255
    float32 m_flNextPrimaryAttackTickRatio; // offset 0xA74, size 0x4, align 4
    GameTick_t m_nNextSecondaryAttackTick; // offset 0xA78, size 0x4, align 255
    float32 m_flNextSecondaryAttackTickRatio; // offset 0xA7C, size 0x4, align 4
    int32 m_iClip1; // offset 0xA80, size 0x4, align 4
    int32 m_iClip2; // offset 0xA84, size 0x4, align 4
    int32[2] m_pReserveAmmo; // offset 0xA88, size 0x8, align 4
    CEntityIOOutput m_OnPlayerUse; // offset 0xA90, size 0x18, align 255
};
