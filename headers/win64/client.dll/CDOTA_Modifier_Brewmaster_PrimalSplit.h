#pragma once

class CDOTA_Modifier_Brewmaster_PrimalSplit : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A58, size 0x4, align 4
    CHandle< C_BaseEntity > m_hSecondaryTarget; // offset 0x1A5C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTertiaryTarget; // offset 0x1A60, size 0x4, align 4
    CHandle< C_BaseEntity > m_hReturnBrewling; // offset 0x1A64, size 0x4, align 4
    int32 primal_split_cancel; // offset 0x1A68, size 0x4, align 4
    int32 m_nFXIndex; // offset 0x1A6C, size 0x4, align 4
};
