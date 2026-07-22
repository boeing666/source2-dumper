#pragma once

class CScaleFunctionVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataRoot MVDataNodeType MVDataOverlayType}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    EStatsType m_eSpecificStatScaleType; // offset 0x28, size 0x4, align 4
    bool m_bFunctionDisabled; // offset 0x2C, size 0x1, align 1
    char _pad_002D[0x3]; // offset 0x2D
    float32 m_flStatScale; // offset 0x30, size 0x4, align 4
    float32 m_flStreetBrawlStatScale; // offset 0x34, size 0x4, align 4
    char _pad_0038[0x8]; // offset 0x38
};
