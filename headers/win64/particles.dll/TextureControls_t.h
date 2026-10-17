#pragma once

struct TextureControls_t  // sizeof 0xA68, align 0x8 (particles) {MGetKV3ClassDefaults}
{
    CParticleCollectionRendererFloatInput m_flFinalTextureScaleU; // offset 0x0, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flFinalTextureScaleV; // offset 0x178, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flFinalTextureOffsetU; // offset 0x2F0, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flFinalTextureOffsetV; // offset 0x468, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flFinalTextureUVRotation; // offset 0x5E0, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flZoomScale; // offset 0x758, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flDistortion; // offset 0x8D0, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bRandomizeOffsets; // offset 0xA48, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bClampUVs; // offset 0xA49, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0A4A[0x2]; // offset 0xA4A
    SpriteCardPerParticleScale_t m_nPerParticleBlend; // offset 0xA4C, size 0x4, align 4 | MPropertyFriendlyName
    SpriteCardPerParticleScale_t m_nPerParticleScale; // offset 0xA50, size 0x4, align 4 | MPropertyFriendlyName
    SpriteCardPerParticleScale_t m_nPerParticleOffsetU; // offset 0xA54, size 0x4, align 4 | MPropertyFriendlyName
    SpriteCardPerParticleScale_t m_nPerParticleOffsetV; // offset 0xA58, size 0x4, align 4 | MPropertyFriendlyName
    SpriteCardPerParticleScale_t m_nPerParticleRotation; // offset 0xA5C, size 0x4, align 4 | MPropertyFriendlyName
    SpriteCardPerParticleScale_t m_nPerParticleZoom; // offset 0xA60, size 0x4, align 4 | MPropertyFriendlyName
    SpriteCardPerParticleScale_t m_nPerParticleDistortion; // offset 0xA64, size 0x4, align 4 | MPropertyFriendlyName
};
