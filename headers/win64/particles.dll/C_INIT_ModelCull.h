#pragma once

class C_INIT_ModelCull : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x268, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bBoundBox; // offset 0x1E4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bCullOutside; // offset 0x1E5, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseBones; // offset 0x1E6, size 0x1, align 1 | MPropertyFriendlyName
    char[128] m_HitboxSetName; // offset 0x1E7, size 0x80, align 1 | MPropertyFriendlyName
    char _pad_0267[0x1]; // offset 0x267
};
