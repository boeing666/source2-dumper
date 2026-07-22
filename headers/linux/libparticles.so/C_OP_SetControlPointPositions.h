#pragma once

class C_OP_SetControlPointPositions : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x218, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D1]; // offset 0x0
    bool m_bUseWorldLocation; // offset 0x1D1, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bOrient; // offset 0x1D2, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetOnce; // offset 0x1D3, size 0x1, align 1 | MPropertyFriendlyName
    int32 m_nCP1; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCP2; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCP3; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCP4; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecCP1Pos; // offset 0x1E4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecCP2Pos; // offset 0x1F0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecCP3Pos; // offset 0x1FC, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecCP4Pos; // offset 0x208, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    int32 m_nHeadLocation; // offset 0x214, size 0x4, align 4 | MPropertyFriendlyName
};
