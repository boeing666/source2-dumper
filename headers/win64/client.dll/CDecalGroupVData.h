#pragma once

class CDecalGroupVData  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    CUtlVector< DecalGroupOption_t > m_vecOptions; // offset 0x0, size 0x18, align 8
    float32 m_flTotalProbability; // offset 0x18, size 0x4, align 4 | MPropertySuppressField
    char _pad_001C[0x4]; // offset 0x1C
};
