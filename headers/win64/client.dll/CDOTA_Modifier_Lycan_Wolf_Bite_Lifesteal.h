#pragma once

class CDOTA_Modifier_Lycan_Wolf_Bite_Lifesteal : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool m_bHidden; // offset 0x1AA8, size 0x1, align 1
    char _pad_1AA9[0x3]; // offset 0x1AA9
    float32 creep_penalty; // offset 0x1AAC, size 0x4, align 4
    float32 lifesteal_percent; // offset 0x1AB0, size 0x4, align 4
    float32 lifesteal_range; // offset 0x1AB4, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_vecTargets; // offset 0x1AB8, size 0x18, align 8
};
