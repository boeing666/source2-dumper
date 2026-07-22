#pragma once

class CDOTACrownfallCreditsDefinition  // sizeof 0x40, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< CDOTACrownfallCreditsBlockDefinition > m_vecCreditsBlocks; // offset 0x0, size 0x18, align 8
    int32 m_nPixelScale; // offset 0x18, size 0x4, align 4
    int32 m_nWidth; // offset 0x1C, size 0x4, align 4
    int32 m_nHeight; // offset 0x20, size 0x4, align 4
    int32 m_nDefaultBlockMarginTop; // offset 0x24, size 0x4, align 4
    float32 m_flFinalLogoTimeAfterStop; // offset 0x28, size 0x4, align 4
    float32 m_flDelayBeforeValveHead; // offset 0x2C, size 0x4, align 4
    char _pad_0030[0x10]; // offset 0x30
};
