#pragma once

class CDOTA_Modifier_Item_Radiance : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_damage; // offset 0x1A78, size 0x4, align 4
    int32 evasion; // offset 0x1A7C, size 0x4, align 4
    int32 upgrade_day_vision; // offset 0x1A80, size 0x4, align 4
    bool m_bLastToggleState; // offset 0x1A84, size 0x1, align 1
    char _pad_1A85[0x3]; // offset 0x1A85
};
