#pragma once

class C_OP_SetControlPointToHMD : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x1F8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nCP1; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecCP1Pos; // offset 0x1E4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bOrientToHMD; // offset 0x1F0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01F1[0x7]; // offset 0x1F1
};
