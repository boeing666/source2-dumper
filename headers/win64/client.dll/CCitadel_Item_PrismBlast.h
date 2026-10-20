#pragma once

class CCitadel_Item_PrismBlast : public CCitadel_Item_Bubble /*0x0*/  // sizeof 0x6F60, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B28]; // offset 0x0
    CCitadelAbilityBeam_t m_beam00; // offset 0x1B28, size 0x10D8, align 255
    CCitadelAbilityBeam_t m_beam01; // offset 0x2C00, size 0x10D8, align 255
    CCitadelAbilityBeam_t m_beam02; // offset 0x3CD8, size 0x10D8, align 255
    CCitadelAbilityBeam_t m_beam03; // offset 0x4DB0, size 0x10D8, align 255
    CCitadelAbilityBeam_t m_beam04; // offset 0x5E88, size 0x10D8, align 255
};
