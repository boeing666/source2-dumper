#pragma once

class CDOTA_Modifier_Hoodwink_Bushwhack_Trap : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 visual_height; // offset 0x1AF8, size 0x4, align 4
    float32 animation_rate; // offset 0x1AFC, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B00, size 0x4, align 255
    bool m_bPullComplete; // offset 0x1B04, size 0x1, align 1
    char _pad_1B05[0x3]; // offset 0x1B05
    uint32 m_TreeId; // offset 0x1B08, size 0x4, align 4
    float32 m_flDamagePerTick; // offset 0x1B0C, size 0x4, align 4
    int32 m_nDamageTicks; // offset 0x1B10, size 0x4, align 4
    int32 m_nTicksApplied; // offset 0x1B14, size 0x4, align 4
};
