#pragma once

class C_OP_SnapshotRigidSkinToBones : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1E0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    bool m_bTransformNormals; // offset 0x1D8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bTransformRadii; // offset 0x1D9, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01DA[0x2]; // offset 0x1DA
    int32 m_nControlPointNumber; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
};
