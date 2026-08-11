#pragma once

class CDOTA_Modifier_DrowRanger_FrostArrows_Hypothermia : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 shard_regen_reduction_pct_per_stack; // offset 0x1A78, size 0x4, align 4
    float32 shard_burst_radius; // offset 0x1A7C, size 0x4, align 4
    ParticleIndex_t m_nFXStackIndex; // offset 0x1A80, size 0x4, align 255
    char _pad_1A84[0x4]; // offset 0x1A84
};
