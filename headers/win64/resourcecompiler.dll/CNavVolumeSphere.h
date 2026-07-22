#pragma once

class CNavVolumeSphere : public CNavVolume /*0x0*/  // sizeof 0x88, align 0xFF [vtable] (navlib)
{
public:
    char _pad_0000[0x78]; // offset 0x0
    VectorWS m_vCenter; // offset 0x78, size 0xC, align 4
    float32 m_flRadius; // offset 0x84, size 0x4, align 4
};
