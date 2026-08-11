#pragma once

class CDOTA_Modifier_Invoker_ChaosMeteor_Land : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    Vector m_vDir; // offset 0x1A78, size 0xC, align 4
    int32 travel_speed; // offset 0x1A84, size 0x4, align 4
    int32 acceleration; // offset 0x1A88, size 0x4, align 4
    int32 travel_distance; // offset 0x1A8C, size 0x4, align 4
    int32 vision_distance; // offset 0x1A90, size 0x4, align 4
    float32 spell_amp; // offset 0x1A94, size 0x4, align 4
    float32 spell_lifesteal; // offset 0x1A98, size 0x4, align 4
    float32 stun_duration; // offset 0x1A9C, size 0x4, align 4
    int32 area_of_effect; // offset 0x1AA0, size 0x4, align 4
    char _pad_1AA4[0x4]; // offset 0x1AA4
};
