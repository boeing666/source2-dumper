#pragma once

class C_INIT_ModelCull : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x268, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bBoundBox; // offset 0x1E0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bCullOutside; // offset 0x1E1, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseBones; // offset 0x1E2, size 0x1, align 1 | MPropertyFriendlyName
    char[128] m_HitboxSetName; // offset 0x1E3, size 0x80, align 1 | MPropertyFriendlyName
    char _pad_0263[0x5]; // offset 0x263
};
