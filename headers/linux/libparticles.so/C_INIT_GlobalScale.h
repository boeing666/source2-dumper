#pragma once

class C_INIT_GlobalScale : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1E8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    float32 m_flScale; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nScaleControlPointNumber; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nControlPointNumber; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bScaleRadius; // offset 0x1E0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bScalePosition; // offset 0x1E1, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bScaleVelocity; // offset 0x1E2, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E3[0x5]; // offset 0x1E3
};
