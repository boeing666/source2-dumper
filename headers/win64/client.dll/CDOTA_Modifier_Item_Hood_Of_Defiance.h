#pragma once

class CDOTA_Modifier_Item_Hood_Of_Defiance : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_spell_resist; // offset 0x1A58, size 0x4, align 4
    float32 bonus_health_regen; // offset 0x1A5C, size 0x4, align 4
};
