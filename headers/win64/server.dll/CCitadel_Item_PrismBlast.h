#pragma once

class CCitadel_Item_PrismBlast : public CCitadel_Item_Bubble /*0x0*/  // sizeof 0x67D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x18F0]; // offset 0x0
    CCitadelAbilityBeam_t m_beam00; // offset 0x18F0, size 0xFC8, align 255
    CCitadelAbilityBeam_t m_beam01; // offset 0x28B8, size 0xFC8, align 255
    CCitadelAbilityBeam_t m_beam02; // offset 0x3880, size 0xFC8, align 255
    CCitadelAbilityBeam_t m_beam03; // offset 0x4848, size 0xFC8, align 255
    CCitadelAbilityBeam_t m_beam04; // offset 0x5810, size 0xFC8, align 255
};
