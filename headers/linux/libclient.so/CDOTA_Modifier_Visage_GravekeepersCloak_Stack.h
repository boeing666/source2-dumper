#pragma once

class CDOTA_Modifier_Visage_GravekeepersCloak_Stack : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    bool m_bIsRecovering; // offset 0x1A58, size 0x1, align 1
    char _pad_1A59[0x3]; // offset 0x1A59
    int32[4] m_nFXIndex; // offset 0x1A5C, size 0x10, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
};
