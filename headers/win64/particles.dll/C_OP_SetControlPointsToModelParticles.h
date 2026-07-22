#pragma once

class C_OP_SetControlPointsToModelParticles : public CParticleFunctionOperator /*0x0*/  // sizeof 0x2E8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    char[128] m_HitboxSetName; // offset 0x1D8, size 0x80, align 1 | MPropertyFriendlyName
    char[128] m_AttachmentName; // offset 0x258, size 0x80, align 1 | MPropertyFriendlyName
    int32 m_nFirstControlPoint; // offset 0x2D8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nNumControlPoints; // offset 0x2DC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nFirstSourcePoint; // offset 0x2E0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bSkin; // offset 0x2E4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAttachment; // offset 0x2E5, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_02E6[0x2]; // offset 0x2E6
};
