#pragma once

class C_PlayerCosmeticPropClientside : public C_DynamicPropClientside /*0x0*/  // sizeof 0x2150, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1074]; // offset 0x0
    int32 m_iPlayerNum; // offset 0x1074, size 0x4, align 4
    int32 m_iCosmeticType; // offset 0x1078, size 0x4, align 4
    char[4096] m_szProxyTextureName; // offset 0x107C, size 0x1000, align 1
    char _pad_207C[0x4]; // offset 0x207C
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hProxyTexture; // offset 0x2080, size 0x8, align 8
    char _pad_2088[0xA0]; // offset 0x2088
    bool m_bGeneratedShowcaseProps; // offset 0x2128, size 0x1, align 1
    char _pad_2129[0x7]; // offset 0x2129
    CUtlVector< C_PlayerCosmeticPropClientside* > m_vecShowcaseProps; // offset 0x2130, size 0x18, align 8
    C_EconItemView* m_pShowcaseItem; // offset 0x2148, size 0x8, align 8
};
