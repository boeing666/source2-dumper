#pragma once

class CCitadel_Modifier_StreetBrawl_Phase_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x758, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CBitVecEnum< EStreetBrawlGameState > m_eValidStates; // offset 0x750, size 0x4, align 4
    char _pad_0754[0x4]; // offset 0x754
};
