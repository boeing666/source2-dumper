#pragma once

class CDOTA_Modifier_Brewmaster_PrimalSplit : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A78, size 0x4, align 4
    CHandle< CBaseEntity > m_hSecondaryTarget; // offset 0x1A7C, size 0x4, align 4
    CHandle< CBaseEntity > m_hTertiaryTarget; // offset 0x1A80, size 0x4, align 4
    CHandle< CBaseEntity > m_hReturnBrewling; // offset 0x1A84, size 0x4, align 4
    int32 primal_split_cancel; // offset 0x1A88, size 0x4, align 4
    int32 m_nFXIndex; // offset 0x1A8C, size 0x4, align 4
};
