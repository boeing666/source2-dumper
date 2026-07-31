#pragma once

class CDOTA_Modifier_Weaver_Swarm_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 armor_reduction; // offset 0x1A78, size 0x4, align 4
    int32 damage; // offset 0x1A7C, size 0x4, align 4
    int32 experience_gain; // offset 0x1A80, size 0x4, align 4
    float32 m_flCurrentArmorReduction; // offset 0x1A84, size 0x4, align 4
    CHandle< C_BaseEntity > m_hSwarmBug; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
