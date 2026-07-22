#pragma once

class CDOTA_Modifier_Beastmaster_Hawk_Perch_Perching : public CDOTA_Buff /*0x0*/  // sizeof 0x1A60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 perching_tree_height; // offset 0x1A58, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTree; // offset 0x1A5C, size 0x4, align 4
};
