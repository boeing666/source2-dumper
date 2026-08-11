#pragma once

class CDOTA_Ability_Plus_GuildBanner : public CDOTABaseAbility /*0x0*/  // sizeof 0x5C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CUtlVectorFixedGrowable< CHandle< CBaseEntity >, 10 > m_vecBanners; // offset 0x580, size 0x40, align 8
};
