#pragma once

class C_DOTA_Ability_PineCone_AcornShot : public C_DOTABaseAbility /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    uint32 m_nAcornTree; // offset 0x828, size 0x4, align 4
    float32 projectile_speed; // offset 0x82C, size 0x4, align 4
    float32 bounce_delay; // offset 0x830, size 0x4, align 4
    int32 bounce_range; // offset 0x834, size 0x4, align 4
    int32 bounce_count; // offset 0x838, size 0x4, align 4
    char _pad_083C[0x4]; // offset 0x83C
};
