#pragma once

class CCitadel_Modifier_Passive_Camouflage : public CCitadelModifier /*0x0*/  // sizeof 0x148, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    float32 m_flRate; // offset 0x138, size 0x4, align 4
    VectorWS m_vLastPosition; // offset 0x13C, size 0xC, align 4
};
