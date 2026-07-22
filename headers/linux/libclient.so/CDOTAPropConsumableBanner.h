#pragma once

class CDOTAPropConsumableBanner : public C_DynamicProp /*0x0*/  // sizeof 0xEF0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xED8]; // offset 0x0
    PlayerID_t m_nPlayerID; // offset 0xED8, size 0x4, align 255
    char _pad_0EDC[0x4]; // offset 0xEDC
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hAvatarTexture; // offset 0xEE0, size 0x8, align 8
    bool m_bUseAvatar; // offset 0xEE8, size 0x1, align 1
    char _pad_0EE9[0x7]; // offset 0xEE9
};
