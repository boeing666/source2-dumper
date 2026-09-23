#pragma once

class C_OP_SnapshotSkinToBones : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1F8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    bool m_bTransformNormals; // offset 0x1E0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bTransformRadii; // offset 0x1E1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E2[0x2]; // offset 0x1E2
    int32 m_nControlPointNumber; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLifeTimeFadeStart; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLifeTimeFadeEnd; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flJumpThreshold; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flPrevPosScale; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
};
