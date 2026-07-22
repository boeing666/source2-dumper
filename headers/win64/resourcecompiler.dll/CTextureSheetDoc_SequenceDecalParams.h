#pragma once

class CTextureSheetDoc_SequenceDecalParams  // sizeof 0x24, align 0x4 [trivial_dtor] (texturelib) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
public:
    float32 m_flScale; // offset 0x0, size 0x4, align 4
    float32 m_flDepth; // offset 0x4, size 0x4, align 4
    float32 m_flScaleVariation; // offset 0x8, size 0x4, align 4
    float32 m_flStartFadeTime; // offset 0xC, size 0x4, align 4
    float32 m_flFadeDuration; // offset 0x10, size 0x4, align 4
    float32 m_flAnimationScale; // offset 0x14, size 0x4, align 4
    float32 m_flAnimationStartTime; // offset 0x18, size 0x4, align 4
    float32 m_flAlignWithGravityFactor; // offset 0x1C, size 0x4, align 4
    DecalRtEncoding_t m_nDecalRtEncoding; // offset 0x20, size 0x1, align 1
    char _pad_0021[0x3]; // offset 0x21
};
