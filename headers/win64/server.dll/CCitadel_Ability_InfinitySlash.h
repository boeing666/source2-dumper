#pragma once

class CCitadel_Ability_InfinitySlash : public CCitadelBaseYamatoAbility /*0x0*/  // sizeof 0x1828, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    GameTime_t m_flExplodeEndTime; // offset 0x1818, size 0x4, align 255
    GameTime_t m_flBuffEndTime; // offset 0x181C, size 0x4, align 255
    ParticleIndex_t m_nCastEffect; // offset 0x1820, size 0x4, align 255
    char _pad_1824[0x4]; // offset 0x1824
};
