#pragma once

class CDOTA_Modifier_Miniboss_Minion_Deflecting_Shield_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 decay_to_zero_seconds; // offset 0x1A58, size 0x4, align 4
    float32 aura_radius; // offset 0x1A5C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hOwningItem; // offset 0x1A60, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A64, size 0x4, align 4
};
