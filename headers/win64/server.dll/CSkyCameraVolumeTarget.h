#pragma once

class CSkyCameraVolumeTarget : public CBaseEntity /*0x0*/  // sizeof 0x4B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    int16 m_nSkyboxScale; // offset 0x4A8, size 0x2, align 2
    char _pad_04AA[0x6]; // offset 0x4AA
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0x4B0, size 0x8, align 8
};
