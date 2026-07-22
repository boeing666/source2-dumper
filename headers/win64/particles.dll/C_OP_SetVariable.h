#pragma once

class C_OP_SetVariable : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0xAD8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleVariableRef m_variableReference; // offset 0x1E0, size 0x50, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_transformInput; // offset 0x230, size 0x68, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    Vector m_positionOffset; // offset 0x298, size 0xC, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    QAngle m_rotationOffset; // offset 0x2A4, size 0xC, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionVecInput m_vecInput; // offset 0x2B0, size 0x6B8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_floatInput; // offset 0x968, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
};
