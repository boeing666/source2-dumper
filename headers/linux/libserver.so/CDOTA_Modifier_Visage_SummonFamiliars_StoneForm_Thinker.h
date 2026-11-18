#pragma once

class CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 stun_radius; // offset 0x1AF8, size 0x4, align 4
    float32 stun_damage; // offset 0x1AFC, size 0x4, align 4
    float32 stun_delay; // offset 0x1B00, size 0x4, align 4
    float32 stun_duration; // offset 0x1B04, size 0x4, align 4
    float32 stone_duration; // offset 0x1B08, size 0x4, align 4
    int32 m_iIntervalCount; // offset 0x1B0C, size 0x4, align 4
};
