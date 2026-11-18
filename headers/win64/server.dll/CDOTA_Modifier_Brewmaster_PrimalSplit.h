#pragma once

class CDOTA_Modifier_Brewmaster_PrimalSplit : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AF8, size 0x4, align 4
    CHandle< CBaseEntity > m_hSecondaryTarget; // offset 0x1AFC, size 0x4, align 4
    CHandle< CBaseEntity > m_hTertiaryTarget; // offset 0x1B00, size 0x4, align 4
    CHandle< CBaseEntity > m_hReturnBrewling; // offset 0x1B04, size 0x4, align 4
    int32 primal_split_cancel; // offset 0x1B08, size 0x4, align 4
    int32 m_nFXIndex; // offset 0x1B0C, size 0x4, align 4
};
