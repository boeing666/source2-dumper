#pragma once

class CDOTAPropConsumableBanner : public C_DynamicProp /*0x0*/  // sizeof 0x10E0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x10C0]; // offset 0x0
    PlayerID_t m_nPlayerID; // offset 0x10C0, size 0x4, align 255
    char _pad_10C4[0x4]; // offset 0x10C4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hAvatarTexture; // offset 0x10C8, size 0x8, align 8
    bool m_bUseAvatar; // offset 0x10D0, size 0x1, align 1
    char _pad_10D1[0xF]; // offset 0x10D1
};
