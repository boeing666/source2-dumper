#pragma once

class C_OP_LockToSavedSequentialPath : public CParticleFunctionOperator /*0x0*/  // sizeof 0x230, align 0x10 [vtable] (particles) {MParticleMaxVersion MParticleReplacementOp MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    float32 m_flFadeStart; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flFadeEnd; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bCPPairs; // offset 0x1E4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E5[0xB]; // offset 0x1E5
    CPathParameters m_PathParams; // offset 0x1F0, size 0x40, align 16
};
