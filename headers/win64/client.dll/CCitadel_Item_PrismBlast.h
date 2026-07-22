#pragma once

class CCitadel_Item_PrismBlast : public CCitadel_Item_Bubble /*0x0*/  // sizeof 0x6910, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1500]; // offset 0x0
    CCitadelAbilityBeam_t m_beam00; // offset 0x1500, size 0x10D0, align 255 | MNetworkEnable
    CCitadelAbilityBeam_t m_beam01; // offset 0x25D0, size 0x10D0, align 255 | MNetworkEnable
    CCitadelAbilityBeam_t m_beam02; // offset 0x36A0, size 0x10D0, align 255 | MNetworkEnable
    CCitadelAbilityBeam_t m_beam03; // offset 0x4770, size 0x10D0, align 255 | MNetworkEnable
    CCitadelAbilityBeam_t m_beam04; // offset 0x5840, size 0x10D0, align 255 | MNetworkEnable
};
