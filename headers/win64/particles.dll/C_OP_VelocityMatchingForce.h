#pragma once

class C_OP_VelocityMatchingForce : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1F0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    float32 m_flDirScale; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSpdScale; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flNeighborDistance; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flFacingStrength; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bUseAABB; // offset 0x1E8, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_01E9[0x3]; // offset 0x1E9
    int32 m_nCPBroadcast; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
};
