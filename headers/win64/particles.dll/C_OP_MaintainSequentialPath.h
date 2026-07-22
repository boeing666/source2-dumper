#pragma once

class C_OP_MaintainSequentialPath : public CParticleFunctionOperator /*0x0*/  // sizeof 0x230, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    float32 m_fMaxDistance; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flNumToAssign; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flCohesionStrength; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flTolerance; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLoop; // offset 0x1E8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseParticleCount; // offset 0x1E9, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01EA[0x6]; // offset 0x1EA
    CPathParameters m_PathParams; // offset 0x1F0, size 0x40, align 16
};
