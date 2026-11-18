#pragma once

class CDOTA_Modifier_Morphling_ScepterStatsDrain_All_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 scepter_stat_steal; // offset 0x1AF8, size 0x4, align 4
    int32 nStrengthSteal; // offset 0x1AFC, size 0x4, align 4
    int32 nAgiSteal; // offset 0x1B00, size 0x4, align 4
    int32 nIntSteal; // offset 0x1B04, size 0x4, align 4
};
