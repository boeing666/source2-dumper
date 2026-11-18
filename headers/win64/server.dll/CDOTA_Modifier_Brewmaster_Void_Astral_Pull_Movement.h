#pragma once

class CDOTA_Modifier_Brewmaster_Void_Astral_Pull_Movement : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    Vector m_vDirection; // offset 0x1AF8, size 0xC, align 4
    float32 m_flEndTime; // offset 0x1B04, size 0x4, align 4
    float32 m_flCurTime; // offset 0x1B08, size 0x4, align 4
    int32 pull_distance; // offset 0x1B0C, size 0x4, align 4
    int32 damage; // offset 0x1B10, size 0x4, align 4
    float32 pull_duration; // offset 0x1B14, size 0x4, align 4
};
