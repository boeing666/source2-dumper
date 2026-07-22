#pragma once

class CDOTA_Modifier_AncientApparition_ColdFeet : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    VectorWS m_vecStartPosition; // offset 0x1A58, size 0xC, align 4
    int32 m_nCurrentTick; // offset 0x1A64, size 0x4, align 4
    float32 break_distance; // offset 0x1A68, size 0x4, align 4
    float32 stun_duration; // offset 0x1A6C, size 0x4, align 4
    int32 damage_per_second; // offset 0x1A70, size 0x4, align 4
    float32 aoe; // offset 0x1A74, size 0x4, align 4
};
