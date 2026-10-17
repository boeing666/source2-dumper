#pragma once

class C_PlayerCosmeticPropClientside : public C_DynamicPropClientside /*0x0*/  // sizeof 0x20E0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1004]; // offset 0x0
    int32 m_iPlayerNum; // offset 0x1004, size 0x4, align 4
    int32 m_iCosmeticType; // offset 0x1008, size 0x4, align 4
    char[4096] m_szProxyTextureName; // offset 0x100C, size 0x1000, align 1
    char _pad_200C[0x4]; // offset 0x200C
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hProxyTexture; // offset 0x2010, size 0x8, align 8
    char _pad_2018[0xA0]; // offset 0x2018
    bool m_bGeneratedShowcaseProps; // offset 0x20B8, size 0x1, align 1
    char _pad_20B9[0x7]; // offset 0x20B9
    CUtlVector< C_PlayerCosmeticPropClientside* > m_vecShowcaseProps; // offset 0x20C0, size 0x18, align 8
    C_EconItemView* m_pShowcaseItem; // offset 0x20D8, size 0x8, align 8
};
