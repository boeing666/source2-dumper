#pragma once

class CDOTA_DarkCarnival_MurderOfCrows : public C_BaseEntity /*0x0*/  // sizeof 0x6B0, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCModel > m_hCrowModel; // offset 0x5F0, size 0x8, align 8
    CUtlSymbolLarge m_sCrowExplodeVFX; // offset 0x5F8, size 0x8, align 8
    CUtlSymbolLarge m_sCrowExplodeSound; // offset 0x600, size 0x8, align 8
    int32 m_nCountingCrows; // offset 0x608, size 0x4, align 4
    float32 m_flCrowSpeed; // offset 0x60C, size 0x4, align 4
    float32 m_flCrowScale; // offset 0x610, size 0x4, align 4
    char _pad_0614[0x9C]; // offset 0x614
};
