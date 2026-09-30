#pragma once

class C_OP_MaintainSequentialPath : public CParticleFunctionOperator /*0x0*/  // sizeof 0x690, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleCollectionFloatInput m_fMaxDistance; // offset 0x1E0, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flNumToAssign; // offset 0x358, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flCohesionStrength; // offset 0x4D0, size 0x178, align 8 | MPropertyFriendlyName
    float32 m_flTolerance; // offset 0x648, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLoop; // offset 0x64C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseParticleCount; // offset 0x64D, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_064E[0x2]; // offset 0x64E
    CPathParameters m_PathParams; // offset 0x650, size 0x40, align 16
};
