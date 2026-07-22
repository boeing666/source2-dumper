#pragma once

struct TextureControls_t  // sizeof 0x9F8, align 0x8 (particles) {MGetKV3ClassDefaults}
{
    CParticleCollectionRendererFloatInput m_flFinalTextureScaleU; // offset 0x0, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flFinalTextureScaleV; // offset 0x168, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flFinalTextureOffsetU; // offset 0x2D0, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flFinalTextureOffsetV; // offset 0x438, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flFinalTextureUVRotation; // offset 0x5A0, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flZoomScale; // offset 0x708, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flDistortion; // offset 0x870, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bRandomizeOffsets; // offset 0x9D8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bClampUVs; // offset 0x9D9, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_09DA[0x2]; // offset 0x9DA
    SpriteCardPerParticleScale_t m_nPerParticleBlend; // offset 0x9DC, size 0x4, align 4 | MPropertyFriendlyName
    SpriteCardPerParticleScale_t m_nPerParticleScale; // offset 0x9E0, size 0x4, align 4 | MPropertyFriendlyName
    SpriteCardPerParticleScale_t m_nPerParticleOffsetU; // offset 0x9E4, size 0x4, align 4 | MPropertyFriendlyName
    SpriteCardPerParticleScale_t m_nPerParticleOffsetV; // offset 0x9E8, size 0x4, align 4 | MPropertyFriendlyName
    SpriteCardPerParticleScale_t m_nPerParticleRotation; // offset 0x9EC, size 0x4, align 4 | MPropertyFriendlyName
    SpriteCardPerParticleScale_t m_nPerParticleZoom; // offset 0x9F0, size 0x4, align 4 | MPropertyFriendlyName
    SpriteCardPerParticleScale_t m_nPerParticleDistortion; // offset 0x9F4, size 0x4, align 4 | MPropertyFriendlyName
};
