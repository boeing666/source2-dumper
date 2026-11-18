#pragma once

class C_World : public C_BaseModelEntity /*0x0*/  // sizeof 0xDA8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD68]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 >[6] m_skyBoxFaces; // offset 0xD68, size 0x30, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hHeightFogTexture; // offset 0xD98, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hHeightFogMaskTexture; // offset 0xDA0, size 0x8, align 8 | MNotSaved
};
