#pragma once

class CDOTA_Modifier_Muerta_PartingShot_PhysicalBodyDebuff : public CDOTA_Modifier_Stunned /*0x0*/  // sizeof 0x1A60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< C_BaseEntity > m_hSoulEntityClient; // offset 0x1A58, size 0x4, align 4
    int32 damage_reduction_percent; // offset 0x1A5C, size 0x4, align 4
};
