#pragma once

struct AimMatrixOpFixedSettings_t  // sizeof 0xF0, align 0x10 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
    CAnimAttachment m_attachment; // offset 0x0, size 0x80, align 16
    CAnimInputDamping m_damping; // offset 0x80, size 0x18, align 8
    CPoseHandle[10] m_poseCacheHandles; // offset 0x98, size 0x28, align 2
    AimMatrixBlendMode m_eBlendMode; // offset 0xC0, size 0x4, align 4
    float32 m_flMaxYawAngle; // offset 0xC4, size 0x4, align 4
    float32 m_flMaxPitchAngle; // offset 0xC8, size 0x4, align 4
    int32 m_nSequenceMaxFrame; // offset 0xCC, size 0x4, align 4
    int32 m_nBoneMaskIndex; // offset 0xD0, size 0x4, align 4
    bool m_bTargetIsPosition; // offset 0xD4, size 0x1, align 1
    bool m_bUseBiasAndClamp; // offset 0xD5, size 0x1, align 1
    char _pad_00D6[0x2]; // offset 0xD6
    float32 m_flBiasAndClampYawOffset; // offset 0xD8, size 0x4, align 4
    float32 m_flBiasAndClampPitchOffset; // offset 0xDC, size 0x4, align 4
    CBlendCurve m_biasAndClampBlendCurve; // offset 0xE0, size 0x8, align 4
    char _pad_00E8[0x8]; // offset 0xE8
};
