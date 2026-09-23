#pragma once

class CSkyCameraVolumeTarget : public CBaseEntity /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    int16 m_nSkyboxScale; // offset 0x788, size 0x2, align 2
    char _pad_078A[0x6]; // offset 0x78A
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0x790, size 0x8, align 8
};
