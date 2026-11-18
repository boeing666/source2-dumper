#pragma once

class CDOTA_Modifier_Roshans_Banner_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 radius; // offset 0x1AF8, size 0x4, align 4
    int32 hp_bonus; // offset 0x1AFC, size 0x4, align 4
    int32 damage_bonus; // offset 0x1B00, size 0x4, align 4
    int32 model_scale; // offset 0x1B04, size 0x4, align 4
    float32 buff_linger_duration; // offset 0x1B08, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B0C, size 0x4, align 255
};
