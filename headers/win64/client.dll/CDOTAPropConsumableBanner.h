#pragma once

class CDOTAPropConsumableBanner : public C_DynamicProp /*0x0*/  // sizeof 0xF50, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xF38]; // offset 0x0
    PlayerID_t m_nPlayerID; // offset 0xF38, size 0x4, align 255
    char _pad_0F3C[0x4]; // offset 0xF3C
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hAvatarTexture; // offset 0xF40, size 0x8, align 8
    bool m_bUseAvatar; // offset 0xF48, size 0x1, align 1
    char _pad_0F49[0x7]; // offset 0xF49
};
