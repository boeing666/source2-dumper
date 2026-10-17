#pragma once

class CDOTA_Modifier_Item_Imbue_Choice : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 m_nBehaviorFlagRequired; // offset 0x1AA8, size 0x4, align 4
    int32 m_nTeamTargetRequired; // offset 0x1AAC, size 0x4, align 4
    bool m_bCastRangeRequired; // offset 0x1AB0, size 0x1, align 1
    bool m_bAOERequired; // offset 0x1AB1, size 0x1, align 1
    char _pad_1AB2[0x2]; // offset 0x1AB2
    AbilityID_t m_nItemID; // offset 0x1AB4, size 0x4, align 255
};
