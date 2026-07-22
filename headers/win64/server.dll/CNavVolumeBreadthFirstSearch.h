#pragma once

class CNavVolumeBreadthFirstSearch : public CNavVolumeCalculatedVector /*0x0*/  // sizeof 0xC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xA8]; // offset 0x0
    VectorWS m_vStartPos; // offset 0xA8, size 0xC, align 4
    float32 m_flSearchDist; // offset 0xB4, size 0x4, align 4
    char _pad_00B8[0x8]; // offset 0xB8
};
