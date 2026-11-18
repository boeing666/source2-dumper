#pragma once

class CDOTA_Modifier_BlackDragon_Fireball_Dive : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    VectorWS m_vCenter; // offset 0x1AF8, size 0xC, align 4
    VectorWS m_vLastFireball; // offset 0x1B04, size 0xC, align 4
    VectorWS m_vLastFireballSpawn; // offset 0x1B10, size 0xC, align 4
    bool m_bHasDroppedFireball; // offset 0x1B1C, size 0x1, align 1
    char _pad_1B1D[0x3]; // offset 0x1B1D
    float32 m_flYaw; // offset 0x1B20, size 0x4, align 4
    float32 m_flCurrentTime; // offset 0x1B24, size 0x4, align 4
    float32 dive_length; // offset 0x1B28, size 0x4, align 4
    float32 dive_width; // offset 0x1B2C, size 0x4, align 4
    float32 dive_duration; // offset 0x1B30, size 0x4, align 4
    float32 fireball_spacing; // offset 0x1B34, size 0x4, align 4
    float32 fireball_forward_offset; // offset 0x1B38, size 0x4, align 4
    char _pad_1B3C[0x4]; // offset 0x1B3C
};
