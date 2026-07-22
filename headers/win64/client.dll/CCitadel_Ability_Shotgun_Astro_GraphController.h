#pragma once

class CCitadel_Ability_Shotgun_Astro_GraphController : public CCitadel_Ability_PrimaryWeapon_GraphController /*0x0*/  // sizeof 0x2E8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x298]; // offset 0x0
    CAnimGraphParamRef< bool > m_bShootForward; // offset 0x298, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bShootBackward; // offset 0x2C0, size 0x28, align 8
};
