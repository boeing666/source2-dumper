#pragma once

class CDOTA_Modifier_Treant_NaturesGrasp_Creation_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 creation_interval; // offset 0x1A78, size 0x4, align 4
    float32 vines_duration; // offset 0x1A7C, size 0x4, align 4
    int32 vine_spawn_interval; // offset 0x1A80, size 0x4, align 4
    VectorWS m_vInitialLoc; // offset 0x1A84, size 0xC, align 4
    VectorWS m_vFinalLoc; // offset 0x1A90, size 0xC, align 4
    int32 m_iVineCount; // offset 0x1A9C, size 0x4, align 4
    int32 m_iVinesIndex; // offset 0x1AA0, size 0x4, align 4
    char _pad_1AA4[0x4]; // offset 0x1AA4
};
