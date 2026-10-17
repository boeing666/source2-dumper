#pragma once

class C_OP_MaintainSequentialPath : public CParticleFunctionOperator /*0x0*/  // sizeof 0x670, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleCollectionFloatInput m_fMaxDistance; // offset 0x1D8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flNumToAssign; // offset 0x348, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flCohesionStrength; // offset 0x4B8, size 0x170, align 8 | MPropertyFriendlyName
    float32 m_flTolerance; // offset 0x628, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLoop; // offset 0x62C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseParticleCount; // offset 0x62D, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_062E[0x2]; // offset 0x62E
    CPathParameters m_PathParams; // offset 0x630, size 0x40, align 16
};
