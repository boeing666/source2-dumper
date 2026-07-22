#pragma once

class C_OP_SetVariable : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0xA98, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleVariableRef m_variableReference; // offset 0x1D8, size 0x50, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_transformInput; // offset 0x228, size 0x60, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    Vector m_positionOffset; // offset 0x288, size 0xC, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    QAngle m_rotationOffset; // offset 0x294, size 0xC, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionVecInput m_vecInput; // offset 0x2A0, size 0x690, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_floatInput; // offset 0x930, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
};
