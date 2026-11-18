#pragma once

class CDOTA_Modifier_Rattletrap_CogPush : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0x1AF8, size 0x4, align 255
    float32 push_length; // offset 0x1AFC, size 0x4, align 4
    float32 push_duration; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
};
