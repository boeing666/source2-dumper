#pragma once

class CDOTA_Ability_PineCone_AcornShot : public CDOTABaseAbility /*0x0*/  // sizeof 0x5C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x5A8]; // offset 0x0
    uint32 m_nAcornTree; // offset 0x5A8, size 0x4, align 4
    float32 projectile_speed; // offset 0x5AC, size 0x4, align 4
    float32 bounce_delay; // offset 0x5B0, size 0x4, align 4
    int32 bounce_range; // offset 0x5B4, size 0x4, align 4
    int32 bounce_count; // offset 0x5B8, size 0x4, align 4
    char _pad_05BC[0x4]; // offset 0x5BC
};
