#pragma once

class C_PlayerCosmeticPropClientside : public C_DynamicPropClientside /*0x0*/  // sizeof 0xF00, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xD20]; // offset 0x0
    int32 m_iPlayerNum; // offset 0xD20, size 0x4, align 4
    int32 m_iCosmeticType; // offset 0xD24, size 0x4, align 4
    char[260] m_szProxyTextureName; // offset 0xD28, size 0x104, align 1
    char _pad_0E2C[0x4]; // offset 0xE2C
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hProxyTexture; // offset 0xE30, size 0x8, align 8
    char _pad_0E38[0xA0]; // offset 0xE38
    bool m_bGeneratedShowcaseProps; // offset 0xED8, size 0x1, align 1
    char _pad_0ED9[0x7]; // offset 0xED9
    CUtlVector< C_PlayerCosmeticPropClientside* > m_vecShowcaseProps; // offset 0xEE0, size 0x18, align 8
    C_EconItemView* m_pShowcaseItem; // offset 0xEF8, size 0x8, align 8
};
