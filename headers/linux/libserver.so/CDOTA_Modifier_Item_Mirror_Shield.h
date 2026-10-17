#pragma once

class CDOTA_Modifier_Item_Mirror_Shield : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1BB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CModifierParams m_LastParams; // offset 0x1AA8, size 0xF8, align 255
    int32 all_stats; // offset 0x1BA0, size 0x4, align 4
    int32 reflect_chance; // offset 0x1BA4, size 0x4, align 4
    bool m_bProcSuccessful; // offset 0x1BA8, size 0x1, align 1
    char _pad_1BA9[0x7]; // offset 0x1BA9
};
