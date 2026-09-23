#pragma once

class C_INIT_PositionOffsetToCP : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1E8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    int32 m_nControlPointNumberStart; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nControlPointNumberEnd; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLocalCoords; // offset 0x1E4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E5[0x3]; // offset 0x1E5
};
