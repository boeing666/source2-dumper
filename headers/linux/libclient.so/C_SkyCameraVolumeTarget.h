#pragma once

class C_SkyCameraVolumeTarget : public C_BaseEntity /*0x0*/  // sizeof 0x788, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x77C]; // offset 0x0
    int16 m_nSkyboxScale; // offset 0x77C, size 0x2, align 2
    char _pad_077E[0x2]; // offset 0x77E
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0x780, size 0x8, align 8
};
