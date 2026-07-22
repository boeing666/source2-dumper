#pragma once

struct LookAtOpFixedSettings_t  // sizeof 0xD0, align 0x10 (animgraphlib) {MGetKV3ClassDefaults}
{
    CAnimAttachment m_attachment; // offset 0x0, size 0x80, align 16
    CAnimInputDamping m_damping; // offset 0x80, size 0x18, align 8
    CUtlVector< LookAtBone_t > m_bones; // offset 0x98, size 0x18, align 8
    float32 m_flYawLimit; // offset 0xB0, size 0x4, align 4
    float32 m_flPitchLimit; // offset 0xB4, size 0x4, align 4
    float32 m_flHysteresisInnerAngle; // offset 0xB8, size 0x4, align 4
    float32 m_flHysteresisOuterAngle; // offset 0xBC, size 0x4, align 4
    bool m_bRotateYawForward; // offset 0xC0, size 0x1, align 1
    bool m_bMaintainUpDirection; // offset 0xC1, size 0x1, align 1
    bool m_bTargetIsPosition; // offset 0xC2, size 0x1, align 1
    bool m_bUseHysteresis; // offset 0xC3, size 0x1, align 1
    char _pad_00C4[0xC]; // offset 0xC4
};
