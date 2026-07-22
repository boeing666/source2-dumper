#pragma once

struct TextureControls_t  // sizeof 0xA30, align 0x8 (particles) {MGetKV3ClassDefaults}
{
    CParticleCollectionRendererFloatInput m_flFinalTextureScaleU; // offset 0x0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flFinalTextureScaleV; // offset 0x170, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flFinalTextureOffsetU; // offset 0x2E0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flFinalTextureOffsetV; // offset 0x450, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flFinalTextureUVRotation; // offset 0x5C0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flZoomScale; // offset 0x730, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flDistortion; // offset 0x8A0, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bRandomizeOffsets; // offset 0xA10, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bClampUVs; // offset 0xA11, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0A12[0x2]; // offset 0xA12
    SpriteCardPerParticleScale_t m_nPerParticleBlend; // offset 0xA14, size 0x4, align 4 | MPropertyFriendlyName
    SpriteCardPerParticleScale_t m_nPerParticleScale; // offset 0xA18, size 0x4, align 4 | MPropertyFriendlyName
    SpriteCardPerParticleScale_t m_nPerParticleOffsetU; // offset 0xA1C, size 0x4, align 4 | MPropertyFriendlyName
    SpriteCardPerParticleScale_t m_nPerParticleOffsetV; // offset 0xA20, size 0x4, align 4 | MPropertyFriendlyName
    SpriteCardPerParticleScale_t m_nPerParticleRotation; // offset 0xA24, size 0x4, align 4 | MPropertyFriendlyName
    SpriteCardPerParticleScale_t m_nPerParticleZoom; // offset 0xA28, size 0x4, align 4 | MPropertyFriendlyName
    SpriteCardPerParticleScale_t m_nPerParticleDistortion; // offset 0xA2C, size 0x4, align 4 | MPropertyFriendlyName
};
