#pragma once

class CDOTA_Ability_Rubick_Telekinesis : public CDOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    VectorWS m_vStartLocation; // offset 0x85C, size 0xC, align 4
    VectorWS m_vLandLocation; // offset 0x868, size 0xC, align 4
    GameTime_t m_flStartTime; // offset 0x874, size 0x4, align 255
    CDOTA_BaseNPC* m_pTarget; // offset 0x878, size 0x8, align 8
};
