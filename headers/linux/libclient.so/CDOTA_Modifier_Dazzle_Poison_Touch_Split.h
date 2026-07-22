#pragma once

class CDOTA_Modifier_Dazzle_Poison_Touch_Split : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 m_nAttacksLanded; // offset 0x1A58, size 0x4, align 4
    int32 attacks_to_split; // offset 0x1A5C, size 0x4, align 4
    int32 split_radius; // offset 0x1A60, size 0x4, align 4
    ParticleIndex_t m_nFXStackIndex; // offset 0x1A64, size 0x4, align 255
};
