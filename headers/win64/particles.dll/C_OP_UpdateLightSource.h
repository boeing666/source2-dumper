#pragma once

class C_OP_UpdateLightSource : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1F0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    Color m_vColorTint; // offset 0x1D8, size 0x4, align 1 | MPropertyFriendlyName
    float32 m_flBrightnessScale; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flRadiusScale; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMinimumLightingRadius; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaximumLightingRadius; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flPositionDampingConstant; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
};
