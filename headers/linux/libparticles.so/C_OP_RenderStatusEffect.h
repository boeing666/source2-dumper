#pragma once

class C_OP_RenderStatusEffect : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x258, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x220]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureColorWarp; // offset 0x220, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDetail2; // offset 0x228, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDiffuseWarp; // offset 0x230, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelColorWarp; // offset 0x238, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelWarp; // offset 0x240, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureSpecularWarp; // offset 0x248, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureEnvMap; // offset 0x250, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
};
