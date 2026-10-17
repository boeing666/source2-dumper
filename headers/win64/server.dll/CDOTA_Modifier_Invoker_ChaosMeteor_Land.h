#pragma once

class CDOTA_Modifier_Invoker_ChaosMeteor_Land : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    Vector m_vDir; // offset 0x1AA8, size 0xC, align 4
    int32 travel_speed; // offset 0x1AB4, size 0x4, align 4
    int32 acceleration; // offset 0x1AB8, size 0x4, align 4
    int32 travel_distance; // offset 0x1ABC, size 0x4, align 4
    int32 vision_distance; // offset 0x1AC0, size 0x4, align 4
    float32 spell_amp; // offset 0x1AC4, size 0x4, align 4
    float32 spell_lifesteal; // offset 0x1AC8, size 0x4, align 4
    float32 stun_duration; // offset 0x1ACC, size 0x4, align 4
    int32 area_of_effect; // offset 0x1AD0, size 0x4, align 4
    char _pad_1AD4[0x4]; // offset 0x1AD4
};
