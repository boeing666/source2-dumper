#pragma once

class CDOTA_Modifier_Medusa_GorgonGrasp_Root : public CDOTA_Modifier_Rooted /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 damage_pers; // offset 0x1A58, size 0x4, align 4
    float32 damage_interval; // offset 0x1A5C, size 0x4, align 4
    float32 m_flTickDamage; // offset 0x1A60, size 0x4, align 4
    char _pad_1A64[0x4]; // offset 0x1A64
};
