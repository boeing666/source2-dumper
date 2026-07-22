#pragma once

class CUnitStatusOverlayV2 : public CUnitStatusOverlay /*0x0*/  // sizeof 0xD00, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xCB8]; // offset 0x0
    float32 m_flUIScale; // offset 0xCB8, size 0x4, align 4
    char _pad_0CBC[0x44]; // offset 0xCBC
};
