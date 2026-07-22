#pragma once

class C_PlayerCosmeticPropClientside : public C_DynamicPropClientside /*0x0*/  // sizeof 0x1F70, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xE8C]; // offset 0x0
    int32 m_iPlayerNum; // offset 0xE8C, size 0x4, align 4
    int32 m_iCosmeticType; // offset 0xE90, size 0x4, align 4
    char[4096] m_szProxyTextureName; // offset 0xE94, size 0x1000, align 1
    char _pad_1E94[0x4]; // offset 0x1E94
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hProxyTexture; // offset 0x1E98, size 0x8, align 8
    char _pad_1EA0[0xA0]; // offset 0x1EA0
    bool m_bGeneratedShowcaseProps; // offset 0x1F40, size 0x1, align 1
    char _pad_1F41[0x7]; // offset 0x1F41
    CUtlVector< C_PlayerCosmeticPropClientside* > m_vecShowcaseProps; // offset 0x1F48, size 0x18, align 8
    C_EconItemView* m_pShowcaseItem; // offset 0x1F60, size 0x8, align 8
    char _pad_1F68[0x8]; // offset 0x1F68
};
