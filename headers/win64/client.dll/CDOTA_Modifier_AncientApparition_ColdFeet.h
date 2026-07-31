#pragma once

class CDOTA_Modifier_AncientApparition_ColdFeet : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    VectorWS m_vecStartPosition; // offset 0x1A78, size 0xC, align 4
    int32 m_nCurrentTick; // offset 0x1A84, size 0x4, align 4
    float32 break_distance; // offset 0x1A88, size 0x4, align 4
    float32 stun_duration; // offset 0x1A8C, size 0x4, align 4
    int32 damage_per_second; // offset 0x1A90, size 0x4, align 4
    float32 aoe; // offset 0x1A94, size 0x4, align 4
};
