#pragma once

class CCitadel_Pickup_ArtistDrawingVData : public CCitadel_Pickup_VData /*0x0*/  // sizeof 0xA28, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA18]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ArtistModifer; // offset 0xA18, size 0x10, align 8
};
