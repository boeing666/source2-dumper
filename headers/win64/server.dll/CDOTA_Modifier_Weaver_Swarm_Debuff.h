#pragma once

class CDOTA_Modifier_Weaver_Swarm_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 armor_reduction; // offset 0x1AF8, size 0x4, align 4
    int32 damage; // offset 0x1AFC, size 0x4, align 4
    int32 experience_gain; // offset 0x1B00, size 0x4, align 4
    float32 m_flCurrentArmorReduction; // offset 0x1B04, size 0x4, align 4
    CHandle< CBaseEntity > m_hSwarmBug; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
