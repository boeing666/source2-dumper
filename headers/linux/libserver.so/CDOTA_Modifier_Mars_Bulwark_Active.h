#pragma once

class CDOTA_Modifier_Mars_Bulwark_Active : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 redirect_chance; // offset 0x1AA8, size 0x4, align 4
    float32 redirect_range; // offset 0x1AAC, size 0x4, align 4
    float32 forward_angle; // offset 0x1AB0, size 0x4, align 4
    float32 side_angle; // offset 0x1AB4, size 0x4, align 4
    float32 redirect_speed_penatly; // offset 0x1AB8, size 0x4, align 4
    float32 redirect_close_range; // offset 0x1ABC, size 0x4, align 4
    int32 attack_redirection_grace_distance; // offset 0x1AC0, size 0x4, align 4
    bool forced_movement_immunity; // offset 0x1AC4, size 0x1, align 1
    char _pad_1AC5[0x3]; // offset 0x1AC5
    Vector m_vFacing; // offset 0x1AC8, size 0xC, align 4
    char _pad_1AD4[0x4]; // offset 0x1AD4
};
