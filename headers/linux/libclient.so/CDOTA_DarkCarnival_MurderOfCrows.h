#pragma once

class CDOTA_DarkCarnival_MurderOfCrows : public C_BaseEntity /*0x0*/  // sizeof 0x830, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x770]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCModel > m_hCrowModel; // offset 0x770, size 0x8, align 8
    CUtlSymbolLarge m_sCrowExplodeVFX; // offset 0x778, size 0x8, align 8
    CUtlSymbolLarge m_sCrowExplodeSound; // offset 0x780, size 0x8, align 8
    int32 m_nCountingCrows; // offset 0x788, size 0x4, align 4
    float32 m_flCrowSpeed; // offset 0x78C, size 0x4, align 4
    float32 m_flCrowScale; // offset 0x790, size 0x4, align 4
    char _pad_0794[0x9C]; // offset 0x794
};
