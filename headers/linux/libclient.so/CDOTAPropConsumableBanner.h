#pragma once

class CDOTAPropConsumableBanner : public C_DynamicProp /*0x0*/  // sizeof 0x1070, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1050]; // offset 0x0
    PlayerID_t m_nPlayerID; // offset 0x1050, size 0x4, align 255
    char _pad_1054[0x4]; // offset 0x1054
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hAvatarTexture; // offset 0x1058, size 0x8, align 8
    bool m_bUseAvatar; // offset 0x1060, size 0x1, align 1
    char _pad_1061[0xF]; // offset 0x1061
};
