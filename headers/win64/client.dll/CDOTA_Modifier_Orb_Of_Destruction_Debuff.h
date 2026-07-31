#pragma once

class CDOTA_Modifier_Orb_Of_Destruction_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 armor_reduction; // offset 0x1A78, size 0x4, align 4
    int32 slow_melee; // offset 0x1A7C, size 0x4, align 4
    int32 slow_range; // offset 0x1A80, size 0x4, align 4
    bool bCasterRanged; // offset 0x1A84, size 0x1, align 1
    char _pad_1A85[0x3]; // offset 0x1A85
};
