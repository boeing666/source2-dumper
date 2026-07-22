#pragma once

class CNavVolumeBreadthFirstSearch : public CNavVolumeCalculatedVector /*0x0*/  // sizeof 0xA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x88]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x88, size 0xC, align 4
    float32 m_flSearchDist; // offset 0x94, size 0x4, align 4
    char _pad_0098[0x8]; // offset 0x98
};
