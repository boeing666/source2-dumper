#pragma once

class C_INIT_CreateFromPlaneCache : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1F0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    Vector m_vecOffsetMin; // offset 0x1D4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecOffsetMax; // offset 0x1E0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    char _pad_01EC[0x1]; // offset 0x1EC
    bool m_bUseNormal; // offset 0x1ED, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01EE[0x2]; // offset 0x1EE
};
