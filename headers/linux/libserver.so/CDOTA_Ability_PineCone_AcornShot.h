#pragma once

class CDOTA_Ability_PineCone_AcornShot : public CDOTABaseAbility /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x888]; // offset 0x0
    uint32 m_nAcornTree; // offset 0x888, size 0x4, align 4
    float32 projectile_speed; // offset 0x88C, size 0x4, align 4
    float32 bounce_delay; // offset 0x890, size 0x4, align 4
    int32 bounce_range; // offset 0x894, size 0x4, align 4
    int32 bounce_count; // offset 0x898, size 0x4, align 4
    char _pad_089C[0x4]; // offset 0x89C
};
