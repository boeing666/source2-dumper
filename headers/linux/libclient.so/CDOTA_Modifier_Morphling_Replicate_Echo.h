#pragma once

class CDOTA_Modifier_Morphling_Replicate_Echo : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 echo_power; // offset 0x1AF8, size 0x4, align 4
    float32 scepter_echo_visible_duration; // offset 0x1AFC, size 0x4, align 4
};
