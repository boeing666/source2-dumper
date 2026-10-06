#pragma once

class CCitadel_Modifier_Unstick : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x160, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x150, size 0xC, align 4
    char _pad_015C[0x4]; // offset 0x15C
};
