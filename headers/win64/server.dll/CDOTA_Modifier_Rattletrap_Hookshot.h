#pragma once

class CDOTA_Modifier_Rattletrap_Hookshot : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hDamaged; // offset 0x1AA8, size 0x18, align 8
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AC0, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1AC4, size 0xC, align 4
    char _pad_1AD0[0x14]; // offset 0x1AD0
    int32 speed; // offset 0x1AE4, size 0x4, align 4
    float32 stun_radius; // offset 0x1AE8, size 0x4, align 4
    float32 radius_ally; // offset 0x1AEC, size 0x4, align 4
    float32 cooldown_refund_ally; // offset 0x1AF0, size 0x4, align 4
    float32 damage; // offset 0x1AF4, size 0x4, align 4
    float32 duration; // offset 0x1AF8, size 0x4, align 4
    float32 ally_shield_duration; // offset 0x1AFC, size 0x4, align 4
};
