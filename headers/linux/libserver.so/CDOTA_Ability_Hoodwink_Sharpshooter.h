#pragma once

class CDOTA_Ability_Hoodwink_Sharpshooter : public CDOTABaseAbility /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 max_charge_time; // offset 0x85C, size 0x4, align 4
    VectorWS m_vStartPos; // offset 0x860, size 0xC, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x86C, size 0x4, align 255
    char _pad_0870[0x18]; // offset 0x870
};
