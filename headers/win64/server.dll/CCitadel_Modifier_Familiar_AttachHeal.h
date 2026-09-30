#pragma once

class CCitadel_Modifier_Familiar_AttachHeal : public CCitadelModifier /*0x0*/  // sizeof 0x2A8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    float32 m_flTotalPendingHeal; // offset 0x140, size 0x4, align 4
    float32 m_flTotalHeal; // offset 0x144, size 0x4, align 4
    char _pad_0148[0x160]; // offset 0x148
};
