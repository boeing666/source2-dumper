#pragma once

class CDOTA_Modifier_PhantomLancer_Juxtapose_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 max_illusions; // offset 0x1AF8, size 0x4, align 4
    int32 scepter_bonus_illusions; // offset 0x1AFC, size 0x4, align 4
    float32 illusion_duration; // offset 0x1B00, size 0x4, align 4
    int32 illusion_damage_out_pct; // offset 0x1B04, size 0x4, align 4
    int32 illusion_damage_in_pct; // offset 0x1B08, size 0x4, align 4
    float32 scepter_bonus_duration; // offset 0x1B0C, size 0x4, align 4
    int32 m_iIllusionsSoFar; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
};
