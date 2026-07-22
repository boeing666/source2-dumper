#pragma once

class C_INIT_CreateFromPlaneCache : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x200, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    Vector m_vecOffsetMin; // offset 0x1E0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecOffsetMax; // offset 0x1EC, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    char _pad_01F8[0x1]; // offset 0x1F8
    bool m_bUseNormal; // offset 0x1F9, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01FA[0x6]; // offset 0x1FA
};
