#pragma once

class CDOTA_Modifier_Mars_Bulwark_Active : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 redirect_chance; // offset 0x1A78, size 0x4, align 4
    float32 redirect_range; // offset 0x1A7C, size 0x4, align 4
    float32 forward_angle; // offset 0x1A80, size 0x4, align 4
    float32 side_angle; // offset 0x1A84, size 0x4, align 4
    float32 redirect_speed_penatly; // offset 0x1A88, size 0x4, align 4
    float32 redirect_close_range; // offset 0x1A8C, size 0x4, align 4
    int32 attack_redirection_grace_distance; // offset 0x1A90, size 0x4, align 4
    bool forced_movement_immunity; // offset 0x1A94, size 0x1, align 1
    char _pad_1A95[0x3]; // offset 0x1A95
    Vector m_vFacing; // offset 0x1A98, size 0xC, align 4
    char _pad_1AA4[0x4]; // offset 0x1AA4
};
