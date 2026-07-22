#pragma once

class C_INIT_CreateAlongPath : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x250, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    float32 m_fMaxDistance; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0xC]; // offset 0x1E4
    CPathParameters m_PathParams; // offset 0x1F0, size 0x40, align 16
    bool m_bUseRandomCPs; // offset 0x230, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0231[0x3]; // offset 0x231
    Vector m_vEndOffset; // offset 0x234, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bSaveOffset; // offset 0x240, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0241[0xF]; // offset 0x241
};
