#pragma once

class CNavVolumeSphericalShell : public CNavVolumeSphere /*0x0*/  // sizeof 0x90, align 0xFF [vtable] (navlib)
{
public:
    char _pad_0000[0x88]; // offset 0x0
    float32 m_flRadiusInner; // offset 0x88, size 0x4, align 4
    char _pad_008C[0x4]; // offset 0x8C
};
