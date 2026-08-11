#pragma once

class CDOTA_Modifier_Brewmaster_Void_Astral_Pull_Movement : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    Vector m_vDirection; // offset 0x1A78, size 0xC, align 4
    float32 m_flEndTime; // offset 0x1A84, size 0x4, align 4
    float32 m_flCurTime; // offset 0x1A88, size 0x4, align 4
    int32 pull_distance; // offset 0x1A8C, size 0x4, align 4
    int32 damage; // offset 0x1A90, size 0x4, align 4
    float32 pull_duration; // offset 0x1A94, size 0x4, align 4
};
