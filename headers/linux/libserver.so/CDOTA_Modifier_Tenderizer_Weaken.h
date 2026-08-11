#pragma once

class CDOTA_Modifier_Tenderizer_Weaken : public CDOTA_Modifier_Stacking_Base /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A98]; // offset 0x0
    int32 weaken_per_hit; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
