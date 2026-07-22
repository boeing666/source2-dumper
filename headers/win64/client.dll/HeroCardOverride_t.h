#pragma once

struct HeroCardOverride_t  // sizeof 0x30, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CPanoramaImageName m_strIconHeroCard; // offset 0x0, size 0x10, align 8
    CPanoramaImageName m_strIconHeroCardCritical; // offset 0x10, size 0x10, align 8
    CPanoramaImageName m_strIconHeroCardGloat; // offset 0x20, size 0x10, align 8
};
