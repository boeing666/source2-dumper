#pragma once

class CDOTA_Modifier_Morphling_ScepterStatsDrain_All_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 scepter_stat_steal; // offset 0x1A78, size 0x4, align 4
    int32 nStrengthSteal; // offset 0x1A7C, size 0x4, align 4
    int32 nAgiSteal; // offset 0x1A80, size 0x4, align 4
    int32 nIntSteal; // offset 0x1A84, size 0x4, align 4
};
