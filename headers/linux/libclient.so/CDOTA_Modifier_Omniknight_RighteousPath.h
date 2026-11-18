#pragma once

class CDOTA_Modifier_Omniknight_RighteousPath : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 model_scale; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_cast_range; // offset 0x1AFC, size 0x4, align 4
    float32 damage_reduction; // offset 0x1B00, size 0x4, align 4
    float32 damage_per_pip; // offset 0x1B04, size 0x4, align 4
    float32 max_stored_damage; // offset 0x1B08, size 0x4, align 4
    ParticleIndex_t m_nPipsFXIndex; // offset 0x1B0C, size 0x4, align 255
};
