#pragma once

class CBlendUpdateNode : public CAnimUpdateNodeBase /*0x0*/  // sizeof 0xE0, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x60]; // offset 0x0
    CUtlVector< CAnimUpdateNodeRef > m_children; // offset 0x60, size 0x18, align 8
    CUtlVector< uint8 > m_sortedOrder; // offset 0x78, size 0x18, align 8
    CUtlVector< float32 > m_targetValues; // offset 0x90, size 0x18, align 8
    char _pad_00A8[0x4]; // offset 0xA8
    AnimValueSource m_blendValueSource; // offset 0xAC, size 0x4, align 4
    LinearRootMotionBlendMode_t m_eLinearRootMotionBlendMode; // offset 0xB0, size 0x4, align 4
    CAnimParamHandle m_paramIndex; // offset 0xB4, size 0x2, align 1
    char _pad_00B6[0x2]; // offset 0xB6
    CAnimInputDamping m_damping; // offset 0xB8, size 0x18, align 8
    BlendKeyType m_blendKeyType; // offset 0xD0, size 0x4, align 4
    bool m_bLockBlendOnReset; // offset 0xD4, size 0x1, align 1
    bool m_bSyncCycles; // offset 0xD5, size 0x1, align 1
    bool m_bLoop; // offset 0xD6, size 0x1, align 1
    bool m_bLockWhenWaning; // offset 0xD7, size 0x1, align 1
    bool m_bIsAngle; // offset 0xD8, size 0x1, align 1
    char _pad_00D9[0x7]; // offset 0xD9
};
