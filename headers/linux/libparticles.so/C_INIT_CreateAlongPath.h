#pragma once

class C_INIT_CreateAlongPath : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x240, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    float32 m_fMaxDistance; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01D8[0x8]; // offset 0x1D8
    CPathParameters m_PathParams; // offset 0x1E0, size 0x40, align 16
    bool m_bUseRandomCPs; // offset 0x220, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0221[0x3]; // offset 0x221
    Vector m_vEndOffset; // offset 0x224, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bSaveOffset; // offset 0x230, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0231[0xF]; // offset 0x231
};
