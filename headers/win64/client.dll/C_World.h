#pragma once

class C_World : public C_BaseModelEntity /*0x0*/  // sizeof 0xAC8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xA88]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 >[6] m_skyBoxFaces; // offset 0xA88, size 0x30, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hHeightFogTexture; // offset 0xAB8, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hHeightFogMaskTexture; // offset 0xAC0, size 0x8, align 8 | MNotSaved
};
