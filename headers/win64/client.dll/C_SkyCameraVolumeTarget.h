#pragma once

class C_SkyCameraVolumeTarget : public C_BaseEntity /*0x0*/  // sizeof 0x610, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    int16 m_nSkyboxScale; // offset 0x600, size 0x2, align 2
    char _pad_0602[0x6]; // offset 0x602
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0x608, size 0x8, align 8
};
