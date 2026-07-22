#pragma once

class C_OP_ControlPointToRadialScreenSpace : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x1F0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    int32 m_nCPIn; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecCP1Pos; // offset 0x1D8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    int32 m_nCPOut; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPOutField; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nCPSSPosOut; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
};
