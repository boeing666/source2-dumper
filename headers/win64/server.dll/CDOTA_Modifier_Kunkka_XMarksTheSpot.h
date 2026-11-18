#pragma once

class CDOTA_Modifier_Kunkka_XMarksTheSpot : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 ally_ms; // offset 0x1AF8, size 0x4, align 4
    int32 ally_armor; // offset 0x1AFC, size 0x4, align 4
    CHandle< CBaseEntity > hThinker; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x14]; // offset 0x1B04
};
