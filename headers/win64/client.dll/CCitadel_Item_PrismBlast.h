#pragma once

class CCitadel_Item_PrismBlast : public CCitadel_Item_Bubble /*0x0*/  // sizeof 0x6F58, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B20]; // offset 0x0
    CCitadelAbilityBeam_t m_beam00; // offset 0x1B20, size 0x10D8, align 255
    CCitadelAbilityBeam_t m_beam01; // offset 0x2BF8, size 0x10D8, align 255
    CCitadelAbilityBeam_t m_beam02; // offset 0x3CD0, size 0x10D8, align 255
    CCitadelAbilityBeam_t m_beam03; // offset 0x4DA8, size 0x10D8, align 255
    CCitadelAbilityBeam_t m_beam04; // offset 0x5E80, size 0x10D8, align 255
};
