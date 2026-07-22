#pragma once

class CDOTA_Modifier_Lycan_Wolf_Bite_Lifesteal : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 creep_penalty; // offset 0x1A58, size 0x4, align 4
    float32 lifesteal_percent; // offset 0x1A5C, size 0x4, align 4
    float32 lifesteal_range; // offset 0x1A60, size 0x4, align 4
    char _pad_1A64[0x4]; // offset 0x1A64
    CUtlVector< CHandle< C_BaseEntity > > m_vecTargets; // offset 0x1A68, size 0x18, align 8
};
