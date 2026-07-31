#pragma once

class CDOTA_Modifier_Teleporting : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 m_fChannelTime; // offset 0x1A78, size 0x4, align 4
    VectorWS m_vStart; // offset 0x1A7C, size 0xC, align 4
    VectorWS m_vEnd; // offset 0x1A88, size 0xC, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
};
