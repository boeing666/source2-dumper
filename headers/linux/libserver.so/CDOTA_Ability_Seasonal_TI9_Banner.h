#pragma once

class CDOTA_Ability_Seasonal_TI9_Banner : public CDOTABaseAbility /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    CUtlVectorFixedGrowable< CHandle< CBaseEntity >, 10 > m_vecBanners; // offset 0x860, size 0x40, align 8
};
