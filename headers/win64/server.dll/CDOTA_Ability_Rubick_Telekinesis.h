#pragma once

class CDOTA_Ability_Rubick_Telekinesis : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    VectorWS m_vStartLocation; // offset 0x580, size 0xC, align 4
    VectorWS m_vLandLocation; // offset 0x58C, size 0xC, align 4
    GameTime_t m_flStartTime; // offset 0x598, size 0x4, align 255
    char _pad_059C[0x4]; // offset 0x59C
    CDOTA_BaseNPC* m_pTarget; // offset 0x5A0, size 0x8, align 8
};
