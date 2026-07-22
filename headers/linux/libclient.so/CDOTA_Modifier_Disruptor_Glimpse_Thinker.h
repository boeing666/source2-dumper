#pragma once

class CDOTA_Modifier_Disruptor_Glimpse_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    VectorWS m_vStartLoc; // offset 0x1A58, size 0xC, align 4
    CHandle< C_BaseEntity > m_hEntity; // offset 0x1A64, size 0x4, align 4
    float32 m_flDistance; // offset 0x1A68, size 0x4, align 4
    char _pad_1A6C[0x14]; // offset 0x1A6C
};
