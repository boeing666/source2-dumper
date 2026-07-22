#pragma once

class C_OP_MovementRigidAttachToCP : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1E8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nScaleControlPoint; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nScaleCPField; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldInput; // offset 0x1DC, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1E0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bOffsetLocal; // offset 0x1E4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E5[0x3]; // offset 0x1E5
};
