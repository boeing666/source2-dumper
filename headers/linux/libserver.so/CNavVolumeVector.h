#pragma once

class CNavVolumeVector : public CNavVolume /*0x0*/  // sizeof 0x80, align 0xFF [vtable] (navlib)
{
public:
    char _pad_0000[0x60]; // offset 0x0
    bool m_bHasBeenPreFiltered; // offset 0x60, size 0x1, align 1
    char _pad_0061[0x1F]; // offset 0x61
};
