#pragma once

class CCitadel_Modifier_Passive_Camouflage : public CCitadelModifier /*0x0*/  // sizeof 0x158, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    float32 m_flRate; // offset 0x148, size 0x4, align 4
    VectorWS m_vLastPosition; // offset 0x14C, size 0xC, align 4
};
