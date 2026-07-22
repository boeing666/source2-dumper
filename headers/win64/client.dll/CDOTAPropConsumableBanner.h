#pragma once

class CDOTAPropConsumableBanner : public C_DynamicProp /*0x0*/  // sizeof 0xD80, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xD68]; // offset 0x0
    PlayerID_t m_nPlayerID; // offset 0xD68, size 0x4, align 255
    char _pad_0D6C[0x4]; // offset 0xD6C
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hAvatarTexture; // offset 0xD70, size 0x8, align 8
    bool m_bUseAvatar; // offset 0xD78, size 0x1, align 1
    char _pad_0D79[0x7]; // offset 0xD79
};
