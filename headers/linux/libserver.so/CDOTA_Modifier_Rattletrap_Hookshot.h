#pragma once

class CDOTA_Modifier_Rattletrap_Hookshot : public CDOTA_Buff /*0x0*/  // sizeof 0x1B50, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hDamaged; // offset 0x1AF8, size 0x18, align 8
    CHandle< CBaseEntity > m_hTarget; // offset 0x1B10, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1B14, size 0xC, align 4
    char _pad_1B20[0x14]; // offset 0x1B20
    int32 speed; // offset 0x1B34, size 0x4, align 4
    float32 stun_radius; // offset 0x1B38, size 0x4, align 4
    float32 radius_ally; // offset 0x1B3C, size 0x4, align 4
    float32 cooldown_refund_ally; // offset 0x1B40, size 0x4, align 4
    float32 damage; // offset 0x1B44, size 0x4, align 4
    float32 duration; // offset 0x1B48, size 0x4, align 4
    float32 ally_shield_duration; // offset 0x1B4C, size 0x4, align 4
};
