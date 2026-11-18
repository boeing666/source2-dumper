#pragma once

class C_PlayerCosmeticPropClientside : public C_DynamicPropClientside /*0x0*/  // sizeof 0x10D0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xEF0]; // offset 0x0
    int32 m_iPlayerNum; // offset 0xEF0, size 0x4, align 4
    int32 m_iCosmeticType; // offset 0xEF4, size 0x4, align 4
    char[260] m_szProxyTextureName; // offset 0xEF8, size 0x104, align 1
    char _pad_0FFC[0x4]; // offset 0xFFC
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hProxyTexture; // offset 0x1000, size 0x8, align 8
    char _pad_1008[0xA0]; // offset 0x1008
    bool m_bGeneratedShowcaseProps; // offset 0x10A8, size 0x1, align 1
    char _pad_10A9[0x7]; // offset 0x10A9
    CUtlVector< C_PlayerCosmeticPropClientside* > m_vecShowcaseProps; // offset 0x10B0, size 0x18, align 8
    C_EconItemView* m_pShowcaseItem; // offset 0x10C8, size 0x8, align 8
};
