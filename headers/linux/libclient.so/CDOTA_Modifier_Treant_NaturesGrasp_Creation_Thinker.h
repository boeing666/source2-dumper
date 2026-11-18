#pragma once

class CDOTA_Modifier_Treant_NaturesGrasp_Creation_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 creation_interval; // offset 0x1AF8, size 0x4, align 4
    float32 vines_duration; // offset 0x1AFC, size 0x4, align 4
    int32 vine_spawn_interval; // offset 0x1B00, size 0x4, align 4
    VectorWS m_vInitialLoc; // offset 0x1B04, size 0xC, align 4
    VectorWS m_vFinalLoc; // offset 0x1B10, size 0xC, align 4
    int32 m_iVineCount; // offset 0x1B1C, size 0x4, align 4
    int32 m_iVinesIndex; // offset 0x1B20, size 0x4, align 4
    char _pad_1B24[0x4]; // offset 0x1B24
};
