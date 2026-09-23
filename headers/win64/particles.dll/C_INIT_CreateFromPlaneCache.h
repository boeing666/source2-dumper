#pragma once

class C_INIT_CreateFromPlaneCache : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x208, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    Vector m_vecOffsetMin; // offset 0x1E8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecOffsetMax; // offset 0x1F4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    char _pad_0200[0x1]; // offset 0x200
    bool m_bUseNormal; // offset 0x201, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0202[0x6]; // offset 0x202
};
