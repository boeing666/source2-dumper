#pragma once

class CCitadel_Ability_InfinitySlash : public CCitadelBaseYamatoAbility /*0x0*/  // sizeof 0x1A58, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1A50]; // offset 0x0
    GameTime_t m_flExplodeEndTime; // offset 0x1A50, size 0x4, align 255
    GameTime_t m_flBuffEndTime; // offset 0x1A54, size 0x4, align 255
};
