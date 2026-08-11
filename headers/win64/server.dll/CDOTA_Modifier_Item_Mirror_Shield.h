#pragma once

class CDOTA_Modifier_Item_Mirror_Shield : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B78, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CModifierParams m_LastParams; // offset 0x1A78, size 0xF0, align 255
    int32 all_stats; // offset 0x1B68, size 0x4, align 4
    int32 reflect_chance; // offset 0x1B6C, size 0x4, align 4
    bool m_bProcSuccessful; // offset 0x1B70, size 0x1, align 1
    char _pad_1B71[0x7]; // offset 0x1B71
};
