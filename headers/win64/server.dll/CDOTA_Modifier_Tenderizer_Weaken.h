#pragma once

class CDOTA_Modifier_Tenderizer_Weaken : public CDOTA_Modifier_Stacking_Base /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1B18]; // offset 0x0
    int32 weaken_per_hit; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
