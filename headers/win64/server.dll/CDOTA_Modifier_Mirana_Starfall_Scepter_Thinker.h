#pragma once

class CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 interval_scepter; // offset 0x1AF8, size 0x4, align 4
    bool bInBufferTime; // offset 0x1AFC, size 0x1, align 1
    char _pad_1AFD[0x3]; // offset 0x1AFD
    int32 damage; // offset 0x1B00, size 0x4, align 4
    GameTime_t m_flLastApplyTime; // offset 0x1B04, size 0x4, align 255
};
