#pragma once

class CDOTA_Modifier_AncientApparition_ColdFeet : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    VectorWS m_vecStartPosition; // offset 0x1AA8, size 0xC, align 4
    int32 m_nCurrentTick; // offset 0x1AB4, size 0x4, align 4
    float32 break_distance; // offset 0x1AB8, size 0x4, align 4
    float32 stun_duration; // offset 0x1ABC, size 0x4, align 4
    int32 damage_per_second; // offset 0x1AC0, size 0x4, align 4
    float32 aoe; // offset 0x1AC4, size 0x4, align 4
};
