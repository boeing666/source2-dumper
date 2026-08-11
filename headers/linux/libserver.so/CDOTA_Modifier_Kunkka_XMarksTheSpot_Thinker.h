#pragma once

class CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    VectorWS m_vStartLoc; // offset 0x1A78, size 0xC, align 4
    bool m_bIsReflection; // offset 0x1A84, size 0x1, align 1
    char _pad_1A85[0x3]; // offset 0x1A85
    CHandle< CBaseEntity > m_hEntity; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
