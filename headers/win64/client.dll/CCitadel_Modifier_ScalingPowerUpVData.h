#pragma once

class CCitadel_Modifier_ScalingPowerUpVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x770, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CUtlVector< ScalingPowerupDefinition_t > m_vecModifierValues; // offset 0x750, size 0x18, align 8
    float32 m_flTimeMin; // offset 0x768, size 0x4, align 4
    float32 m_flTimeMax; // offset 0x76C, size 0x4, align 4
};
