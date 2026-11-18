#pragma once

class CDOTA_Modifier_Invoker_ChaosMeteor_Land : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    Vector m_vDir; // offset 0x1AF8, size 0xC, align 4
    int32 travel_speed; // offset 0x1B04, size 0x4, align 4
    int32 acceleration; // offset 0x1B08, size 0x4, align 4
    int32 travel_distance; // offset 0x1B0C, size 0x4, align 4
    int32 vision_distance; // offset 0x1B10, size 0x4, align 4
    float32 spell_amp; // offset 0x1B14, size 0x4, align 4
    float32 spell_lifesteal; // offset 0x1B18, size 0x4, align 4
    float32 stun_duration; // offset 0x1B1C, size 0x4, align 4
    int32 area_of_effect; // offset 0x1B20, size 0x4, align 4
    char _pad_1B24[0x4]; // offset 0x1B24
};
