#pragma once

struct MoodAnimationLayer_t  // sizeof 0x60, align 0x8 (animationsystem) {MGetKV3ClassDefaults MPropertyArrayElementNameKey}
{
    CUtlString m_sName; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    bool m_bActiveListening; // offset 0x8, size 0x1, align 1 | MPropertyFriendlyName MPropertyDescription
    bool m_bActiveTalking; // offset 0x9, size 0x1, align 1 | MPropertyFriendlyName MPropertyDescription
    char _pad_000A[0x6]; // offset 0xA
    CUtlVector< MoodAnimation_t > m_layerAnimations; // offset 0x10, size 0x18, align 8 | MPropertyDescription
    CRangeFloat m_flIntensity; // offset 0x28, size 0x8, align 255 | MPropertyDescription MPropertyAttributeRange
    CRangeFloat m_flDurationScale; // offset 0x30, size 0x8, align 255 | MPropertyDescription
    bool m_bScaleWithInts; // offset 0x38, size 0x1, align 1 | MPropertyDescription
    char _pad_0039[0x3]; // offset 0x39
    CRangeFloat m_flNextStart; // offset 0x3C, size 0x8, align 255 | MPropertyDescription
    CRangeFloat m_flStartOffset; // offset 0x44, size 0x8, align 255 | MPropertyDescription
    CRangeFloat m_flEndOffset; // offset 0x4C, size 0x8, align 255 | MPropertyDescription
    float32 m_flFadeIn; // offset 0x54, size 0x4, align 4 | MPropertyDescription
    float32 m_flFadeOut; // offset 0x58, size 0x4, align 4 | MPropertyDescription
    char _pad_005C[0x4]; // offset 0x5C
};
