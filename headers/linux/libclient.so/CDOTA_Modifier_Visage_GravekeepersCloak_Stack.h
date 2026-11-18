#pragma once

class CDOTA_Modifier_Visage_GravekeepersCloak_Stack : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    bool m_bIsRecovering; // offset 0x1AF8, size 0x1, align 1
    char _pad_1AF9[0x3]; // offset 0x1AF9
    int32[4] m_nFXIndex; // offset 0x1AFC, size 0x10, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
