#pragma once

class CDOTA_Modifier_Item_Imbue_Choice : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 m_nBehaviorFlagRequired; // offset 0x1A58, size 0x4, align 4
    int32 m_nTeamTargetRequired; // offset 0x1A5C, size 0x4, align 4
    bool m_bCastRangeRequired; // offset 0x1A60, size 0x1, align 1
    bool m_bAOERequired; // offset 0x1A61, size 0x1, align 1
    char _pad_1A62[0x2]; // offset 0x1A62
    AbilityID_t m_nItemID; // offset 0x1A64, size 0x4, align 255
};
