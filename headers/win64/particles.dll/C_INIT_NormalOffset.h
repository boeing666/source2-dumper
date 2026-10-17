#pragma once

class C_INIT_NormalOffset : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x208, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    Vector m_OffsetMin; // offset 0x1E8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_OffsetMax; // offset 0x1F4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    int32 m_nControlPointNumber; // offset 0x200, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLocalCoords; // offset 0x204, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bNormalize; // offset 0x205, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0206[0x2]; // offset 0x206
};
