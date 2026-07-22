#pragma once

struct TextureGroup_t  // sizeof 0xB98, align 0x8 (particles) {MGetKV3ClassDefaults}
{
    bool m_bEnabled; // offset 0x0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bReplaceTextureWithGradient; // offset 0x1, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0002[0x6]; // offset 0x2
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // offset 0x8, size 0x8, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertyAttributeEditor
    CColorGradient m_Gradient; // offset 0x10, size 0x18, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    SpriteCardTextureType_t m_nTextureType; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName
    SpriteCardTextureChannel_t m_nTextureChannels; // offset 0x2C, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleTextureLayerBlendType_t m_nTextureBlendMode; // offset 0x30, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0034[0x4]; // offset 0x34
    CParticleCollectionRendererFloatInput m_flTextureBlend; // offset 0x38, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    TextureControls_t m_TextureControls; // offset 0x1A0, size 0x9F8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
};
