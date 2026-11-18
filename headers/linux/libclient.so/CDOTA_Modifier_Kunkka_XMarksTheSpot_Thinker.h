#pragma once

class CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    VectorWS m_vStartLoc; // offset 0x1AF8, size 0xC, align 4
    bool m_bIsReflection; // offset 0x1B04, size 0x1, align 1
    char _pad_1B05[0x3]; // offset 0x1B05
    CHandle< C_BaseEntity > m_hEntity; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
