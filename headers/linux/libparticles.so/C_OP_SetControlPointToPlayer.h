#pragma once

class C_OP_SetControlPointToPlayer : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x1F8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    int32 m_nCP1; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecCP1Pos; // offset 0x1D8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bOrientToEyes; // offset 0x1E4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E5[0x3]; // offset 0x1E5
    ParticleEntityPos_t m_nPosition; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nRadiusCP; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nRadiusCPField; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
    char _pad_01F4[0x4]; // offset 0x1F4
};
