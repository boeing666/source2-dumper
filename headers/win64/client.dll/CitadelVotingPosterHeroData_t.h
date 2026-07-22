#pragma once

struct CitadelVotingPosterHeroData_t  // sizeof 0x1E8, align 0x8 (client) {MGetKV3ClassDefaults}
{
    HeroID_t m_HeroID; // offset 0x0, size 0x4, align 255
    char _pad_0004[0x4]; // offset 0x4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCTextureBase > > m_strPosterImage; // offset 0x8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCTextureBase > > m_strPosterImageDamaged; // offset 0xE8, size 0xE0, align 8
    CPanoramaImageName m_strPosterImageThumbnail; // offset 0x1C8, size 0x10, align 8
    CSoundEventName m_strDamagedSound; // offset 0x1D8, size 0x10, align 8
};
