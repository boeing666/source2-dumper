#pragma once

class CCitadel_Ability_IceDome : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1560, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1558]; // offset 0x0
    GameTime_t m_flDomeStartTime; // offset 0x1558, size 0x4, align 255
    GameTime_t m_flDomeEndTime; // offset 0x155C, size 0x4, align 255
};
