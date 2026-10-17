#pragma once

class C_PlayerCosmeticPropClientside : public C_DynamicPropClientside /*0x0*/  // sizeof 0x1070, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xE90]; // offset 0x0
    int32 m_iPlayerNum; // offset 0xE90, size 0x4, align 4
    int32 m_iCosmeticType; // offset 0xE94, size 0x4, align 4
    char[260] m_szProxyTextureName; // offset 0xE98, size 0x104, align 1
    char _pad_0F9C[0x4]; // offset 0xF9C
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hProxyTexture; // offset 0xFA0, size 0x8, align 8
    char _pad_0FA8[0xA0]; // offset 0xFA8
    bool m_bGeneratedShowcaseProps; // offset 0x1048, size 0x1, align 1
    char _pad_1049[0x7]; // offset 0x1049
    CUtlVector< C_PlayerCosmeticPropClientside* > m_vecShowcaseProps; // offset 0x1050, size 0x18, align 8
    C_EconItemView* m_pShowcaseItem; // offset 0x1068, size 0x8, align 8
};
