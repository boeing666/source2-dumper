#pragma once

class CCitadel_Item_PrismBlast : public CCitadel_Item_Bubble /*0x0*/  // sizeof 0x6160, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x12A0]; // offset 0x0
    CCitadelAbilityBeam_t m_beam00; // offset 0x12A0, size 0xFC0, align 255 | MNetworkEnable
    CCitadelAbilityBeam_t m_beam01; // offset 0x2260, size 0xFC0, align 255 | MNetworkEnable
    CCitadelAbilityBeam_t m_beam02; // offset 0x3220, size 0xFC0, align 255 | MNetworkEnable
    CCitadelAbilityBeam_t m_beam03; // offset 0x41E0, size 0xFC0, align 255 | MNetworkEnable
    CCitadelAbilityBeam_t m_beam04; // offset 0x51A0, size 0xFC0, align 255 | MNetworkEnable
};
