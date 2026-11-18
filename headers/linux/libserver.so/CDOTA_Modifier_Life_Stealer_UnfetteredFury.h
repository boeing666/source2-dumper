#pragma once

class CDOTA_Modifier_Life_Stealer_UnfetteredFury : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 magic_resist; // offset 0x1AF8, size 0x4, align 4
    int32 status_resist; // offset 0x1AFC, size 0x4, align 4
};
