#pragma once

class C_OP_SetVariable : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0xB08, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CParticleVariableRef m_variableReference; // offset 0x1E8, size 0x50, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_transformInput; // offset 0x238, size 0x68, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    Vector m_positionOffset; // offset 0x2A0, size 0xC, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    QAngle m_rotationOffset; // offset 0x2AC, size 0xC, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionVecInput m_vecInput; // offset 0x2B8, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_floatInput; // offset 0x990, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
};
